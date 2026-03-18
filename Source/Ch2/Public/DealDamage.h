// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "DealDamage.generated.h"

/**
 * 
 */
class UGameplayEffect;

UCLASS()
class CH2_API UDealDamage : public UAnimNotify
{
	GENERATED_BODY()
	
public:
    UDealDamage();

    virtual void Notify(USkeletalMeshComponent* MeshComp, 
                        UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;


    /* Sphere Trace 반경 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float TraceRadius = 50.0f;

    /* Trace 시작 거리 (캐릭터 전방) */ 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float TraceStartDistance = 50.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float TraceEndDistance = 150.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    TSubclassOf<UGameplayEffect> DamageEffectClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    bool bShowDebug = false;
};
