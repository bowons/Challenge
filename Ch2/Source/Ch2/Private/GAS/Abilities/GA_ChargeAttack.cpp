// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_ChargeAttack.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "AbilitySystemComponent.h"

UGA_ChargeAttack::UGA_ChargeAttack()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

    AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Attack.Charge")));

    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking")));

    ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking")));
}

void UGA_ChargeAttack::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true); // 마지막 true가 캔슬을 의미
        return;
    }

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

    PlayMontageTask->OnCompleted.AddDynamic(this, &UGA_ChargeAttack::OnMontageCompleted);
    PlayMontageTask->OnCancelled.AddDynamic(this, &UGA_ChargeAttack::OnMontageCancelled);
    PlayMontageTask->OnInterrupted.AddDynamic(this, &UGA_ChargeAttack::OnMontageCancelled);

    PlayMontageTask->ReadyForActivation();

    UAbilityTask_WaitGameplayEvent* WaitEventTask =
        UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(
            this,
            FGameplayTag::RequestGameplayTag(FName("Event.Montage.DealDamage"))
        );

    if (WaitEventTask)
    {
        WaitEventTask->EventReceived.AddDynamic(this, &UGA_ChargeAttack::OnDamageGameplayEvent);
        WaitEventTask->ReadyForActivation();
    }
}

void UGA_ChargeAttack::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UGA_ChargeAttack::OnMontageCompleted()
{
    // 정상 종료
    EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UGA_ChargeAttack::OnMontageCancelled()
{
    // 취소 또는 인터럽트
    EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}

void UGA_ChargeAttack::OnDamageGameplayEvent(FGameplayEventData EventData)
{
    PerformMeleeTrace();
}

void UGA_ChargeAttack::PerformMeleeTrace()
{
    AActor* AvatarActor = GetAvatarActorFromActorInfo();
    if (!AvatarActor)
    {
        return;
    }

    FVector Start = AvatarActor->GetActorLocation();
    FVector Forward = AvatarActor->GetActorForwardVector();
    FVector End = Start + (Forward * TraceDistance);

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

    DrawDebugSphere(GetWorld(), Start, TraceRadius, 12, FColor::Red, false, 1.0f);
    DrawDebugSphere(GetWorld(), End, TraceRadius, 12, FColor::Red, false, 1.0f);

    if (bHit)
    {
        for (const FHitResult& Hit : HitResults)
        {
            AActor* HitActor = Hit.GetActor();
            if (!HitActor)
            {
                continue;
            }

            UAbilitySystemComponent* TargetASC = HitActor->FindComponentByClass<UAbilitySystemComponent>();
            if (!TargetASC)
            {
                continue;
            }

            FGameplayEffectContextHandle EffectContext = GetAbilitySystemComponentFromActorInfo()->MakeEffectContext();
            EffectContext.AddSourceObject(AvatarActor);

            FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(
                DamageEffectClass,
                1.0f,
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