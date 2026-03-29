// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_AttackBase.h"
#include "AbilitySystemComponent.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "GameFramework/Character.h"
#include "Subsystem/CombatManagerSubsystem.h"

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
    
    // ★ 10강: Hit 기록 초기화
    ResetHitActors();
    
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

void UGA_AttackBase::BeginTraceWindow()
{
    if (bIsTracing) return;

    bIsTracing = true;

    // Timer 시작: TraceInterval마다 PerformMeleeTrace 호출
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().SetTimer(
            TraceTimerHandle,
            this,
            &UGA_AttackBase::PerformMeleeTrace,
            TraceInterval,
            true,   // Loop
            0.0f    // 즉시 시작
        );
    }
    
    UE_LOG(LogTemp, Log, TEXT("[Attack] Trace Window Begin"));
}

void UGA_AttackBase::EndTraceWindow()
{
    if (!bIsTracing) return;

    bIsTracing = false;

    // Timer 중지
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(TraceTimerHandle);
    }

    // ★ Hit 수 로깅
    UE_LOG(LogTemp, Log, TEXT("[Attack] Trace Window End (Hits:%d)"),
        HitActors.Num());
}

void UGA_AttackBase::CacheMeshComponent()
{
    if (CachedMesh) return;  // 이미 캐시됨

    AActor* AvatarActor = GetAvatarActorFromActorInfo();
    if (!AvatarActor) return;

    // Character에서 Mesh 가져오기
    if (ACharacter* Character = Cast<ACharacter>(AvatarActor))
    {
        CachedMesh = Character->GetMesh();
    }
}

void UGA_AttackBase::ResetHitActors()
{
    HitActors.Empty();
}

bool UGA_AttackBase::TryApplyDamageToActor(AActor* HitActor)
{
    if (!HitActor) return false;

    TWeakObjectPtr<AActor> WeakActor = HitActor;

    // ============================================================
    // 중복 체크: 이미 Hit했으면 무시
    // ============================================================
    if (HitActors.Contains(WeakActor))
    {
        return false;  // 이미 Hit함
    }

    // 처음 Hit → 기록 후 Damage 적용
    HitActors.Add(WeakActor);
    ApplyDamageToActor(HitActor);

    UE_LOG(LogTemp, Log, TEXT("[Attack] Hit:%s (Total:%d)"),
        *HitActor->GetName(), HitActors.Num());

    return true;
}

void UGA_AttackBase::PerformMeleeTrace()
{
    AActor* AvatarActor = GetAvatarActorFromActorInfo();
    if (!AvatarActor) return;

    // Mesh 캐시 확인
    CacheMeshComponent();

    // ============================================================
    // 10강 변경: Socket 위치에서 Trace
    // ============================================================
    FVector TraceLocation;

    if (CachedMesh && TraceSocketName != NAME_None)
    {
        // ★ Socket 위치 사용
        TraceLocation = CachedMesh->GetSocketLocation(TraceSocketName);
    }
    else
    {
        // Fallback: 캐릭터 정면 (5~6강 방식)
        TraceLocation = AvatarActor->GetActorLocation() +
                        AvatarActor->GetActorForwardVector() * TraceDistance;
    }

    // Trace 설정
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(AvatarActor);
    
    TArray<FHitResult> HitResults;
    
    // ============================================================
    // Socket 위치를 중심으로 Sphere Trace
    // ============================================================
    bool bHit = GetWorld()->SweepMultiByChannel(
        HitResults,
        TraceLocation,
        TraceLocation + FVector(1.f, 0.f, 0.f),  // 미세한 이동
        FQuat::Identity,
        ECC_Pawn,
        FCollisionShape::MakeSphere(TraceRadius),
        QueryParams
    );
    
    if (bShowDebugTrace)
    {
        FColor Color = bHit ? FColor::Green : FColor::Red;
        DrawDebugSphere(
            GetWorld(),
            TraceLocation,
            TraceRadius,
            12,
            bHit ? FColor::Red : FColor::Green,
            false,
            0.1f
        );
    }
    
    // Hit 처리
    if (bHit)
    {
        for (const FHitResult& Hit : HitResults)
        {
            if (AActor* HitActor = Hit.GetActor())
            {
                // ★ 중복 방지 적용
                TryApplyDamageToActor(HitActor);
            }
        }
    }
    
    // Trace 위치 계산
    // FVector Start = AvatarActor->GetActorLocation();
    // FVector Forward = AvatarActor->GetActorForwardVector();
    // FVector End = Start + Forward * TraceDistance; // 자식마다 다른 값이 적용되도록
    //
    // // Trace 설정
    // FCollisionQueryParams QueryParams;
    // QueryParams.AddIgnoredActor(AvatarActor);
    //
    // TArray<FHitResult> HitResult;
    //
    // // Sphere Sweep
    // bool bHit = GetWorld()->SweepMultiByObjectType(
    //     HitResult, Start, End, FQuat::Identity,
    //     FCollisionObjectQueryParams(ECC_Pawn),
    //     FCollisionShape::MakeSphere(TraceRadius),
    //     QueryParams
    // );
    //
    // // Debug
    // if (bShowDebugTrace)
    // {
    //     FColor Color = bHit ? FColor::Green : FColor::Red;
    //     DrawDebugSphere(GetWorld(), Start, TraceRadius, 12, Color, false, 1.0f);
    //     DrawDebugSphere(GetWorld(), End, TraceRadius, 12, Color, false, 1.0f);
    // }
    //
    // // Hit 처리
    // if (bHit)
    // {
    //     for (const FHitResult& Hit : HitResult)
    //     {
    //         if (Hit.GetActor())
    //         {
    //             ApplyDamageToActor(Hit.GetActor());
    //         }
    //     }
    // }

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