// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_Blocking.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "GAS/MyAttributeSet.h"

UGA_Blocking::UGA_Blocking()
{
    // 인스턴스 참조로 ReleaseBlock() 호출하기 위해
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

    AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Block")));

    // 공격 중 방어 불가 (계층 Tag로 모든 공격 차단)
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking")));

    // 이미 방어 중이면 다시 발동 불가
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Blocking")));

    // 스턴/사망 시 방어 불가
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Stunned")));
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Dead")));

    // 방어 중 상태 Tag (자동 추가/제거)
    // → ABP에서 이 Tag를 체크하여 IsBlocking 설정
    ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Blocking")));
}

void UGA_Blocking::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    // 1. 이동 제한 (방어 중 정지)
    SetMovementRestriction(true);

    // 2. Defense 버프 적용
    ApplyDefenseBuff();

    // 3. 스테미너 소모 시작
    ApplyStaminaDrain();

    // 4. Stamina 변화 감지 바인딩
    UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
    if (ASC)
    {
        StaminaChangeDelegateHandle = ASC->GetGameplayAttributeValueChangeDelegate(
            UMyAttributeSet::GetStaminaAttribute()
        ).AddUObject(this, &UGA_Blocking::OnStaminaChanged);
    }

#if ENABLE_DRAW_DEBUG
    AActor* Avatar = GetAvatarActorFromActorInfo();

    if (Avatar)
    {
        FVector Location = Avatar->GetActorLocation();
        FVector Forward = Avatar->GetActorForwardVector();

        // 정면 방향 파란색
        DrawDebugLine(GetWorld(), Location, Location + Forward * 200.f, FColor::Blue, false, 3.f, 0, 2.f);

        // 블록 가능 범위 (녹색, 좌우 60)
        FVector Left = Forward.RotateAngleAxis(-60.f, FVector::UpVector);
        FVector Right = Forward.RotateAngleAxis(60.f, FVector::UpVector);

        DrawDebugLine(GetWorld(), Location, Location + Left * 150.f, FColor::Green, false, 3.f, 0, 1.f);
        DrawDebugLine(GetWorld(), Location, Location + Right * 150.f, FColor::Green, false, 3.f, 0, 1.f);
    }

#endif

    UE_LOG(LogTemp, Log, TEXT("[Block] Activated - Blocking!"));

    // ============================================================
    // ★ 핵심: EndAbility() 호출하지 않음!
    // ============================================================
    // 이 Ability는 EndAbility를 외부에서 호출할 때까지 유지됨
    // 종료 방법:
    // 1. ReleaseBlock() 호출 (버튼 해제)
    // 2. 다른 Ability가 Cancel (피격 등)
    // 3. 사망 (Cancel)
    //
    // ★ 애니메이션은 ABP에서 처리!
    // State.Blocking Tag → ABP에서 감지 → IsBlocking = true → 상체 블렌드
}

void UGA_Blocking::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
    // Stamina 변화 감지 해제
    UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
    if (ASC && StaminaChangeDelegateHandle.IsValid())
    {
        ASC->GetGameplayAttributeValueChangeDelegate(
            UMyAttributeSet::GetStaminaAttribute()
        ).Remove(StaminaChangeDelegateHandle);
        StaminaChangeDelegateHandle.Reset();
    }

    // 1. 이동 제한 해제
    SetMovementRestriction(false);

    // 2-1. Defense 버프 제거
    RemoveDefenseBuff();
    
    // 2-2. 스테미너 소모 중지
    RemoveStaminaDrain();

    // 3. 부모 EndAbility 호출
    Super::EndAbility(Handle, ActorInfo, ActivationInfo,
        bReplicateEndAbility, bWasCancelled);

    UE_LOG(LogTemp, Log, TEXT("[Block] Ended (Cancelled:%s)"),
        bWasCancelled ? TEXT("Yes") : TEXT("No"));
}

