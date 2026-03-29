// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_AttackBase.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class CH2_API UGA_AttackBase : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
    UGA_AttackBase();
    
    /** Trace Window 시작 (AnimNotifyState에서 호출) */
    UFUNCTION(BlueprintCallable, Category = "Attack")
    void BeginTraceWindow();

    /** Trace Window 종료 (AnimNotifyState에서 호출) */
    UFUNCTION(BlueprintCallable, Category = "Attack")
    void EndTraceWindow();

protected:
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, 
        const FGameplayAbilityActorInfo* ActorInfo, 
        const FGameplayAbilityActivationInfo ActivationInfo, 
        const FGameplayEventData* TriggerEventData) override;

    virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, 
        const FGameplayAbilityActorInfo* ActorInfo, 
        const FGameplayAbilityActivationInfo ActivationInfo, 
        bool bReplicateEndAbility, 
        bool bWasCancelled) override;

    UPROPERTY(EditDefaultsOnly, Category = "Attack|Animation")
    UAnimMontage* AttackMontage;

    UPROPERTY(EditDefaultsOnly, Category = "Attack|Damage")
    TSubclassOf<UGameplayEffect> DamageEffectClass;

    /** Trace 진행 중 여부 */
    bool bIsTracing = false;

    /** Trace Timer Handle */
    FTimerHandle TraceTimerHandle;

    /** Trace 간격 (초) */
    UPROPERTY(EditDefaultsOnly, Category = "Attack|Trace")
    float TraceInterval = 0.016f;  // 약 60 FPS
    
    UPROPERTY(EditDefaultsOnly, Category = "Attack|Trace")
    float TraceDistance = 100.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Attack|Trace")
    float TraceRadius = 50.0f;

	/** Trace할 Socket 이름 (hand_l, hand_r, foot_r 등) */
	UPROPERTY(EditDefaultsOnly, Category = "Attack|Trace")
	FName TraceSocketName = FName("hand_r");
    
    /** 캐릭터 Mesh 캐시 (BeginPlay에서 설정) */
    UPROPERTY()
    TObjectPtr<USkeletalMeshComponent> CachedMesh;

    /** Mesh 캐시 설정 */
    void CacheMeshComponent();

    UPROPERTY(EditDefaultsOnly, Category = "Attack|Debug")
    bool bShowDebugTrace = true;

    // ============================================================
    // 10강: 중복 Hit 방지
    // ============================================================

    /** 이미 Hit한 Actor들 (공격 1회당 초기화) */
    UPROPERTY()
    TSet<TWeakObjectPtr<AActor>> HitActors;

    /** HitActors 초기화 */
    void ResetHitActors();

    /** 중복 체크 후 Damage 적용 */
    bool TryApplyDamageToActor(AActor* HitActor);
    
    // ============================================================
    // 공통 로직 (자식에서 재사용)
    // ============================================================

    /** Sphere Trace로 히트 판정 */
    virtual void PerformMeleeTrace();

    /** 히트된 대상에 데미지 적용 */
    virtual void ApplyDamageToActor(AActor* HitActor);
    
    // ============================================================
    // 콜백
    // ============================================================

    UFUNCTION()
    virtual void OnDamageGameplayEvent(FGameplayEventData Payload);

    UFUNCTION()
    virtual void OnMontageCompleted();

    UFUNCTION()
    virtual void OnMontageCancelled();
};
