// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_AttackBase.h"
#include "AbilitySystemComponent.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"

UGA_AttackBase::UGA_AttackBase()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    // 태그는 자식 클래스에서 설정
}

void UGA_AttackBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    // 1. Commit
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return; // 비정상적 종료
    }

    // 2. Montage 체크
    if (!AttackMontage)
    {
        UE_LOG(LogTemp, Warning, TEXT("[AttackBase] No AttackMontage!"));
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    // 3. Montage Task
    UAbilityTask_PlayMontageAndWait* MontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(
        this, NAME_None, AttackMontage, 1.0f);

    if (MontageTask)
    {
        MontageTask->OnCompleted.AddDynamic(this, &UGA_AttackBase::OnMontageCompleted);
        MontageTask->OnCancelled.AddDynamic(this, &UGA_AttackBase::OnMontageCancelled);
        MontageTask->OnInterrupted.AddDynamic(this, &UGA_AttackBase::OnMontageCancelled);
        MontageTask->ReadyForActivation();
    }

    // 4. Event Task
    UAbilityTask_WaitGameplayEvent* EventTask = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent
        (this, FGameplayTag::RequestGameplayTag(FName("Event.Montage.DealDamage")));
    if (EventTask)
    {
        EventTask->EventReceived.AddDynamic(this, &UGA_AttackBase::OnDamageGameplayEvent);
        EventTask->ReadyForActivation();
    }

}

void UGA_AttackBase::PerformMeleeTrace()
{
    AActor* AvatarActor = GetAvatarActorFromActorInfo();
    if (!AvatarActor) return;

    // Trace 위치 계산
    FVector Start = AvatarActor->GetActorLocation();
    FVector Forward = AvatarActor->GetActorForwardVector();
    FVector End = Start + Forward * TraceDistance; // 자식마다 다른 값이 적용되도록

    // Trace 설정
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(AvatarActor);

    TArray<FHitResult> HitResult;

    // Sphere Sweep
    bool bHit = GetWorld()->SweepMultiByObjectType(
        HitResult, Start, End, FQuat::Identity,
        FCollisionObjectQueryParams(ECC_Pawn),
        FCollisionShape::MakeSphere(TraceRadius),
        QueryParams
    );

    // Debug
    if (bShowDebugTrace)
    {
        FColor Color = bHit ? FColor::Green : FColor::Red;
        DrawDebugSphere(GetWorld(), Start, TraceRadius, 12, Color, false, 1.0f);
        DrawDebugSphere(GetWorld(), End, TraceRadius, 12, Color, false, 1.0f);
    }

    // Hit 처리
    if (bHit)
    {
        for (const FHitResult& Hit : HitResult)
        {
            if (Hit.GetActor())
            {
                ApplyDamageToActor(Hit.GetActor());
            }
        }
    }

}

void UGA_AttackBase::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UGA_AttackBase::ApplyDamageToActor(AActor* HitActor)
{
    if (!HitActor)
    {
        return;
    }

    // Hit Actor  ASC 가져오기
    UAbilitySystemComponent* TargetASC = HitActor->FindComponentByClass<UAbilitySystemComponent>();
    if (!TargetASC)
    {
        return;
    }

    // Damage Effect 적용
    FGameplayEffectContextHandle EffectContext = GetAbilitySystemComponentFromActorInfo()->MakeEffectContext();
    EffectContext.AddSourceObject(GetAvatarActorFromActorInfo());

    FGameplayEffectSpecHandle SpecHandle = GetAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(DamageEffectClass, 1.0f, EffectContext);

    if (SpecHandle.IsValid())
    {
        GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetASC);
    }
}

void UGA_AttackBase::OnDamageGameplayEvent(FGameplayEventData Payload)
{
    PerformMeleeTrace();
}

void UGA_AttackBase::OnMontageCompleted()
{
    // Ability 정상 종료
    EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UGA_AttackBase::OnMontageCancelled()
{
    // Ability 취소 종료
    EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
}