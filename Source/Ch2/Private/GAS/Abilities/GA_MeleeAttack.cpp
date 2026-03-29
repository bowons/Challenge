// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_MeleeAttack.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystemComponent.h"
#include "Subsystem/CombatManagerSubsystem.h"

UGA_MeleeAttack::UGA_MeleeAttack()
{
    // Ability Instancing Policy
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    
    // Ability Tags
    AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Attack.Melee")));

    // 공격 중이면 발동 불가
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking")));

    // 발동 시 State.Attacking 추가
    ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking")));
}

void UGA_MeleeAttack::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    // ===== 1. Commit Ability (Cost, Cooldown 소모) =====
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        // Commit 실패 (스태미너 부족, Cooldown 중 등)
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true); // 마지막 true가 캔슬을 의미
        return;
    }

    // ===== 2. Montage 재생 Task =====
    UAbilityTask_PlayMontageAndWait* PlayMontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(
        this,
        NAME_None,
        AttackMontage,
        1.0f // Play Rate : 재생 속도
    );

    if (!PlayMontageTask)
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }
    
    // Montage 완료 콜백 연결
    PlayMontageTask->OnCompleted.AddDynamic(this, &UGA_MeleeAttack::OnMontageCompleted);
    PlayMontageTask->OnCancelled.AddDynamic(this, &UGA_MeleeAttack::OnMontageCancelled);
    PlayMontageTask->OnInterrupted.AddDynamic(this, &UGA_MeleeAttack::OnMontageCancelled);

    // Task 활성화
    PlayMontageTask->ReadyForActivation();

    // ===== 3. Gameplay Event 대기 Task =====
    UAbilityTask_WaitGameplayEvent* WaitEventTask =
        UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(
            this,
            FGameplayTag::RequestGameplayTag(FName("Event.Montage.DealDamage"))
        );

    if (WaitEventTask)
    {
        WaitEventTask->EventReceived.AddDynamic(this, &UGA_MeleeAttack::OnDamageGameplayEvent);
        WaitEventTask->ReadyForActivation();
    }
    
}

void UGA_MeleeAttack::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
    // 부모 클래스 호출 (Tag 제거 등)
    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

    // 추가 작업 시
}

void UGA_MeleeAttack::OnMontageCompleted()
{
    // Ability 정상 종료
    EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UGA_MeleeAttack::OnMontageCancelled()
{
    // Ability 취소 종료
    EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}

void UGA_MeleeAttack::OnDamageGameplayEvent(FGameplayEventData EventData)
{
    PerformMeleeTrace();
}

void UGA_MeleeAttack::PerformMeleeTrace()
{
    AActor* AvatarActor = GetAvatarActorFromActorInfo();
    if (!AvatarActor)
    {
        return;
    }

    // ====== Trace 시작점과 끝점 계산 ======
    FVector Start = AvatarActor->GetActorLocation();
    FVector Forward = AvatarActor->GetActorForwardVector();
    FVector End = Start + (Forward * TraceDistance);

    // ===== Sphere Trace 수행 =====
    TArray<FHitResult> HitResults;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(AvatarActor); // 자신은 무시

    bool bHit = GetWorld()->SweepMultiByObjectType(
        HitResults,
        Start,
        End,
        FQuat::Identity,
        FCollisionObjectQueryParams(ECC_Pawn),
        FCollisionShape::MakeSphere(TraceRadius),
        Params
    );

    // ===== Debug Draw (개발용) =====
    DrawDebugSphere(GetWorld(), Start, TraceRadius, 12, FColor::Red, false, 1.0f);
    DrawDebugSphere(GetWorld(), End, TraceRadius, 12, FColor::Red, false, 1.0f);

    // ===== Hit된 Actor들에게 Damage Effect 적용 =====
    if (bHit)
    {
        for (const FHitResult& Hit : HitResults)
        { 
            AActor* HitActor = Hit.GetActor();
            if (!HitActor)
            {
                continue;
            }

            // Hit Actor의 ASC 가져오기
            UAbilitySystemComponent* TargetASC = HitActor->FindComponentByClass<UAbilitySystemComponent>();
            if (!TargetASC)
            {
                continue;
            }

            // Damage Effect 적용
            FGameplayEffectContextHandle EffectContext = GetAbilitySystemComponentFromActorInfo()->MakeEffectContext();
            EffectContext.AddSourceObject(AvatarActor);

            FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(
                DamageEffectClass,
                1.0f, // Level
                EffectContext
            );

            if (SpecHandle.IsValid())
            {
                GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToTarget(
                    *SpecHandle.Data.Get(),
                    TargetASC
                );
            }
        }
    }
}
