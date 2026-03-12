// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS/Abilities/GA_HeavyAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGA_HeavyAttack() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_AttackBase();
CH2_API UClass* Z_Construct_UClass_UGA_HeavyAttack();
CH2_API UClass* Z_Construct_UClass_UGA_HeavyAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGA_HeavyAttack **********************************************************
void UGA_HeavyAttack::StaticRegisterNativesUGA_HeavyAttack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGA_HeavyAttack;
UClass* UGA_HeavyAttack::GetPrivateStaticClass()
{
	using TClass = UGA_HeavyAttack;
	if (!Z_Registration_Info_UClass_UGA_HeavyAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GA_HeavyAttack"),
			Z_Registration_Info_UClass_UGA_HeavyAttack.InnerSingleton,
			StaticRegisterNativesUGA_HeavyAttack,
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
	return Z_Registration_Info_UClass_UGA_HeavyAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UGA_HeavyAttack_NoRegister()
{
	return UGA_HeavyAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGA_HeavyAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/Abilities/GA_HeavyAttack.h" },
		{ "ModuleRelativePath", "Public/GAS/Abilities/GA_HeavyAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_HeavyAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_HeavyAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGA_AttackBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_HeavyAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_HeavyAttack_Statics::ClassParams = {
	&UGA_HeavyAttack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_HeavyAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_HeavyAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_HeavyAttack()
{
	if (!Z_Registration_Info_UClass_UGA_HeavyAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_HeavyAttack.OuterSingleton, Z_Construct_UClass_UGA_HeavyAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_HeavyAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_HeavyAttack);
UGA_HeavyAttack::~UGA_HeavyAttack() {}
// ********** End Class UGA_HeavyAttack ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_HeavyAttack, UGA_HeavyAttack::StaticClass, TEXT("UGA_HeavyAttack"), &Z_Registration_Info_UClass_UGA_HeavyAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_HeavyAttack), 2325512565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h__Script_Ch2_570687404(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
