// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abilities/GA_AttackBase.h"
#include "Abilities/GameplayAbilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGA_AttackBase() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_AttackBase();
CH2_API UClass* Z_Construct_UClass_UGA_AttackBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGA_AttackBase Function OnDamageGameplayEvent ****************************
struct Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics
{
	struct GA_AttackBase_eventOnDamageGameplayEvent_Parms
	{
		FGameplayEventData Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============================================================\n// \xec\xbd\x9c\xeb\xb0\xb1\n// ============================================================\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_AttackBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbd\x9c\xeb\xb0\xb1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GA_AttackBase_eventOnDamageGameplayEvent_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 924940328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_AttackBase, nullptr, "OnDamageGameplayEvent", Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::GA_AttackBase_eventOnDamageGameplayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::GA_AttackBase_eventOnDamageGameplayEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_AttackBase::execOnDamageGameplayEvent)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDamageGameplayEvent(Z_Param_Payload);
	P_NATIVE_END;
}
// ********** End Class UGA_AttackBase Function OnDamageGameplayEvent ******************************

// ********** Begin Class UGA_AttackBase Function OnMontageCancelled *******************************
struct Z_Construct_UFunction_UGA_AttackBase_OnMontageCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_AttackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_AttackBase_OnMontageCancelled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_AttackBase, nullptr, "OnMontageCancelled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_AttackBase_OnMontageCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_AttackBase_OnMontageCancelled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGA_AttackBase_OnMontageCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_AttackBase_OnMontageCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_AttackBase::execOnMontageCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageCancelled();
	P_NATIVE_END;
}
// ********** End Class UGA_AttackBase Function OnMontageCancelled *********************************

// ********** Begin Class UGA_AttackBase Function OnMontageCompleted *******************************
struct Z_Construct_UFunction_UGA_AttackBase_OnMontageCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_AttackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_AttackBase_OnMontageCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGA_AttackBase, nullptr, "OnMontageCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_AttackBase_OnMontageCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_AttackBase_OnMontageCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGA_AttackBase_OnMontageCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_AttackBase_OnMontageCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_AttackBase::execOnMontageCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageCompleted();
	P_NATIVE_END;
}
// ********** End Class UGA_AttackBase Function OnMontageCompleted *********************************

// ********** Begin Class UGA_AttackBase ***********************************************************
void UGA_AttackBase::StaticRegisterNativesUGA_AttackBase()
{
	UClass* Class = UGA_AttackBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDamageGameplayEvent", &UGA_AttackBase::execOnDamageGameplayEvent },
		{ "OnMontageCancelled", &UGA_AttackBase::execOnMontageCancelled },
		{ "OnMontageCompleted", &UGA_AttackBase::execOnMontageCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGA_AttackBase;
UClass* UGA_AttackBase::GetPrivateStaticClass()
{
	using TClass = UGA_AttackBase;
	if (!Z_Registration_Info_UClass_UGA_AttackBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GA_AttackBase"),
			Z_Registration_Info_UClass_UGA_AttackBase.InnerSingleton,
			StaticRegisterNativesUGA_AttackBase,
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
	return Z_Registration_Info_UClass_UGA_AttackBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UGA_AttackBase_NoRegister()
{
	return UGA_AttackBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGA_AttackBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/GA_AttackBase.h" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_AttackBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attack|Animation" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_AttackBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Attack|Damage" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_AttackBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Attack|Trace" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_AttackBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Attack|Trace" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_AttackBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugTrace_MetaData[] = {
		{ "Category", "Attack|Debug" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_AttackBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static void NewProp_bShowDebugTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_AttackBase_OnDamageGameplayEvent, "OnDamageGameplayEvent" }, // 3848526364
		{ &Z_Construct_UFunction_UGA_AttackBase_OnMontageCancelled, "OnMontageCancelled" }, // 1460480218
		{ &Z_Construct_UFunction_UGA_AttackBase_OnMontageCompleted, "OnMontageCompleted" }, // 2611216502
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_AttackBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_AttackBase, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_AttackBase, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_AttackBase, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_AttackBase, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
void Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_bShowDebugTrace_SetBit(void* Obj)
{
	((UGA_AttackBase*)Obj)->bShowDebugTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_bShowDebugTrace = { "bShowDebugTrace", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGA_AttackBase), &Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_bShowDebugTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugTrace_MetaData), NewProp_bShowDebugTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_AttackBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_AttackBase_Statics::NewProp_bShowDebugTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_AttackBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_AttackBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_AttackBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_AttackBase_Statics::ClassParams = {
	&UGA_AttackBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGA_AttackBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_AttackBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_AttackBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_AttackBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_AttackBase()
{
	if (!Z_Registration_Info_UClass_UGA_AttackBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_AttackBase.OuterSingleton, Z_Construct_UClass_UGA_AttackBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_AttackBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_AttackBase);
UGA_AttackBase::~UGA_AttackBase() {}
// ********** End Class UGA_AttackBase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_AttackBase, UGA_AttackBase::StaticClass, TEXT("UGA_AttackBase"), &Z_Registration_Info_UClass_UGA_AttackBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_AttackBase), 3343804724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h__Script_Ch2_1142368269(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
