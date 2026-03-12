// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abilities/GA_StaminaGen.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGA_StaminaGen() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_StaminaGen();
CH2_API UClass* Z_Construct_UClass_UGA_StaminaGen_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGA_StaminaGen ***********************************************************
void UGA_StaminaGen::StaticRegisterNativesUGA_StaminaGen()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGA_StaminaGen;
UClass* UGA_StaminaGen::GetPrivateStaticClass()
{
	using TClass = UGA_StaminaGen;
	if (!Z_Registration_Info_UClass_UGA_StaminaGen.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GA_StaminaGen"),
			Z_Registration_Info_UClass_UGA_StaminaGen.InnerSingleton,
			StaticRegisterNativesUGA_StaminaGen,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGA_StaminaGen.InnerSingleton;
}
UClass* Z_Construct_UClass_UGA_StaminaGen_NoRegister()
{
	return UGA_StaminaGen::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGA_StaminaGen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/GA_StaminaGen.h" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_StaminaGen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenEffect_MetaData[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP\xec\x97\x90\xec\x84\x9c GE_StaminaRegen \xed\x95\xa0\xeb\x8b\xb9 */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_StaminaGen.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP\xec\x97\x90\xec\x84\x9c GE_StaminaRegen \xed\x95\xa0\xeb\x8b\xb9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StaminaRegenEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_StaminaGen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_StaminaGen_Statics::NewProp_StaminaRegenEffect = { "StaminaRegenEffect", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_StaminaGen, StaminaRegenEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenEffect_MetaData), NewProp_StaminaRegenEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_StaminaGen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_StaminaGen_Statics::NewProp_StaminaRegenEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_StaminaGen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_StaminaGen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_StaminaGen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_StaminaGen_Statics::ClassParams = {
	&UGA_StaminaGen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGA_StaminaGen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_StaminaGen_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_StaminaGen_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_StaminaGen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_StaminaGen()
{
	if (!Z_Registration_Info_UClass_UGA_StaminaGen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_StaminaGen.OuterSingleton, Z_Construct_UClass_UGA_StaminaGen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_StaminaGen.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_StaminaGen);
UGA_StaminaGen::~UGA_StaminaGen() {}
// ********** End Class UGA_StaminaGen *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_StaminaGen, UGA_StaminaGen::StaticClass, TEXT("UGA_StaminaGen"), &Z_Registration_Info_UClass_UGA_StaminaGen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_StaminaGen), 3206526339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h__Script_Ch2_2207984440(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
