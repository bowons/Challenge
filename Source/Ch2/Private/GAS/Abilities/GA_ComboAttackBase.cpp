// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_ComboAttackBase.h"

#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "GAS/MyGameplayTags.h"

UGA_ComboAttackBase::UGA_ComboAttackBase()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	
	// 공격 중 태그
	//ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("State.Attacking")));
	const FMyGameplayTags& Tags = FMyGameplayTags::Get();
		ActivationOwnedTags.AddTag(Tags.State_Attacking);
}

void UGA_ComboAttackBase::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	if (!MontageToPlay)
	{
		UE_LOG(LogTemp, Error, TEXT("[ComboAttack] No Montage!"));
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	// Montage 재생 (Section 지정)
	UAbilityTask_PlayMontageAndWait* Task =
		UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(
			this, NAME_None, MontageToPlay, 1.0f, SectionName);

	Task->OnCompleted.AddDynamic(this, &UGA_ComboAttackBase::OnMontageEnded);
	Task->OnBlendOut.AddDynamic(this, &UGA_ComboAttackBase::OnMontageEnded);
	Task->OnInterrupted.AddDynamic(this, &UGA_ComboAttackBase::OnMontageEnded);
	Task->OnCancelled.AddDynamic(this, &UGA_ComboAttackBase::OnMontageEnded);
	Task->ReadyForActivation();
}

void UGA_ComboAttackBase::OnMontageEnded()
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}
