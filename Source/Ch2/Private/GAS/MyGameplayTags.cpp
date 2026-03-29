// Fill out your copyright notice in the Description page of Project Settings.

#include "GAS/MyGameplayTags.h"

namespace MyGameplayTags
{
    // Character Tags
    UE_DEFINE_GAMEPLAY_TAG(Character_State_Jumping, "Character.State.Jumping");
    UE_DEFINE_GAMEPLAY_TAG(Character_State_Attacking, "Character.State.Attacking");
    UE_DEFINE_GAMEPLAY_TAG(Character_State_Blocking, "Character.State.Blocking");
    UE_DEFINE_GAMEPLAY_TAG(Character_State_Dodging, "Character.State.Dodging");

    // Character Status Tags
    UE_DEFINE_GAMEPLAY_TAG(Character_Status_Invincible, "Character.Status.Invincible");
    UE_DEFINE_GAMEPLAY_TAG(Character_Status_Stunned, "Character.Status.Stunned");

    // Combat Tags
    UE_DEFINE_GAMEPLAY_TAG(Combat_Window_Combo, "Combat.Window.Combo");
    UE_DEFINE_GAMEPLAY_TAG(Combat_Window_Parry, "Combat.Window.Parry");

    // Data Tags
    UE_DEFINE_GAMEPLAY_TAG(Data_Damage, "Data.Damage");
    UE_DEFINE_GAMEPLAY_TAG(Data_Stamina_Cost, "Data.Stamina.Cost");

    // Ability Tags
    UE_DEFINE_GAMEPLAY_TAG(Ability_Attack_Charge, "Ability.Attack.Charge");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Attack_Heavy, "Ability.Attack.Heavy");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Attack_Light, "Ability.Attack.Light");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Attack_Melee, "Ability.Attack.Melee");
    UE_DEFINE_GAMEPLAY_TAG(Ability_Block, "Ability.Block");

    // Event Tags
    UE_DEFINE_GAMEPLAY_TAG(Event_Montage_DealDamage, "Event.Montage.DealDamage");

    // State Tags
    UE_DEFINE_GAMEPLAY_TAG(State_Attacking, "State.Attacking");
    UE_DEFINE_GAMEPLAY_TAG(State_Attacking_Heavy, "State.Attacking.Heavy");
    UE_DEFINE_GAMEPLAY_TAG(State_Attacking_Light, "State.Attacking.Light");
    UE_DEFINE_GAMEPLAY_TAG(State_Blocking, "State.Blocking");
}

FMyGameplayTags FMyGameplayTags::Tags;

const FMyGameplayTags& FMyGameplayTags::Get()
{
    static bool bInitialized = false;
    if (!bInitialized)
    {
        FMyGameplayTags::InitializeNativeTags();
        bInitialized = true;
    }
    return Tags;
}

void FMyGameplayTags::InitializeNativeTags()
{
    // 매크로 기반 Native Tag를 구조체 필드에 동기화
    Tags.Character_State_Jumping = MyGameplayTags::Character_State_Jumping.GetTag();
    Tags.Character_State_Attacking = MyGameplayTags::Character_State_Attacking.GetTag();
    Tags.Character_State_Blocking = MyGameplayTags::Character_State_Blocking.GetTag();
    Tags.Character_State_Dodging = MyGameplayTags::Character_State_Dodging.GetTag();

    Tags.Character_Status_Invincible = MyGameplayTags::Character_Status_Invincible.GetTag();
    Tags.Character_Status_Stunned = MyGameplayTags::Character_Status_Stunned.GetTag();

    Tags.Combat_Window_Combo = MyGameplayTags::Combat_Window_Combo.GetTag();
    Tags.Combat_Window_Parry = MyGameplayTags::Combat_Window_Parry.GetTag();

    Tags.Data_Damage = MyGameplayTags::Data_Damage.GetTag();
    Tags.Data_Stamina_Cost = MyGameplayTags::Data_Stamina_Cost.GetTag();

    Tags.Ability_Attack_Charge = MyGameplayTags::Ability_Attack_Charge.GetTag();
    Tags.Ability_Attack_Heavy = MyGameplayTags::Ability_Attack_Heavy.GetTag();
    Tags.Ability_Attack_Light = MyGameplayTags::Ability_Attack_Light.GetTag();
    Tags.Ability_Attack_Melee = MyGameplayTags::Ability_Attack_Melee.GetTag();
    Tags.Ability_Block = MyGameplayTags::Ability_Block.GetTag();

    Tags.Event_Montage_DealDamage = MyGameplayTags::Event_Montage_DealDamage.GetTag();

    Tags.State_Attacking = MyGameplayTags::State_Attacking.GetTag();
    Tags.State_Attacking_Heavy = MyGameplayTags::State_Attacking_Heavy.GetTag();
    Tags.State_Attacking_Light = MyGameplayTags::State_Attacking_Light.GetTag();
    Tags.State_Blocking = MyGameplayTags::State_Blocking.GetTag();
}
