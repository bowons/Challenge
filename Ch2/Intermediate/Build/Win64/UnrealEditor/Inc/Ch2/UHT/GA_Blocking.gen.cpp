// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abilities/GA_Blocking.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGA_Blocking() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_Blocking();
CH2_API UClass* Z_Construct_UClass_UGA_Blocking_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGA_Blocking Function ReleaseBlock ***************************************
struct Z_Construct_UFunction_UGA_Blocking_ReleaseBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Block" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x99\xb8\xeb\xb6\x80\xec\x97\x90\xec\x84\x9c \xeb\xb0\xa9\xec\x96\xb4 \xed\x95\xb4\xec\xa0\x9c \xec\x9a\x94\xec\xb2\xad */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_Blocking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x99\xb8\xeb\xb6\x80\xec\x97\x90\xec\x84\x9c \xeb\xb0\xa9\xec\x96\xb4 \xed\x95\xb4\xec\xa0\x9c \xec\x9a\x94\xec\xb2\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Blocking_ReleaseBlock_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_Blocking, nullptr, "ReleaseBlock", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Blocking_ReleaseBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_Blocking_ReleaseBlock_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGA_Blocking_ReleaseBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_Blocking_ReleaseBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_Blocking::execReleaseBlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseBlock();
	P_NATIVE_END;
}
// ********** End Class UGA_Blocking Function ReleaseBlock *****************************************

// ********** Begin Class UGA_Blocking *************************************************************
void UGA_Blocking::StaticRegisterNativesUGA_Blocking()
{
	UClass* Class = UGA_Blocking::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReleaseBlock", &UGA_Blocking::execReleaseBlock },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGA_Blocking;
UClass* UGA_Blocking::GetPrivateStaticClass()
{
	using TClass = UGA_Blocking;
	if (!Z_Registration_Info_UClass_UGA_Blocking.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GA_Blocking"),
			Z_Registration_Info_UClass_UGA_Blocking.InnerSingleton,
			StaticRegisterNativesUGA_Blocking,
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
	return Z_Registration_Info_UClass_UGA_Blocking.InnerSingleton;
}
UClass* Z_Construct_UClass_UGA_Blocking_NoRegister()
{
	return UGA_Blocking::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGA_Blocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/GA_Blocking.h" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_Blocking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseBuffEffect_MetaData[] = {
		{ "Category", "Block" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb0\xa9\xec\x96\xb4 \xeb\xb2\x84\xed\x94\x84 Effect \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_Blocking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\xa9\xec\x96\xb4 \xeb\xb2\x84\xed\x94\x84 Effect \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainEffect_MetaData[] = {
		{ "Category", "Block|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x85\x8c\xeb\xaf\xb8\xeb\x84\x88 \xed\x9d\xa1\xec\x88\x98\xec\x9a\xa9 */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_Blocking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x85\x8c\xeb\xaf\xb8\xeb\x84\x88 \xed\x9d\xa1\xec\x88\x98\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinStaminaToBlock_MetaData[] = {
		{ "Category", "Block|Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb8\x94\xeb\xa1\x9d \xec\x8b\x9c\xec\x9e\x91\xec\x97\x90 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c \xec\xb5\x9c\xec\x86\x8c \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88 */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_Blocking.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa1\x9d \xec\x8b\x9c\xec\x9e\x91\xec\x97\x90 \xed\x95\x84\xec\x9a\x94\xed\x95\x9c \xec\xb5\x9c\xec\x86\x8c \xec\x8a\xa4\xed\x83\x9c\xeb\xaf\xb8\xeb\x84\x88" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefenseBuffEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StaminaDrainEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStaminaToBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_Blocking_ReleaseBlock, "ReleaseBlock" }, // 2080951546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Blocking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_Blocking_Statics::NewProp_DefenseBuffEffect = { "DefenseBuffEffect", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Blocking, DefenseBuffEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseBuffEffect_MetaData), NewProp_DefenseBuffEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_Blocking_Statics::NewProp_StaminaDrainEffect = { "StaminaDrainEffect", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Blocking, StaminaDrainEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDrainEffect_MetaData), NewProp_StaminaDrainEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Blocking_Statics::NewProp_MinStaminaToBlock = { "MinStaminaToBlock", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Blocking, MinStaminaToBlock), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinStaminaToBlock_MetaData), NewProp_MinStaminaToBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_Blocking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Blocking_Statics::NewProp_DefenseBuffEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Blocking_Statics::NewProp_StaminaDrainEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Blocking_Statics::NewProp_MinStaminaToBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Blocking_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_Blocking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Blocking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Blocking_Statics::ClassParams = {
	&UGA_Blocking::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGA_Blocking_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Blocking_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Blocking_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Blocking_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_Blocking()
{
	if (!Z_Registration_Info_UClass_UGA_Blocking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Blocking.OuterSingleton, Z_Construct_UClass_UGA_Blocking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_Blocking.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Blocking);
UGA_Blocking::~UGA_Blocking() {}
// ********** End Class UGA_Blocking ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Blocking, UGA_Blocking::StaticClass, TEXT("UGA_Blocking"), &Z_Registration_Info_UClass_UGA_Blocking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Blocking), 3612020602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h__Script_Ch2_3695490837(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
