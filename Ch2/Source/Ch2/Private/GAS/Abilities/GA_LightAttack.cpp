// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_LightAttack.h"

UGA_LightAttack::UGA_LightAttack()
{
    AbilityTags.AddTag(FGameplayTag::RequestGameplayTag("Ability.Attack.Light"));
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag("State.Attacking"));
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag("State.Blocking"));
    ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag("State.Attacking.Light"));

    // Trace 설정 (기본값)
    TraceDistance = 100.0f;
    TraceRadius = 50.0f;
}
