// Fill out your copyright notice in the Description page of Project Settings.


#include "Anim/ANS_MeleeTrace.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "GAS/Abilities/GA_AttackBase.h"


void UANS_MeleeTrace::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,
                                  const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (!MeshComp || !MeshComp->GetOwner()) return;

	AActor* Owner = MeshComp->GetOwner();

	// ASC에서 활성화된 Attack Ability 찾기
	UAbilitySystemComponent* ASC =
		UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Owner);

	if (!ASC) return;

	// 활성화된 Ability 중 GA_AttackBase 찾기
	for (const FGameplayAbilitySpec& Spec : ASC->GetActivatableAbilities())
	{
		if (Spec.IsActive())
		{
			if (UGA_AttackBase* AttackAbility =
				Cast<UGA_AttackBase>(Spec.GetPrimaryInstance()))
			{
				// Trace Window 시작 (Socket은 GA가 이미 알고 있음)
				AttackAbility->BeginTraceWindow();
				break;
			}
		}
	}
}

void UANS_MeleeTrace::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (!MeshComp || !MeshComp->GetOwner()) return;

	AActor* Owner = MeshComp->GetOwner();

	UAbilitySystemComponent* ASC =
		UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Owner);

	if (!ASC) return;

	// 활성화된 Attack Ability의 Trace Window 종료
	for (const FGameplayAbilitySpec& Spec : ASC->GetActivatableAbilities())
	{
		if (Spec.IsActive())
		{
			if (UGA_AttackBase* AttackAbility =
				Cast<UGA_AttackBase>(Spec.GetPrimaryInstance()))
			{
				AttackAbility->EndTraceWindow();
				break;
			}
		}
	}
}
