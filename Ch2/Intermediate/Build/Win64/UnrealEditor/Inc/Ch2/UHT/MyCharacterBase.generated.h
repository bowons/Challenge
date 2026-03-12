// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCharacterBase.h"

#ifdef CH2_MyCharacterBase_generated_h
#error "MyCharacterBase.generated.h already included, missing '#pragma once' in MyCharacterBase.h"
#endif
#define CH2_MyCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyCharacterBase *********************************************************
#define FID_Ch2_Source_Ch2_Public_MyCharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth);


CH2_API UClass* Z_Construct_UClass_AMyCharacterBase_NoRegister();

#define FID_Ch2_Source_Ch2_Public_MyCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacterBase(); \
	friend struct Z_Construct_UClass_AMyCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_AMyCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_AMyCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(AMyCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AMyCharacterBase*>(this); }


#define FID_Ch2_Source_Ch2_Public_MyCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyCharacterBase(AMyCharacterBase&&) = delete; \
	AMyCharacterBase(const AMyCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacterBase) \
	NO_API virtual ~AMyCharacterBase();


#define FID_Ch2_Source_Ch2_Public_MyCharacterBase_h_15_PROLOG
#define FID_Ch2_Source_Ch2_Public_MyCharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_MyCharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_MyCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_MyCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyCharacterBase;

// ********** End Class AMyCharacterBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_MyCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
