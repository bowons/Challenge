// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/MyGameModeBase.h"

#include "GAS/MyGameplayTags.h"

void AMyGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	
	FMyGameplayTags::InitializeNativeTags();
}
