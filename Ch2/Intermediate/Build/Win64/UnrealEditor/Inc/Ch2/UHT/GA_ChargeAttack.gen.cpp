// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abilities/GA_ChargeAttack.h"
#include "Abilities/GameplayAbilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGA_ChargeAttack() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_ChargeAttack();
CH2_API UClass* Z_Construct_UClass_UGA_ChargeAttack_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGA_ChargeAttack Function OnDamageGameplayEvent **************************
struct Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics
{
	struct GA_ChargeAttack_eventOnDamageGameplayEvent_Parms
	{
		FGameplayEventData EventData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay Event \xec\xbd\x9c\xeb\xb0\xb1 (AnimNotify \xeb\x8c\x80\xec\x8b\xa0)\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_ChargeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Event \xec\xbd\x9c\xeb\xb0\xb1 (AnimNotify \xeb\x8c\x80\xec\x8b\xa0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GA_ChargeAttack_eventOnDamageGameplayEvent_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 924940328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::NewProp_EventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_ChargeAttack, nullptr, "OnDamageGameplayEvent", Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::GA_ChargeAttack_eventOnDamageGameplayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::GA_ChargeAttack_eventOnDamageGameplayEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_ChargeAttack::execOnDamageGameplayEvent)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDamageGameplayEvent(Z_Param_EventData);
	P_NATIVE_END;
}
// ********** End Class UGA_ChargeAttack Function OnDamageGameplayEvent ****************************

// ********** Begin Class UGA_ChargeAttack Function OnMontageCancelled *****************************
struct Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Montage \xec\xb7\xa8\xec\x86\x8c \xec\xbd\x9c\xeb\xb0\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_ChargeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage \xec\xb7\xa8\xec\x86\x8c \xec\xbd\x9c\xeb\xb0\xb1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCancelled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_ChargeAttack, nullptr, "OnMontageCancelled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCancelled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_ChargeAttack::execOnMontageCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageCancelled();
	P_NATIVE_END;
}
// ********** End Class UGA_ChargeAttack Function OnMontageCancelled *******************************

// ********** Begin Class UGA_ChargeAttack Function OnMontageCompleted *****************************
struct Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Montage \xec\x99\x84\xeb\xa3\x8c \xec\xbd\x9c\xeb\xb0\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_ChargeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage \xec\x99\x84\xeb\xa3\x8c \xec\xbd\x9c\xeb\xb0\xb1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_ChargeAttack, nullptr, "OnMontageCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_ChargeAttack::execOnMontageCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageCompleted();
	P_NATIVE_END;
}
// ********** End Class UGA_ChargeAttack Function OnMontageCompleted *******************************

// ********** Begin Class UGA_ChargeAttack *********************************************************
void UGA_ChargeAttack::StaticRegisterNativesUGA_ChargeAttack()
{
	UClass* Class = UGA_ChargeAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDamageGameplayEvent", &UGA_ChargeAttack::execOnDamageGameplayEvent },
		{ "OnMontageCancelled", &UGA_ChargeAttack::execOnMontageCancelled },
		{ "OnMontageCompleted", &UGA_ChargeAttack::execOnMontageCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGA_ChargeAttack;
UClass* UGA_ChargeAttack::GetPrivateStaticClass()
{
	using TClass = UGA_ChargeAttack;
	if (!Z_Registration_Info_UClass_UGA_ChargeAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GA_ChargeAttack"),
			Z_Registration_Info_UClass_UGA_ChargeAttack.InnerSingleton,
			StaticRegisterNativesUGA_ChargeAttack,
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
	return Z_Registration_Info_UClass_UGA_ChargeAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UGA_ChargeAttack_NoRegister()
{
	return UGA_ChargeAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGA_ChargeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/GA_ChargeAttack.h" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_ChargeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ======== Blueprint \xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4 =========\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_ChargeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "======== Blueprint \xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4 =========" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 Damage Effect\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_ChargeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 Damage Effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sphere Trace \xea\xb1\xb0\xeb\xa6\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_ChargeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere Trace \xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sphere Trace \xeb\xb0\x98\xea\xb2\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_ChargeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere Trace \xeb\xb0\x98\xea\xb2\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_ChargeAttack_OnDamageGameplayEvent, "OnDamageGameplayEvent" }, // 3201584769
		{ &Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCancelled, "OnMontageCancelled" }, // 2888240196
		{ &Z_Construct_UFunction_UGA_ChargeAttack_OnMontageCompleted, "OnMontageCompleted" }, // 1154953142
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_ChargeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_ChargeAttack_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_ChargeAttack, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_ChargeAttack_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_ChargeAttack, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_ChargeAttack_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_ChargeAttack, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_ChargeAttack_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_ChargeAttack, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_ChargeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_ChargeAttack_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_ChargeAttack_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_ChargeAttack_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_ChargeAttack_Statics::NewProp_TraceRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ChargeAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_ChargeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ChargeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_ChargeAttack_Statics::ClassParams = {
	&UGA_ChargeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGA_ChargeAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ChargeAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ChargeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_ChargeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_ChargeAttack()
{
	if (!Z_Registration_Info_UClass_UGA_ChargeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_ChargeAttack.OuterSingleton, Z_Construct_UClass_UGA_ChargeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_ChargeAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_ChargeAttack);
UGA_ChargeAttack::~UGA_ChargeAttack() {}
// ********** End Class UGA_ChargeAttack ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_ChargeAttack, UGA_ChargeAttack::StaticClass, TEXT("UGA_ChargeAttack"), &Z_Registration_Info_UClass_UGA_ChargeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_ChargeAttack), 833537124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h__Script_Ch2_3889389999(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
