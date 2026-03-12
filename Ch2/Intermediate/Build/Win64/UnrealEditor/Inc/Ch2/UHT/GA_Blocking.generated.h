// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Abilities/GA_Blocking.h"

#ifdef CH2_GA_Blocking_generated_h
#error "GA_Blocking.generated.h already included, missing '#pragma once' in GA_Blocking.h"
#endif
#define CH2_GA_Blocking_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGA_Blocking *************************************************************
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReleaseBlock);


CH2_API UClass* Z_Construct_UClass_UGA_Blocking_NoRegister();

#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_Blocking(); \
	friend struct Z_Construct_UClass_UGA_Blocking_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_UGA_Blocking_NoRegister(); \
public: \
	DECLARE_CLASS2(UGA_Blocking, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_UGA_Blocking_NoRegister) \
	DECLARE_SERIALIZER(UGA_Blocking)


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGA_Blocking(UGA_Blocking&&) = delete; \
	UGA_Blocking(const UGA_Blocking&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_Blocking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_Blocking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGA_Blocking) \
	NO_API virtual ~UGA_Blocking();


#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h_13_PROLOG
#define FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h_16_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGA_Blocking;

// ********** End Class UGA_Blocking ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_GAS_Abilities_GA_Blocking_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
