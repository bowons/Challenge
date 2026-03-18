// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayEffectTypes.h"
#include "GA_Blocking.generated.h"

/**
 * 
 */
UCLASS()
class CH2_API UGA_Blocking : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
    UGA_Blocking();

    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        const FGameplayEventData* TriggerEventData) override;

    virtual void EndAbility(const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        bool bReplicateEndAbility,
        bool bWasCancelled) override;

    virtual bool CanActivateAbility(
        const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayTagContainer* SourceTags = nullptr,
        const FGameplayTagContainer* TargetTags = nullptr,
        FGameplayTagContainer* OptionalRelevantTags = nullptr
    ) const override;

    /** 외부에서 방어 해제 요청 */
    UFUNCTION(BlueprintCallable, Category = "Block")
    void ReleaseBlock();

protected:
    /** 방어 버프 Effect 클래스 */
    UPROPERTY(EditDefaultsOnly, Category = "Block")
    TSubclassOf<UGameplayEffect> DefenseBuffEffect;

    /** 방어 버프 핸들 (제거용) */
    FActiveGameplayEffectHandle DefenseBuffHandle;

    /** 원래 이동 속도 저장 */
    float OriginalMaxWalkSpeed = 600.f;
    //float OriginalMaxAcceleration = 0.f;

    void ApplyDefenseBuff();
    void RemoveDefenseBuff();

    /** 이동 제한 설정/해제 */
    void SetMovementRestriction(bool bRestrict);

    /** 스테미너 흡수용 */
    UPROPERTY(EditDefaultsOnly, Category = "Block|Stamina")
    TSubclassOf<UGameplayEffect> StaminaDrainEffect;

    FActiveGameplayEffectHandle StaminaDrainHandle;

    /** 블록 시작에 필요한 최소 스태미너 */
    UPROPERTY(EditDefaultsOnly, Category = "Block|Stamina")
    float MinStaminaToBlock = 10.f;

    FDelegateHandle StaminaChangeDelegateHandle;

    void OnStaminaChanged(const FOnAttributeChangeData& Data);

    void ApplyStaminaDrain();
    void RemoveStaminaDrain();
};
