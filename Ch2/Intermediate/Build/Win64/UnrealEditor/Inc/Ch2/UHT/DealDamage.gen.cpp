// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DealDamage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDealDamage() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_UDealDamage();
CH2_API UClass* Z_Construct_UClass_UDealDamage_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDealDamage **************************************************************
void UDealDamage::StaticRegisterNativesUDealDamage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDealDamage;
UClass* UDealDamage::GetPrivateStaticClass()
{
	using TClass = UDealDamage;
	if (!Z_Registration_Info_UClass_UDealDamage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DealDamage"),
			Z_Registration_Info_UClass_UDealDamage.InnerSingleton,
			StaticRegisterNativesUDealDamage,
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
	return Z_Registration_Info_UClass_UDealDamage.InnerSingleton;
}
UClass* Z_Construct_UClass_UDealDamage_NoRegister()
{
	return UDealDamage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDealDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "DealDamage.h" },
		{ "ModuleRelativePath", "Public/DealDamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Sphere Trace \xeb\xb0\x98\xea\xb2\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/DealDamage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere Trace \xeb\xb0\x98\xea\xb2\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartDistance_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Trace \xec\x8b\x9c\xec\x9e\x91 \xea\xb1\xb0\xeb\xa6\xac (\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 \xec\xa0\x84\xeb\xb0\xa9) */" },
#endif
		{ "ModuleRelativePath", "Public/DealDamage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace \xec\x8b\x9c\xec\x9e\x91 \xea\xb1\xb0\xeb\xa6\xac (\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0 \xec\xa0\x84\xeb\xb0\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceEndDistance_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/DealDamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/DealDamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/DealDamage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceStartDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceEndDistance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static void NewProp_bShowDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDealDamage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDealDamage_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDealDamage, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDealDamage_Statics::NewProp_TraceStartDistance = { "TraceStartDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDealDamage, TraceStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStartDistance_MetaData), NewProp_TraceStartDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDealDamage_Statics::NewProp_TraceEndDistance = { "TraceEndDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDealDamage, TraceEndDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceEndDistance_MetaData), NewProp_TraceEndDistance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDealDamage_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDealDamage, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
void Z_Construct_UClass_UDealDamage_Statics::NewProp_bShowDebug_SetBit(void* Obj)
{
	((UDealDamage*)Obj)->bShowDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDealDamage_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDealDamage), &Z_Construct_UClass_UDealDamage_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebug_MetaData), NewProp_bShowDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDealDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDealDamage_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDealDamage_Statics::NewProp_TraceStartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDealDamage_Statics::NewProp_TraceEndDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDealDamage_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDealDamage_Statics::NewProp_bShowDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDealDamage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDealDamage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDealDamage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDealDamage_Statics::ClassParams = {
	&UDealDamage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDealDamage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDealDamage_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDealDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UDealDamage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDealDamage()
{
	if (!Z_Registration_Info_UClass_UDealDamage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDealDamage.OuterSingleton, Z_Construct_UClass_UDealDamage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDealDamage.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDealDamage);
UDealDamage::~UDealDamage() {}
// ********** End Class UDealDamage ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_DealDamage_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDealDamage, UDealDamage::StaticClass, TEXT("UDealDamage"), &Z_Registration_Info_UClass_UDealDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDealDamage), 1388444208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_DealDamage_h__Script_Ch2_1258118421(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_DealDamage_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_DealDamage_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
