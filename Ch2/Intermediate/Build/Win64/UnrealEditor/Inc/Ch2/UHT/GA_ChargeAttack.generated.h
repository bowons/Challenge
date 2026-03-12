// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Abilities/GA_ChargeAttack.h"

#ifdef CH2_GA_ChargeAttack_generated_h
#error "GA_ChargeAttack.generated.h already included, missing '#pragma once' in GA_ChargeAttack.h"
#endif
#define CH2_GA_ChargeAttack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayEventData;

// ********** Begin Class UGA_ChargeAttack *********************************************************
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDamageGameplayEvent); \
	DECLARE_FUNCTION(execOnMontageCancelled); \
	DECLARE_FUNCTION(execOnMontageCompleted);


CH2_API UClass* Z_Construct_UClass_UGA_ChargeAttack_NoRegister();

#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_ChargeAttack(); \
	friend struct Z_Construct_UClass_UGA_ChargeAttack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_UGA_ChargeAttack_NoRegister(); \
public: \
	DECLARE_CLASS2(UGA_ChargeAttack, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_UGA_ChargeAttack_NoRegister) \
	DECLARE_SERIALIZER(UGA_ChargeAttack)


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGA_ChargeAttack(UGA_ChargeAttack&&) = delete; \
	UGA_ChargeAttack(const UGA_ChargeAttack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_ChargeAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_ChargeAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_ChargeAttack) \
	NO_API virtual ~UGA_ChargeAttack();


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h_12_PROLOG
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h_15_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGA_ChargeAttack;

// ********** End Class UGA_ChargeAttack ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_ChargeAttack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
