// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Abilities/GA_AttackBase.h"

#ifdef CH2_GA_AttackBase_generated_h
#error "GA_AttackBase.generated.h already included, missing '#pragma once' in GA_AttackBase.h"
#endif
#define CH2_GA_AttackBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayEventData;

// ********** Begin Class UGA_AttackBase ***********************************************************
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMontageCancelled); \
	DECLARE_FUNCTION(execOnMontageCompleted); \
	DECLARE_FUNCTION(execOnDamageGameplayEvent);


CH2_API UClass* Z_Construct_UClass_UGA_AttackBase_NoRegister();

#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_AttackBase(); \
	friend struct Z_Construct_UClass_UGA_AttackBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_UGA_AttackBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGA_AttackBase, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_UGA_AttackBase_NoRegister) \
	DECLARE_SERIALIZER(UGA_AttackBase)


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGA_AttackBase(UGA_AttackBase&&) = delete; \
	UGA_AttackBase(const UGA_AttackBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_AttackBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_AttackBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGA_AttackBase) \
	NO_API virtual ~UGA_AttackBase();


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h_12_PROLOG
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGA_AttackBase;

// ********** End Class UGA_AttackBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_AttackBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
