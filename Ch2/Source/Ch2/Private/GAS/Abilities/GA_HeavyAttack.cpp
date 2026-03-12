// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_HeavyAttack.h"

UGA_HeavyAttack::UGA_HeavyAttack()
{
    // 1. Ability Tags
    AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Attack.Heavy")));

    // 2. Blocked Tags
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking")));
    ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Blocking")));

    // 3. Owned Tags - 계층 Tag!
    ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking.Heavy")));

    // 4. Trace - 강공격은 넓은 범위!
    TraceDistance = 150.0f;  // 약공격: 100
    TraceRadius = 80.0f;     // 약공격: 50
}
