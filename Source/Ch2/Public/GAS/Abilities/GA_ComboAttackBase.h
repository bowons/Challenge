// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_ComboAttackBase.generated.h"

/**
 * 
 */
UCLASS()
class CH2_API UGA_ComboAttackBase : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UGA_ComboAttackBase();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combo")
	UAnimMontage* MontageToPlay;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combo")
	FName SectionName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combo")
	float Damage = 10.0f;
	
protected:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
	
private:
	UFUNCTION()
	void OnMontageEnded();
};
