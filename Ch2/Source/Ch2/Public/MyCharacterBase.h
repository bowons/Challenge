// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GAS/MyAttributeSet.h"
#include "MyCharacterBase.generated.h"

class UInputAction;
class UAnimMontage;

UCLASS()
class CH2_API AMyCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterBase();

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

    UFUNCTION(BlueprintCallable, Category = "Attributes") 
    float GetHealth() const; 
    
    UFUNCTION(BlueprintCallable, Category = "Attributes") 
    float GetMaxHealth() const;

    UFUNCTION(BlueprintCallable, Category = "Attributes")
    float GetStamina() const;

    UFUNCTION(BlueprintCallable, Category = "Attributes")
    float GetMaxStamina() const;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere)
    TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

    UPROPERTY()
    TObjectPtr<UMyAttributeSet> AttributeSet;

    virtual void InitializeAbilitySystem();

    UFUNCTION(BlueprintCallable)
    void ApplyDamage(float DamageAmount);

protected:
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

    void Attack();

    UPROPERTY(EditDefaultsOnly, Category = "Combat")
    TObjectPtr<UAnimMontage> AttackMontage;

    UPROPERTY(EditDefaultsOnly, Category = "Input")
    TObjectPtr<UInputAction> AttackAction;

protected:
    // 시작 시 부여할 Abilities (Blueprint에서 설정)
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GAS|Abilities")
    TArray<TSubclassOf<UGameplayAbility>> DefaultAbilities;

    // 패시브 부여 Abilites
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GAS|Abilities")
    TArray<TSubclassOf<UGameplayAbility>> PassiveAbilities;
    
    // Ability 부여 함수
    void GiveDefaultAbilities();

protected:

    // Input Action (Blueprint에서 설정)
    UPROPERTY(EditDefaultsOnly, Category = "GAS|Input")
    TObjectPtr<UInputAction> IA_Attack;

    void OnAttack();

    // Input Action (Blueprint에서 설정)
    UPROPERTY(EditDefaultsOnly, Category = "GAS|Input")
    TObjectPtr<UInputAction> IA_HeavyAttack;

    void OnHeavyAttack();

    UPROPERTY(EditDefaultsOnly, Category = "GAS|Input")
    TObjectPtr<UInputAction> IA_Block;

    void OnBlockStart();
    void OnBlockCompleted();
};
