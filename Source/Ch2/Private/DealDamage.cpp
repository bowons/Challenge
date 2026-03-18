// Fill out your copyright notice in the Description page of Project Settings.


#include "DealDamage.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/Character.h"

UDealDamage::UDealDamage()
{
    TraceRadius = 50.0f;
    TraceStartDistance = 50.0f;
    TraceEndDistance = 150.0f;
    bShowDebug = true;
}

void UDealDamage::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    if (!MeshComp) return;

    AActor* Owner = MeshComp->GetOwner();
    if (!Owner) return;

    FVector Forward = Owner->GetActorForwardVector();
    FVector Start = Owner->GetActorLocation() + (Forward * TraceStartDistance);
    FVector End = Owner->GetActorLocation() + (Forward * TraceEndDistance);

    // Sphere Trace 실행
    TArray<FHitResult> HitResults;
    TArray<AActor*> ActorsToIgnore;
    ActorsToIgnore.Add(Owner); // 자기 자신 제외

    EDrawDebugTrace::Type DebugType = bShowDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None;

    bool bHit = UKismetSystemLibrary::SphereTraceMulti(
        Owner->GetWorld(),
        Start,
        End,
        TraceRadius,
        UEngineTypes::ConvertToTraceType(ECC_Pawn),
        false,
        ActorsToIgnore,
        DebugType,
        HitResults,
        true,
        FLinearColor::Red,
        FLinearColor::Green,
        2.0f
    );

    if (!bHit) return;

    // 공격자의 ASC 가져오기
    IAbilitySystemInterface* AttackerASI = Cast<IAbilitySystemInterface>(Owner);
    if (!AttackerASI)
    {
        return;
    }

    UAbilitySystemComponent* AttackerASC = AttackerASI->GetAbilitySystemComponent();
    if (!AttackerASC || !DamageEffectClass)
    {
        return;
    }

    // 맞은 모든 액터에 Effect 적용
    TSet<AActor*> ProcessedActors;

    for (const FHitResult& Hit : HitResults)
    {
        AActor* HitActor = Hit.GetActor();
        if (!HitActor || ProcessedActors.Contains(HitActor))
        {
            continue; // 없거나 중복이면 건너뜀
        }

        ProcessedActors.Add(HitActor);

        // 맞은 대상의 ASC 가져오기
        IAbilitySystemInterface* TargetASI = Cast<IAbilitySystemInterface>(HitActor);
        if (!TargetASI)
        {
            continue;
        }

        UAbilitySystemComponent* TargetASC = TargetASI->GetAbilitySystemComponent();
        if (!TargetASC)
        {
            continue;
        }

        // Effect 적용
        FGameplayEffectContextHandle Context = AttackerASC->MakeEffectContext();
        Context.AddSourceObject(Owner);

        FGameplayEffectSpecHandle SpecHandle = AttackerASC->MakeOutgoingSpec(DamageEffectClass, 1.0f, Context);

        if (SpecHandle.IsValid())
        {
            AttackerASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetASC);

            UE_LOG(LogTemp, Log, TEXT("Damage applied to:%s"), *HitActor->GetName());
        }
    }
}
