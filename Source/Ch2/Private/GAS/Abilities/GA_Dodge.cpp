// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_Dodge.h"

#include "AbilitySystemComponent.h"
#include "MyCharacterBase.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UGA_Dodge::UGA_Dodge()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	
	AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Dodge")));
	
	// 공격중엔 닷지 불가
	ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking")));
	// 이미 닷지 중이면 닷지 불가
	ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Dodging")));
	
	// 스턴/사망 시 닷지 불가
	ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Stunned")));
	ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Dead")));
	
	// 닷지 중 상태 Tag (자동 추가/제거)
	ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Dodging")));
	
}

void UGA_Dodge::BeginDodgeWindow()
{
	if (bIsDodging) return;
	
	bIsDodging = true;
	
	if (!DodgeEffectClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("[GA_Dodge] No DodgeEffectClass!"));
		return;
	}
	
	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
	if (!ASC) return;
	
	// Effect Context 생성
	FGameplayEffectContextHandle Context = ASC->MakeEffectContext();
	Context.AddSourceObject(GetAvatarActorFromActorInfo());;
	
	FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(DodgeEffectClass, 1.f, Context);
	if (SpecHandle.IsValid())
	{
		SpecHandle.Data->SetSetByCallerMagnitude(
	        FGameplayTag::RequestGameplayTag(FName("Data.Defense")), 100.f
		);
		
		DodgeBuffHandle = ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		UE_LOG(LogTemp, Log, TEXT("[GA_Dodge] Dodge Effect Applied"));
	}
}

void UGA_Dodge::EndDodgeWindow()
{
	if (!bIsDodging) return;
	
	bIsDodging = false;
	
	if (!DodgeBuffHandle.IsValid()) return;

	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
	if (!ASC) return;

	// ★ Handle로 특정 Effect 제거
	ASC->RemoveActiveGameplayEffect(DodgeBuffHandle);

	// Handle 무효화
	DodgeBuffHandle.Invalidate();

	UE_LOG(LogTemp, Log, TEXT("[Dodge] Dodge Buff Removed"));
}

void UGA_Dodge::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}
	
	// Montage 체크
	if (!DodgeMontage)
	{
		UE_LOG(LogTemp, Warning, TEXT("[GA_Dodge] No DodgeMontage!"));
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	if (AMyCharacterBase* Character = Cast<AMyCharacterBase>(GetAvatarActorFromActorInfo()))
	{
		FVector InputDir = Character->GetDodgeDirection();
		if (InputDir.IsNearlyZero())
		{
			InputDir = Character->GetActorForwardVector();
		}
		InputDir = InputDir.GetSafeNormal();

		FRotator NewRotation = InputDir.Rotation();
		Character->SetActorRotation(NewRotation);
	}
	
	// Montage 실행
	//UAbilityTask_PlayMontageAndWait* MontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this, NAME_None, DodgeMontage, 1.0f);
	UAbilityTask_PlayMontageAndWait* MontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(
	this, NAME_None, DodgeMontage, 1.5f);
	
	if (MontageTask)
	{
		MontageTask->OnCompleted.AddDynamic(this, &UGA_Dodge::OnMontageCompleted);
		MontageTask->OnCancelled.AddDynamic(this, &UGA_Dodge::OnMontageCancelled);
		MontageTask->OnInterrupted.AddDynamic(this, &UGA_Dodge::OnMontageCancelled);
		MontageTask->ReadyForActivation();
	}
	
}

void UGA_Dodge::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UGA_Dodge::OnMontageCompleted()
{
	// 정상 종료
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UGA_Dodge::OnMontageCancelled()
{
	// 취소 종료
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}
