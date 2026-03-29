// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GA_AttackBase.h"
#include "Abilities/GameplayAbility.h"
#include "Combat/Data/ComboData.h"
#include "GA_ComboAttackBase.generated.h"

/**
 * 
 */
UCLASS()
class CH2_API UGA_ComboAttackBase : public UGA_AttackBase  
{
	GENERATED_BODY()
	
public:
	UGA_ComboAttackBase();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combo")
	FName SectionName;

protected:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
	
	virtual bool CanActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayTagContainer* SourceTags = nullptr,
		const FGameplayTagContainer* TargetTags = nullptr,
		FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	
	// AttackList에서 이 Ability의 데이터 찾기
	const FComboData* FindMyAttackData(const FGameplayAbilityActorInfo* ActorInfo) const;
	
    /** Stamina Cost용 Gameplay Effect (SetByCaller) */
	UPROPERTY(EditDefaultsOnly, Category = "Combo|Cost")
	TSubclassOf<UGameplayEffect> StaminaCostEffectClass;
	
};
