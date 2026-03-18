// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_LightAttack.h"

#include "GAS/MyGameplayTags.h"

UGA_LightAttack::UGA_LightAttack()
{
    const FMyGameplayTags& Tags = FMyGameplayTags::Get();

    AbilityTags.AddTag(Tags.Ability_Attack_Light);
    //AbilityTags.AddTag(FGameplayTag::RequestGameplayTag("Ability.Attack.Light"));

    // ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag("State.Attacking"));
    // ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag("State.Blocking"));
    // ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag("State.Attacking.Light"));

    ActivationBlockedTags.AddTag(Tags.State_Attacking);
    ActivationBlockedTags.AddTag(Tags.State_Blocking);
    ActivationOwnedTags.AddTag(Tags.State_Attacking_Light);

    // Trace 설정 (기본값)
    TraceDistance = 100.0f;
    TraceRadius = 50.0f;
}
