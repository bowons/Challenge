// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Abilities/GA_StaminaGen.h"

#ifdef CH2_GA_StaminaGen_generated_h
#error "GA_StaminaGen.generated.h already included, missing '#pragma once' in GA_StaminaGen.h"
#endif
#define CH2_GA_StaminaGen_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGA_StaminaGen ***********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_StaminaGen_NoRegister();

#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_StaminaGen(); \
	friend struct Z_Construct_UClass_UGA_StaminaGen_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_UGA_StaminaGen_NoRegister(); \
public: \
	DECLARE_CLASS2(UGA_StaminaGen, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_UGA_StaminaGen_NoRegister) \
	DECLARE_SERIALIZER(UGA_StaminaGen)


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGA_StaminaGen(UGA_StaminaGen&&) = delete; \
	UGA_StaminaGen(const UGA_StaminaGen&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_StaminaGen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_StaminaGen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_StaminaGen) \
	NO_API virtual ~UGA_StaminaGen();


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h_12_PROLOG
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h_15_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGA_StaminaGen;

// ********** End Class UGA_StaminaGen *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_StaminaGen_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
