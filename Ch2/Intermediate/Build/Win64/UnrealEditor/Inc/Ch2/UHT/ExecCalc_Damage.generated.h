// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Calculation/ExecCalc_Damage.h"

#ifdef CH2_ExecCalc_Damage_generated_h
#error "ExecCalc_Damage.generated.h already included, missing '#pragma once' in ExecCalc_Damage.h"
#endif
#define CH2_ExecCalc_Damage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExecCalc_Damage *********************************************************
CH2_API UClass* Z_Construct_UClass_UExecCalc_Damage_NoRegister();

#define FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExecCalc_Damage(); \
	friend struct Z_Construct_UClass_UExecCalc_Damage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_UExecCalc_Damage_NoRegister(); \
public: \
	DECLARE_CLASS2(UExecCalc_Damage, UGameplayEffectExecutionCalculation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_UExecCalc_Damage_NoRegister) \
	DECLARE_SERIALIZER(UExecCalc_Damage)


#define FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExecCalc_Damage(UExecCalc_Damage&&) = delete; \
	UExecCalc_Damage(const UExecCalc_Damage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExecCalc_Damage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExecCalc_Damage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExecCalc_Damage) \
	NO_API virtual ~UExecCalc_Damage();


#define FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h_13_PROLOG
#define FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h_16_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExecCalc_Damage;

// ********** End Class UExecCalc_Damage ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_GAS_Calculation_ExecCalc_Damage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
