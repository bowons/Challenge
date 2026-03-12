// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abilities/GA_MeleeAttack.h"
#include "Abilities/GameplayAbilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGA_MeleeAttack() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_MeleeAttack();
CH2_API UClass* Z_Construct_UClass_UGA_MeleeAttack_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGA_MeleeAttack Function OnDamageGameplayEvent ***************************
struct Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics
{
	struct GA_MeleeAttack_eventOnDamageGameplayEvent_Parms
	{
		FGameplayEventData EventData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay Event \xec\xbd\x9c\xeb\xb0\xb1 (AnimNotify \xeb\x8c\x80\xec\x8b\xa0)\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_MeleeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Event \xec\xbd\x9c\xeb\xb0\xb1 (AnimNotify \xeb\x8c\x80\xec\x8b\xa0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GA_MeleeAttack_eventOnDamageGameplayEvent_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 924940328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::NewProp_EventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_MeleeAttack, nullptr, "OnDamageGameplayEvent", Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::GA_MeleeAttack_eventOnDamageGameplayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::GA_MeleeAttack_eventOnDamageGameplayEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_MeleeAttack::execOnDamageGameplayEvent)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDamageGameplayEvent(Z_Param_EventData);
	P_NATIVE_END;
}
// ********** End Class UGA_MeleeAttack Function OnDamageGameplayEvent *****************************

// ********** Begin Class UGA_MeleeAttack Function OnMontageCancelled ******************************
struct Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Montage \xec\xb7\xa8\xec\x86\x8c \xec\xbd\x9c\xeb\xb0\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_MeleeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage \xec\xb7\xa8\xec\x86\x8c \xec\xbd\x9c\xeb\xb0\xb1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCancelled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_MeleeAttack, nullptr, "OnMontageCancelled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCancelled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_MeleeAttack::execOnMontageCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageCancelled();
	P_NATIVE_END;
}
// ********** End Class UGA_MeleeAttack Function OnMontageCancelled ********************************

// ********** Begin Class UGA_MeleeAttack Function OnMontageCompleted ******************************
struct Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Montage \xec\x99\x84\xeb\xa3\x8c \xec\xbd\x9c\xeb\xb0\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_MeleeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage \xec\x99\x84\xeb\xa3\x8c \xec\xbd\x9c\xeb\xb0\xb1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_MeleeAttack, nullptr, "OnMontageCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_MeleeAttack::execOnMontageCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageCompleted();
	P_NATIVE_END;
}
// ********** End Class UGA_MeleeAttack Function OnMontageCompleted ********************************

// ********** Begin Class UGA_MeleeAttack **********************************************************
void UGA_MeleeAttack::StaticRegisterNativesUGA_MeleeAttack()
{
	UClass* Class = UGA_MeleeAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDamageGameplayEvent", &UGA_MeleeAttack::execOnDamageGameplayEvent },
		{ "OnMontageCancelled", &UGA_MeleeAttack::execOnMontageCancelled },
		{ "OnMontageCompleted", &UGA_MeleeAttack::execOnMontageCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGA_MeleeAttack;
UClass* UGA_MeleeAttack::GetPrivateStaticClass()
{
	using TClass = UGA_MeleeAttack;
	if (!Z_Registration_Info_UClass_UGA_MeleeAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GA_MeleeAttack"),
			Z_Registration_Info_UClass_UGA_MeleeAttack.InnerSingleton,
			StaticRegisterNativesUGA_MeleeAttack,
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
	return Z_Registration_Info_UClass_UGA_MeleeAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UGA_MeleeAttack_NoRegister()
{
	return UGA_MeleeAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGA_MeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/GA_MeleeAttack.h" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_MeleeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ======== Blueprint \xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4 =========\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_MeleeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "======== Blueprint \xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4 =========" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 Damage Effect\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_MeleeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x81\xec\x9a\xa9\xed\x95\xa0 Damage Effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sphere Trace \xea\xb1\xb0\xeb\xa6\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_MeleeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere Trace \xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sphere Trace \xeb\xb0\x98\xea\xb2\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_MeleeAttack.h" },
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
		{ &Z_Construct_UFunction_UGA_MeleeAttack_OnDamageGameplayEvent, "OnDamageGameplayEvent" }, // 2306388162
		{ &Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCancelled, "OnMontageCancelled" }, // 1077203044
		{ &Z_Construct_UFunction_UGA_MeleeAttack_OnMontageCompleted, "OnMontageCompleted" }, // 1732548894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_MeleeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_MeleeAttack_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_MeleeAttack, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_MeleeAttack_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_MeleeAttack, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_MeleeAttack_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_MeleeAttack, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_MeleeAttack_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_MeleeAttack, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_MeleeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_MeleeAttack_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_MeleeAttack_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_MeleeAttack_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_MeleeAttack_Statics::NewProp_TraceRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_MeleeAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_MeleeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_MeleeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_MeleeAttack_Statics::ClassParams = {
	&UGA_MeleeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGA_MeleeAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_MeleeAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_MeleeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_MeleeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_MeleeAttack()
{
	if (!Z_Registration_Info_UClass_UGA_MeleeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_MeleeAttack.OuterSingleton, Z_Construct_UClass_UGA_MeleeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_MeleeAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_MeleeAttack);
UGA_MeleeAttack::~UGA_MeleeAttack() {}
// ********** End Class UGA_MeleeAttack ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_MeleeAttack, UGA_MeleeAttack::StaticClass, TEXT("UGA_MeleeAttack"), &Z_Registration_Info_UClass_UGA_MeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_MeleeAttack), 252826739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h__Script_Ch2_2477448461(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
