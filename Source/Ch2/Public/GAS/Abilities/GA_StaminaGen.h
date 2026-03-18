// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_StaminaGen.generated.h"

/**
 * 
 */
UCLASS()
class CH2_API UGA_StaminaGen : public UGameplayAbility
{
    GENERATED_BODY()

public:
    UGA_StaminaGen();

    virtual void ActivateAbility(
        const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        const FGameplayEventData* TriggerEventData) override;

protected:
    /** BP에서 GE_StaminaRegen 할당 */
    UPROPERTY(EditDefaultsOnly, Category = "Stamina")
    TSubclassOf<UGameplayEffect> StaminaRegenEffect;
};
