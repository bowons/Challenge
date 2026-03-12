// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abilities/GA_LightAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGA_LightAttack() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_AttackBase();
CH2_API UClass* Z_Construct_UClass_UGA_LightAttack();
CH2_API UClass* Z_Construct_UClass_UGA_LightAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGA_LightAttack **********************************************************
void UGA_LightAttack::StaticRegisterNativesUGA_LightAttack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGA_LightAttack;
UClass* UGA_LightAttack::GetPrivateStaticClass()
{
	using TClass = UGA_LightAttack;
	if (!Z_Registration_Info_UClass_UGA_LightAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GA_LightAttack"),
			Z_Registration_Info_UClass_UGA_LightAttack.InnerSingleton,
			StaticRegisterNativesUGA_LightAttack,
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
	return Z_Registration_Info_UClass_UGA_LightAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UGA_LightAttack_NoRegister()
{
	return UGA_LightAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGA_LightAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/GA_LightAttack.h" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_LightAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_LightAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_LightAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGA_AttackBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_LightAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_LightAttack_Statics::ClassParams = {
	&UGA_LightAttack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_LightAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_LightAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_LightAttack()
{
	if (!Z_Registration_Info_UClass_UGA_LightAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_LightAttack.OuterSingleton, Z_Construct_UClass_UGA_LightAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_LightAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_LightAttack);
UGA_LightAttack::~UGA_LightAttack() {}
// ********** End Class UGA_LightAttack ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_LightAttack, UGA_LightAttack::StaticClass, TEXT("UGA_LightAttack"), &Z_Registration_Info_UClass_UGA_LightAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_LightAttack), 1404574149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h__Script_Ch2_1593658175(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
