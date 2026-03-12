// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Calculation/ExecCalc_Damage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeExecCalc_Damage() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_UExecCalc_Damage();
CH2_API UClass* Z_Construct_UClass_UExecCalc_Damage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UExecCalc_Damage *********************************************************
void UExecCalc_Damage::StaticRegisterNativesUExecCalc_Damage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UExecCalc_Damage;
UClass* UExecCalc_Damage::GetPrivateStaticClass()
{
	using TClass = UExecCalc_Damage;
	if (!Z_Registration_Info_UClass_UExecCalc_Damage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExecCalc_Damage"),
			Z_Registration_Info_UClass_UExecCalc_Damage.InnerSingleton,
			StaticRegisterNativesUExecCalc_Damage,
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
	return Z_Registration_Info_UClass_UExecCalc_Damage.InnerSingleton;
}
UClass* Z_Construct_UClass_UExecCalc_Damage_NoRegister()
{
	return UExecCalc_Damage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExecCalc_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Calculation/ExecCalc_Damage.h" },
		{ "ModuleRelativePath", "Public/GAS/Calculation/ExecCalc_Damage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecCalc_Damage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExecCalc_Damage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalc_Damage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExecCalc_Damage_Statics::ClassParams = {
	&UExecCalc_Damage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalc_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UExecCalc_Damage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExecCalc_Damage()
{
	if (!Z_Registration_Info_UClass_UExecCalc_Damage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExecCalc_Damage.OuterSingleton, Z_Construct_UClass_UExecCalc_Damage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExecCalc_Damage.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExecCalc_Damage);
UExecCalc_Damage::~UExecCalc_Damage() {}
// ********** End Class UExecCalc_Damage ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExecCalc_Damage, UExecCalc_Damage::StaticClass, TEXT("UExecCalc_Damage"), &Z_Registration_Info_UClass_UExecCalc_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExecCalc_Damage), 2554816302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h__Script_Ch2_3601361800(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
