// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NativeGameplayTags.h"

namespace MyGameplayTags
{
    // Character Tags
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_State_Jumping);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_State_Attacking);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_State_Blocking);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_State_Dodging);

    // Character Status Tags
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Status_Invincible);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Status_Stunned);

    // Combat Tags
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Combat_Window_Combo);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Combat_Window_Parry);

    // Data Tags
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Data_Damage);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Data_Stamina_Cost);

    // Ability Tags
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_Attack_Charge);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_Attack_Heavy);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_Attack_Light);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_Attack_Melee);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ability_Block);

    // Event Tags
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Montage_DealDamage);

    // State Tags
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(State_Attacking);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(State_Attacking_Heavy);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(State_Attacking_Light);
    UE_DECLARE_GAMEPLAY_TAG_EXTERN(State_Blocking);
}

struct CH2_API FMyGameplayTags
{
public:
    // 싱글톤 접근자
    static const FMyGameplayTags& Get();
    // 초기화 함수 (게임 시작 시 호출)
    static void InitializeNativeTags();

    // ============================================
    // Character Tags
    // ============================================
    /** 캐릭터 상태: 점프 중 */
    FGameplayTag Character_State_Jumping;

    /** 캐릭터 상태: 공격 중 */
    FGameplayTag Character_State_Attacking;

    /** 캐릭터 상태: 블록 중 */
    FGameplayTag Character_State_Blocking;

    /** 캐릭터 상태: 회피 중 */
    FGameplayTag Character_State_Dodging;

    //=========================================================================
    // Character Status Tags
    //=========================================================================

    /** 캐릭터 상태이상: 무적 */
    FGameplayTag Character_Status_Invincible;

    /** 캐릭터 상태이상: 스턴 */
    FGameplayTag Character_Status_Stunned;

    //=========================================================================
    // Combat Tags
    //=========================================================================

    /** 전투 윈도우: 콤보 가능 */
    FGameplayTag Combat_Window_Combo;

    /** 전투 윈도우: 패링 가능 */
    FGameplayTag Combat_Window_Parry;

    //=========================================================================
    // Data Tags (SetByCaller 등)
    //=========================================================================

    /** 데이터: 데미지 */
    FGameplayTag Data_Damage;

    /** 데이터: 스태미너 코스트 */
    FGameplayTag Data_Stamina_Cost;

    //=========================================================================
    // Ability Tags
    //=========================================================================

    /** 어빌리티: 차지 공격 */
    FGameplayTag Ability_Attack_Charge;

    /** 어빌리티: 강공격 */
    FGameplayTag Ability_Attack_Heavy;

    /** 어빌리티: 약공격 */
    FGameplayTag Ability_Attack_Light;

    /** 어빌리티: 근접공격 */
    FGameplayTag Ability_Attack_Melee;

    /** 어빌리티: 방어 */
    FGameplayTag Ability_Block;

    //=========================================================================
    // Event Tags
    //=========================================================================

    /** 이벤트: 몽타주 데미지 처리 */
    FGameplayTag Event_Montage_DealDamage;

    //=========================================================================
    // State Tags
    //=========================================================================

    /** 상태: 공격 중 */
    FGameplayTag State_Attacking;

    /** 상태: 강공격 중 */
    FGameplayTag State_Attacking_Heavy;

    /** 상태: 약공격 중 */
    FGameplayTag State_Attacking_Light;

    /** 상태: 블로킹 중 */
    FGameplayTag State_Blocking;

private:
    static FMyGameplayTags Tags;
};
