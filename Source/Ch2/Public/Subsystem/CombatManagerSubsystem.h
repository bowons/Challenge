// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CombatManagerSubsystem.generated.h"

/**
 * 
 */
/**
 * 전투 상태 변경 Delegate
 *@parambInCombat 전투 중(true) / 평화(false)
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatStateChanged, bool, bInCombat);

/**
 * 전투 타이머 갱신 Delegate
 * @param RemainingTime 남은 시간 (초)
 *
 * 용도: UI에서 Progress Bar 등으로 타이머 표시
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnCombatTimerUpdated,
	float, RemainingTime
);

UCLASS()
class CH2_API UCombatManagerSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	
	// 현재 전투 중인지 여부
	bool bIsInCombat = false;
	
	// 전투 자동 종료 타이머
	FTimerHandle CombatTimeoutHandle;
	
	// 전투 타임아웃 시간 (기본 5초)
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float CombatTimeout = 5.0f;
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Combat")
	bool IsInCombat() const { return bIsInCombat; }
	
	/** 전투 상태 변경 이벤트 */
	UPROPERTY(BlueprintAssignable, Category = "Combat")
	FOnCombatStateChanged OnCombatStateChanged;
    
	/** 전투 타이머 갱신 이벤트 (UI용) */
	UPROPERTY(BlueprintAssignable, Category = "Combat")
	FOnCombatTimerUpdated OnCombatTimerUpdated;
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Combat")
	float GetRemainingCombatTime() const
	{
		if (UWorld* World = GetWorld())
		{
			return World->GetTimerManager().GetTimerRemaining(CombatTimeoutHandle);
		}
		return 0.0f;
	}
	
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void StartCombat();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void EndCombat();
};
