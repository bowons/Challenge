// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_ComboAttackBase.h"

#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Components/ComboManagerComponent.h"
#include "GAS/MyAttributeSet.h"
#include "GAS/MyGameplayTags.h"
#include "Subsystem/CombatManagerSubsystem.h"

UGA_ComboAttackBase::UGA_ComboAttackBase()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	
	// 공격 중 태그
	//ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking")));
	const FMyGameplayTags& Tags = FMyGameplayTags::Get();
		ActivationOwnedTags.AddTag(Tags.State_Attacking);
	
	// 10강: 기본 Socket 설정 (Blueprint에서 오버라이드 가능)
	TraceSocketName = FName("hand_r");
	TraceRadius = 20.0f;
}

void UGA_ComboAttackBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}
	
	// ★ 10강 Part 4에서 추가: Hit 기록 초기화
	ResetHitActors();

	// ★ 10강 Part 2에서 추가: Mesh 캐시
	CacheMeshComponent();
	
	// 이 Ability의 AttackData 찾기
	const FComboData* MyComboData = FindMyAttackData(ActorInfo);
	
	// Stamina Cost 적용 (SetByCaller)
	if (MyComboData && MyComboData->StaminaCost > 0.0f && StaminaCostEffectClass)
	{
		FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(StaminaCostEffectClass, 1.0f);
		if (SpecHandle.IsValid())
		{
			// SetByCaller로 Cost 값 설정
			SpecHandle.Data->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Stamina.Cost")), -MyComboData->StaminaCost);
			
			// 자신에게 적용
			ApplyGameplayEffectSpecToOwner(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, SpecHandle);
			UE_LOG(LogTemp, Log, TEXT("[ComboAttack] Applied Stamina Cost: %.1f"), MyComboData->StaminaCost);
		}
	}
	
	if (!AttackMontage)
	{
		UE_LOG(LogTemp, Error, TEXT("[ComboAttack] No Montage!"));
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}
	
	// Montage 재생 (Section 지정)
	UAbilityTask_PlayMontageAndWait* Task =
		UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(
			this, NAME_None, AttackMontage, 1.0f, SectionName);

	Task->OnCompleted.AddDynamic(this, &UGA_ComboAttackBase::OnMontageCompleted); // ★ 부모 콜백
	Task->OnBlendOut.AddDynamic(this, &UGA_ComboAttackBase::OnMontageCompleted);
	Task->OnInterrupted.AddDynamic(this, &UGA_ComboAttackBase::OnMontageCompleted);
	Task->OnCancelled.AddDynamic(this, &UGA_ComboAttackBase::OnMontageCancelled);
	Task->ReadyForActivation();
	
	// ========================================
	// 전투 매니저에 전투 시작/갱신 알림
	// ========================================
	if (UWorld* World = GetWorld())
	{
		if (UCombatManagerSubsystem* CombatManager = World->GetSubsystem<UCombatManagerSubsystem>())
		{
			CombatManager->StartCombat();
		}
	}
}

bool UGA_ComboAttackBase::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	// 부모 체크 (기본 조건)
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	// 이 Ability의 AttackData 찾기
	const FComboData* MyComboData = FindMyAttackData(ActorInfo);
	if (!MyComboData)
	{
		UE_LOG(LogTemp, Warning, TEXT("[ComboAttack] AttackData not found for this ability!"));
		return false;
	}
	
	// Stamina 체크
	UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
	if (!ASC)
	{
		return false;
	}
	
	const UMyAttributeSet* AttributeSet = ASC->GetSet<UMyAttributeSet>();
	if (!AttributeSet)
	{
		return false;
	}
	
	float CurrentStamina = AttributeSet->GetStamina();
	float RequiredStamina = MyComboData->StaminaCost;

	if (CurrentStamina < RequiredStamina)
	{
		UE_LOG(LogTemp, Warning, TEXT("[ComboAttack] Not enough Stamina! (%.1f /%.1f)"),
			CurrentStamina, RequiredStamina);
		return false;  // Stamina 부족 → 활성화 거부
	}

	UE_LOG(LogTemp, Log, TEXT("[ComboAttack] CanActivate - Stamina OK (%.1f /%.1f)"),
		CurrentStamina, RequiredStamina);
	
    return true;
}

const FComboData* UGA_ComboAttackBase::FindMyAttackData(const FGameplayAbilityActorInfo* ActorInfo) const
{
	AActor* AvatarActor = ActorInfo->AvatarActor.Get();
	if (!AvatarActor)
	{
		return nullptr;
	}
	
	// ComboManager에서 AttackList 가져오기
	UComboManagerComponent* ComboManager = AvatarActor->FindComponentByClass<UComboManagerComponent>();
	if (!ComboManager)
	{
		return nullptr;
	}
	
	// 이 Ability의 AbilityTag와 매칭되는 데이터 찾기
	for (const FComboData& AttackData : ComboManager->AttackList)
	{
		if (AbilityTags.HasTag(AttackData.AbilityTag))
		{
			return &AttackData;
		}
	}
	
	return nullptr;
}
