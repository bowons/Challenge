// Fill out your copyright notice in the Description page of Project Settings.


#include "Anim/ANS_DodgeWindow.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "GAS/Abilities/GA_Dodge.h"

void UANS_DodgeWindow::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,
                                   const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
	
	if (!MeshComp || !MeshComp->GetOwner()) return;
	
	AActor* Owner = MeshComp->GetOwner();
	
	// ASC에서 활성화된 어빌리티 찾기
	UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Owner);
	
	if (!ASC) return;
	
	// 활성화된 Ability중 GA_Dodge찾기
	for (const FGameplayAbilitySpec& Spec : ASC->GetActivatableAbilities())
	{
		if (Spec.IsActive())
		{
			if (UGA_Dodge* DodgeAbility = Cast<UGA_Dodge>(Spec.GetPrimaryInstance()))
			{
				DodgeAbility->BeginDodgeWindow();
			}
		}
	}
}

void UANS_DodgeWindow::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
	
	if (!MeshComp || !MeshComp->GetOwner()) return;
	
	AActor* Owner = MeshComp->GetOwner();
	
	// ASC에서 활성화된 어빌리티 찾기
	UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Owner);
	
	if (!ASC) return;
	
	// 활성화된 Ability중 GA_Dodge찾기
	for (const FGameplayAbilitySpec& Spec : ASC->GetActivatableAbilities())
	{
		if (Spec.IsActive())
		{
			if (UGA_Dodge* DodgeAbility = Cast<UGA_Dodge>(Spec.GetPrimaryInstance()))
			{
				DodgeAbility->EndDodgeWindow();
			}
		}
	}
}

FString UANS_DodgeWindow::GetNotifyName_Implementation() const
{
	return TEXT("DodgeWindow");
}
