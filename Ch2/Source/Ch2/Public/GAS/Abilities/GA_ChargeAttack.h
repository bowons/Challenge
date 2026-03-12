// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_ChargeAttack.generated.h"

/**
 * 
 */
UCLASS()
class CH2_API UGA_ChargeAttack : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
    UGA_ChargeAttack();

    // Ability 활성화
    virtual void ActivateAbility(
        const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        const FGameplayEventData* TriggerEventData
    ) override;

    // Ability 종료
    virtual void EndAbility(
        const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        bool bReplicateEndAbility,
        bool bWasCancelled
    ) override;

protected:
    // ======== Blueprint 에서 설정할 변수들 =========
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
    UAnimMontage* AttackMontage;

    // 적용할 Damage Effect
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
    TSubclassOf<UGameplayEffect> DamageEffectClass;

    // Sphere Trace 거리
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
    float TraceDistance = 100.f;

    // Sphere Trace 반경
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
    float TraceRadius = 50.0f;

    // ===== 내부 함수들 =====

    // Montage 완료 콜백
    UFUNCTION()
    void OnMontageCompleted();

    // Montage 취소 콜백
    UFUNCTION()
    void OnMontageCancelled();

    // Gameplay Event 콜백 (AnimNotify 대신)
    UFUNCTION()
    void OnDamageGameplayEvent(FGameplayEventData EventData);

    // Sphere Trace 수행
    void PerformMeleeTrace();

};