bool UGA_Blocking::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
    if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags,
        TargetTags, OptionalRelevantTags))
    {
        return false;
    }

    // 스태미너 체크
    UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
    if (ASC)
    {
        float CurrentStamina = ASC->GetNumericAttribute(
            UMyAttributeSet::GetStaminaAttribute());

        if (CurrentStamina < MinStaminaToBlock)
        {
            UE_LOG(LogTemp, Warning,
                TEXT("[Block] Not enough Stamina:%.1f <%.1f"),
                CurrentStamina, MinStaminaToBlock);
            return false;
        }
    }

    return true;
}

void UGA_Blocking::ReleaseBlock()
{
    UE_LOG(LogTemp, Log, TEXT("[Block] Released"));

    // 정상 종료 (bWasCancelled = false)
    EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UGA_Blocking::ApplyDefenseBuff()
{
    if (!DefenseBuffEffect)
    {
        UE_LOG(LogTemp, Warning, TEXT("[Block] No DefenseBuffEffect set!"));

        return;
    }

    UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
    if (!ASC) return;

    // Effect Context 생성
    FGameplayEffectContextHandle Context = ASC->MakeEffectContext();
    Context.AddSourceObject(GetAvatarActorFromActorInfo());

    FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(DefenseBuffEffect, 1.f, Context);
    if (SpecHandle.IsValid())
    {
        // ★ Infinite Duration Effect → Handle 저장 필수!
        DefenseBuffHandle = ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
        
        UE_LOG(LogTemp, Log, TEXT("[Block] Defense Buff Applied"));
    }
}

void UGA_Blocking::RemoveDefenseBuff()
{
    if (!DefenseBuffHandle.IsValid()) return;

    UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
    if (!ASC) return;

    // ★ Handle로 특정 Effect 제거
    ASC->RemoveActiveGameplayEffect(DefenseBuffHandle);

    // Handle 무효화
    DefenseBuffHandle.Invalidate();

    UE_LOG(LogTemp, Log, TEXT("[Block] Defense Buff Removed"));
}

void UGA_Blocking::SetMovementRestriction(bool bRestrict)
{
    ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo());
    if (!Character) return;

    UCharacterMovementComponent* MovementComp = Character->GetCharacterMovement();
    if (!MovementComp) return;

    if (bRestrict)
    {
        // 원래 속도 저장
        OriginalMaxWalkSpeed = MovementComp->MaxWalkSpeed;
        //OriginalMaxAcceleration = MovementComp->MaxAcceleration;

        MovementComp->MaxWalkSpeed = 0.f; // 이동 불가
        //MovementComp->MaxAcceleration = 0.f;
    }
    else
    {
        MovementComp->MaxWalkSpeed = OriginalMaxWalkSpeed; // 원래 속도로 복구
        //MovementComp->MaxAcceleration = OriginalMaxAcceleration;
    }
}

void UGA_Blocking::ApplyStaminaDrain()
{
    if (!StaminaDrainEffect) return;

    UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
    if (!ASC) return;

    FGameplayEffectContextHandle Context = ASC->MakeEffectContext();
    Context.AddSourceObject(this);
    
    FGameplayEffectSpecHandle Spec = ASC->MakeOutgoingSpec(
        StaminaDrainEffect, 1.0f, Context);

    if (Spec.IsValid())
    {
        StaminaDrainHandle = ASC->ApplyGameplayEffectSpecToSelf(*Spec.Data.Get());
        UE_LOG(LogTemp, Log, TEXT("[Block] Stamina Drain Started"));
    }
}

void UGA_Blocking::RemoveStaminaDrain()
{
    if (!StaminaDrainHandle.IsValid()) return;

    UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
    if (!ASC) return;
    
    ASC->RemoveActiveGameplayEffect(StaminaDrainHandle);
    StaminaDrainHandle.Invalidate();

    UE_LOG(LogTemp, Log, TEXT("[Block] Stamina Drain Stopped"));
}

void UGA_Blocking::OnStaminaChanged(const FOnAttributeChangeData& Data)
{
    if (Data.NewValue <= 0.f)
    {
        UE_LOG(LogTemp, Warning, TEXT("[Block] Stamina depleted! %.1f → %.1f - Force ending block"),
            Data.OldValue, Data.NewValue);

        CancelAbility(CurrentSpecHandle, CurrentActorInfo,
            CurrentActivationInfo, true);
    }
}
