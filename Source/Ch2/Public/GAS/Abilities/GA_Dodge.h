// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_Dodge.generated.h"

/**
 * 
 */
UCLASS()
class CH2_API UGA_Dodge : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UGA_Dodge();
	
	UFUNCTION(BlueprintCallable, Category = "Dodge")
	void BeginDodgeWindow();
	
	UFUNCTION(BlueprintCallable, Category = "Dodge")
	void EndDodgeWindow();
	
protected:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
	
	virtual void EndAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility, bool bWasCancelled) override;
	
	UPROPERTY(EditDefaultsOnly, Category = "Dodge|Animation")
	UAnimMontage* DodgeMontage;
	
	UPROPERTY(EditDefaultsOnly, Category = "Dodge|Effect")
	TSubclassOf<UGameplayEffect> DodgeEffectClass;
	
	FActiveGameplayEffectHandle DodgeBuffHandle;	
	bool bIsDodging = false;
	
	UFUNCTION()
	virtual void OnMontageCompleted();

	UFUNCTION()
	virtual void OnMontageCancelled();
};
