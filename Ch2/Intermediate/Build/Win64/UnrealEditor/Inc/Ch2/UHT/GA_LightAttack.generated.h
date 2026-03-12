// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Abilities/GA_LightAttack.h"

#ifdef CH2_GA_LightAttack_generated_h
#error "GA_LightAttack.generated.h already included, missing '#pragma once' in GA_LightAttack.h"
#endif
#define CH2_GA_LightAttack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGA_LightAttack **********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_LightAttack_NoRegister();

#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_LightAttack(); \
	friend struct Z_Construct_UClass_UGA_LightAttack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_UGA_LightAttack_NoRegister(); \
public: \
	DECLARE_CLASS2(UGA_LightAttack, UGA_AttackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_UGA_LightAttack_NoRegister) \
	DECLARE_SERIALIZER(UGA_LightAttack)


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGA_LightAttack(UGA_LightAttack&&) = delete; \
	UGA_LightAttack(const UGA_LightAttack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_LightAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_LightAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_LightAttack) \
	NO_API virtual ~UGA_LightAttack();


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h_12_PROLOG
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGA_LightAttack;

// ********** End Class UGA_LightAttack ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_LightAttack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
