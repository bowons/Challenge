// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Abilities/GA_MeleeAttack.h"

#ifdef CH2_GA_MeleeAttack_generated_h
#error "GA_MeleeAttack.generated.h already included, missing '#pragma once' in GA_MeleeAttack.h"
#endif
#define CH2_GA_MeleeAttack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayEventData;

// ********** Begin Class UGA_MeleeAttack **********************************************************
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDamageGameplayEvent); \
	DECLARE_FUNCTION(execOnMontageCancelled); \
	DECLARE_FUNCTION(execOnMontageCompleted);


CH2_API UClass* Z_Construct_UClass_UGA_MeleeAttack_NoRegister();

#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_MeleeAttack(); \
	friend struct Z_Construct_UClass_UGA_MeleeAttack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_UGA_MeleeAttack_NoRegister(); \
public: \
	DECLARE_CLASS2(UGA_MeleeAttack, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_UGA_MeleeAttack_NoRegister) \
	DECLARE_SERIALIZER(UGA_MeleeAttack)


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGA_MeleeAttack(UGA_MeleeAttack&&) = delete; \
	UGA_MeleeAttack(const UGA_MeleeAttack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_MeleeAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_MeleeAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_MeleeAttack) \
	NO_API virtual ~UGA_MeleeAttack();


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h_12_PROLOG
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGA_MeleeAttack;

// ********** End Class UGA_MeleeAttack ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_MeleeAttack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
