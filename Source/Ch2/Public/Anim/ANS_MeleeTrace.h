// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANS_MeleeTrace.generated.h"

/**
 * Melee Trace Window를 관리하는 AnimNotifyState
 * Begin: Trace 시작
 * End: Trace 종료
 *
 * Socket 설정은 GA_AttackBase Blueprint에서 합니다.
 * 이 Notify는 "지금부터 Trace 시작/종료" 타이밍만 알려줍니다.
 */
UCLASS()
class CH2_API UANS_MeleeTrace : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	virtual void NotifyBegin(
		USkeletalMeshComponent* MeshComp,
		UAnimSequenceBase* Animation,
		float TotalDuration,
		const FAnimNotifyEventReference& EventReference
	) override;

	virtual void NotifyEnd(
		USkeletalMeshComponent* MeshComp,
		UAnimSequenceBase* Animation,
		const FAnimNotifyEventReference& EventReference
	) override;

	virtual FString GetNotifyName_Implementation() const override
	{
		return TEXT("Melee Trace");
	}
};
