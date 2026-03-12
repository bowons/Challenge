// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_AttackBase.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class CH2_API UGA_AttackBase : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
    UGA_AttackBase();

protected:
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, 
        const FGameplayAbilityActorInfo* ActorInfo, 
        const FGameplayAbilityActivationInfo ActivationInfo, 
        const FGameplayEventData* TriggerEventData) override;

    virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, 
        const FGameplayAbilityActorInfo* ActorInfo, 
        const FGameplayAbilityActivationInfo ActivationInfo, 
        bool bReplicateEndAbility, 
        bool bWasCancelled) override;

    UPROPERTY(EditDefaultsOnly, Category = "Attack|Animation")
    UAnimMontage* AttackMontage;

    UPROPERTY(EditDefaultsOnly, Category = "Attack|Damage")
    TSubclassOf<UGameplayEffect> DamageEffectClass;

    UPROPERTY(EditDefaultsOnly, Category = "Attack|Trace")
    float TraceDistance = 100.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Attack|Trace")
    float TraceRadius = 50.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Attack|Debug")
    bool bShowDebugTrace = true;

    // ============================================================
    // 공통 로직 (자식에서 재사용)
    // ============================================================

    /** Sphere Trace로 히트 판정 */
    virtual void PerformMeleeTrace();

    /** 히트된 대상에 데미지 적용 */
    virtual void ApplyDamageToActor(AActor* HitActor);

    // ============================================================
    // 콜백
    // ============================================================

    UFUNCTION()
    virtual void OnDamageGameplayEvent(FGameplayEventData Payload);

    UFUNCTION()
    virtual void OnMontageCompleted();

    UFUNCTION()
    virtual void OnMontageCancelled();
};
