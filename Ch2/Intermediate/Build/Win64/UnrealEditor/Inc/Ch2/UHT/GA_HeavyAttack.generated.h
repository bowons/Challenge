// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Abilities/GA_HeavyAttack.h"

#ifdef CH2_GA_HeavyAttack_generated_h
#error "GA_HeavyAttack.generated.h already included, missing '#pragma once' in GA_HeavyAttack.h"
#endif
#define CH2_GA_HeavyAttack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGA_HeavyAttack **********************************************************
CH2_API UClass* Z_Construct_UClass_UGA_HeavyAttack_NoRegister();

#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_HeavyAttack(); \
	friend struct Z_Construct_UClass_UGA_HeavyAttack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_UGA_HeavyAttack_NoRegister(); \
public: \
	DECLARE_CLASS2(UGA_HeavyAttack, UGA_AttackBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_UGA_HeavyAttack_NoRegister) \
	DECLARE_SERIALIZER(UGA_HeavyAttack)


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGA_HeavyAttack(UGA_HeavyAttack&&) = delete; \
	UGA_HeavyAttack(const UGA_HeavyAttack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_HeavyAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_HeavyAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_HeavyAttack) \
	NO_API virtual ~UGA_HeavyAttack();


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h_12_PROLOG
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGA_HeavyAttack;

// ********** End Class UGA_HeavyAttack ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_HeavyAttack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
