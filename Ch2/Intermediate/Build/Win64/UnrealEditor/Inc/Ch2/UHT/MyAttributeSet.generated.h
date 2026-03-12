// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/MyAttributeSet.h"

#ifdef CH2_MyAttributeSet_generated_h
#error "MyAttributeSet.generated.h already included, missing '#pragma once' in MyAttributeSet.h"
#endif
#define CH2_MyAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAttributeData;

// ********** Begin Class UMyAttributeSet **********************************************************
#define FID_Ch2_Source_Ch2_Public_GAS_MyAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Defense); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


CH2_API UClass* Z_Construct_UClass_UMyAttributeSet_NoRegister();

#define FID_Ch2_Source_Ch2_Public_GAS_MyAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAttributeSet(); \
	friend struct Z_Construct_UClass_UMyAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH2_API UClass* Z_Construct_UClass_UMyAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ch2"), Z_Construct_UClass_UMyAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UMyAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Stamina, \
		MaxStamina, \
		Defense, \
		NETFIELD_REP_END=Defense	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UMyAttributeSet) \
public:


#define FID_Ch2_Source_Ch2_Public_GAS_MyAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyAttributeSet(UMyAttributeSet&&) = delete; \
	UMyAttributeSet(const UMyAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyAttributeSet) \
	NO_API virtual ~UMyAttributeSet();


#define FID_Ch2_Source_Ch2_Public_GAS_MyAttributeSet_h_18_PROLOG
#define FID_Ch2_Source_Ch2_Public_GAS_MyAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ch2_Source_Ch2_Public_GAS_MyAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_MyAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_Ch2_Source_Ch2_Public_GAS_MyAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyAttributeSet;

// ********** End Class UMyAttributeSet ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ch2_Source_Ch2_Public_GAS_MyAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
