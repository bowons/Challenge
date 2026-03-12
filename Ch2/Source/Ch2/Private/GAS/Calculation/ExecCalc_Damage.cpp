// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Calculation/ExecCalc_Damage.h"
#include "AbilitySystemComponent.h"
#include "GAS/MyAttributeSet.h"

// ============================================================
// Capture 구조체 - 어떤 Attribute를 읽을지 정의
// ============================================================
struct FDamageStatics
{
    // Target의 Defense를 Capture
    DECLARE_ATTRIBUTE_CAPTUREDEF(Defense);
    // Target의 Health를 Capture (최종 데미지 적용용)
    DECLARE_ATTRIBUTE_CAPTUREDEF(Health);

    FDamageStatics()
    {
        // UMyAttributeSet의 Defense, Target에서, Snapshot 안 함 (실시간 값)
        DEFINE_ATTRIBUTE_CAPTUREDEF(UMyAttributeSet, Defense, Target, false);
        DEFINE_ATTRIBUTE_CAPTUREDEF(UMyAttributeSet, Health, Target, false);
    }
};

static const FDamageStatics& DamageStatics()
{
    static FDamageStatics Statics;
    return Statics;
}

UExecCalc_Damage::UExecCalc_Damage()
{
    // Capture할 Attribute 등록
    RelevantAttributesToCapture.Add(DamageStatics().DefenseDef);
    RelevantAttributesToCapture.Add(DamageStatics().HealthDef);
}

void UExecCalc_Damage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& Params, FGameplayEffectCustomExecutionOutput& OutResults) const
{
    const FGameplayEffectSpec& Spec = Params.GetOwningSpec();
    
    UAbilitySystemComponent* SourceASC = Params.GetSourceAbilitySystemComponent();
    UAbilitySystemComponent* TargetASC = Params.GetTargetAbilitySystemComponent();

    if (!SourceASC || !TargetASC)
    {
        return;
    }

    AActor* SourceActor = SourceASC->GetAvatarActor();
    AActor* TargetActor = TargetASC->GetAvatarActor();

    if (!SourceActor || !TargetActor)
    {
        return;
    }

    // ============================================================
    // 1. RawDamage 읽기 (SetByCaller 또는 기본값)
    // ============================================================
    float RawDamage = Spec.GetSetByCallerMagnitude(
        FGameplayTag::RequestGameplayTag(FName("Data.Damage")),
        false,      // WarnIfNotFound
        30.0f       // Default 값
    );

    // ============================================================
    // 2. Target의 Defense 읽기
    // ============================================================
    float Defense = 0.f;

    FAggregatorEvaluateParameters EvalParams;
    EvalParams.SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
    EvalParams.TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

    Params.AttemptCalculateCapturedAttributeMagnitude(
        DamageStatics().DefenseDef,
        EvalParams,
        Defense
    );

    // ============================================================
    // 3. 블록 방향 판정 — Defense 적용 여부 결정
    // ============================================================
    bool bIsBlocking = TargetASC->HasMatchingGameplayTag(
        FGameplayTag::RequestGameplayTag(FName("State.Blocking"))
    );

    if (bIsBlocking && Defense > 0.f)
    {
        // 공격자 → 방어자 방향
        FVector ToAttacker = (SourceActor->GetActorLocation()
            - TargetActor->GetActorLocation()).GetSafeNormal();
        FVector DefenderForward = TargetActor->GetActorForwardVector();

        float Dot = FVector::DotProduct(DefenderForward, ToAttacker);

        UE_LOG(LogTemp, Log, TEXT("[ExecCalc] Block Dot: %.2f"), Dot);

        if (Dot > 0.5f)
        {
            // 정면 공격 → Defense 적용
            UE_LOG(LogTemp, Log, TEXT("[ExecCalc] Block SUCCESS - Defense %.1f applied"), Defense);
        }
        else
        {
            // 측면/후면 → Defense 무시
            UE_LOG(LogTemp, Warning, TEXT("[ExecCalc] Block FAILED - Side/Back attack"));
            Defense = 0.f;
        }
    }

    // ============================================================
    // 4. 최종 데미지 계산 - 실제 게임 로직에서 핵심! <- 기획서 포인트
    // ============================================================
    float FinalDamage = RawDamage - Defense;
    FinalDamage = FMath::Max(FinalDamage, 0.f);

    UE_LOG(LogTemp, Log, TEXT("[ExecCalc] Raw:%.1f - Defense:%.1f = Final:%.1f"),
        RawDamage, Defense, FinalDamage);

    // ============================================================
    // 5. Health 감소
    // ============================================================
    if (FinalDamage > 0.f)
    {
        OutResults.AddOutputModifier(
            FGameplayModifierEvaluatedData(
                DamageStatics().HealthProperty,
                EGameplayModOp::Additive,
                -FinalDamage
            )
        );
    }

    Super::Execute_Implementation(Params, OutResults);
}
