// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_StaminaGen.h"

UGA_StaminaGen::UGA_StaminaGen()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UGA_StaminaGen::ActivateAbility(
    const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo,
    const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    // GE_StaminaRegen 적용 (Infinite) -> 블록 중 Inhibition Tag로 자동 중단
    if (StaminaRegenEffect)
    {
        ApplyGameplayEffectToOwner(Handle, ActorInfo, ActivationInfo,
            StaminaRegenEffect.GetDefaultObject(), 1.f);
    }
    // EndAbility가 없으므로 패시브 효과로 남아있음
}

