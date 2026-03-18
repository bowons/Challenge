// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ComboData.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FComboData
{
	GENERATED_BODY()
	
	// 이 공격의 Ability Tag (각 콤보마다 다름!)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combo")
	FGameplayTag AbilityTag;

	// 콤보 인덱스 (0, 1, 2)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combo")
	int32 ComboIndex = 0;

	// 데미지 (참고용)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combo")
	float Damage = 10.0f;
};