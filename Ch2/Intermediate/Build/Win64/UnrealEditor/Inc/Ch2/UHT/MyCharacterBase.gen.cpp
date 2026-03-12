// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCharacterBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyCharacterBase() {}

// ********** Begin Cross Module References ********************************************************
CH2_API UClass* Z_Construct_UClass_AMyCharacterBase();
CH2_API UClass* Z_Construct_UClass_AMyCharacterBase_NoRegister();
CH2_API UClass* Z_Construct_UClass_UMyAttributeSet_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ch2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyCharacterBase Function ApplyDamage ************************************
struct Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics
{
	struct MyCharacterBase_eventApplyDamage_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacterBase_eventApplyDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyCharacterBase, nullptr, "ApplyDamage", Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::MyCharacterBase_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::MyCharacterBase_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacterBase_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacterBase_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacterBase::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// ********** End Class AMyCharacterBase Function ApplyDamage **************************************

// ********** Begin Class AMyCharacterBase Function GetHealth **************************************
struct Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics
{
	struct MyCharacterBase_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacterBase_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyCharacterBase, nullptr, "GetHealth", Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::MyCharacterBase_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::MyCharacterBase_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacterBase_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacterBase_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacterBase::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// ********** End Class AMyCharacterBase Function GetHealth ****************************************

// ********** Begin Class AMyCharacterBase Function GetMaxHealth ***********************************
struct Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics
{
	struct MyCharacterBase_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacterBase_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyCharacterBase, nullptr, "GetMaxHealth", Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::MyCharacterBase_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::MyCharacterBase_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacterBase::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// ********** End Class AMyCharacterBase Function GetMaxHealth *************************************

// ********** Begin Class AMyCharacterBase Function GetMaxStamina **********************************
struct Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics
{
	struct MyCharacterBase_eventGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacterBase_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyCharacterBase, nullptr, "GetMaxStamina", Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::MyCharacterBase_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::MyCharacterBase_eventGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacterBase::execGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
	P_NATIVE_END;
}
// ********** End Class AMyCharacterBase Function GetMaxStamina ************************************

// ********** Begin Class AMyCharacterBase Function GetStamina *************************************
struct Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics
{
	struct MyCharacterBase_eventGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacterBase_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyCharacterBase, nullptr, "GetStamina", Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::MyCharacterBase_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::MyCharacterBase_eventGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacterBase_GetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacterBase_GetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacterBase::execGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStamina();
	P_NATIVE_END;
}
// ********** End Class AMyCharacterBase Function GetStamina ***************************************

// ********** Begin Class AMyCharacterBase *********************************************************
void AMyCharacterBase::StaticRegisterNativesAMyCharacterBase()
{
	UClass* Class = AMyCharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamage", &AMyCharacterBase::execApplyDamage },
		{ "GetHealth", &AMyCharacterBase::execGetHealth },
		{ "GetMaxHealth", &AMyCharacterBase::execGetMaxHealth },
		{ "GetMaxStamina", &AMyCharacterBase::execGetMaxStamina },
		{ "GetStamina", &AMyCharacterBase::execGetStamina },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyCharacterBase;
UClass* AMyCharacterBase::GetPrivateStaticClass()
{
	using TClass = AMyCharacterBase;
	if (!Z_Registration_Info_UClass_AMyCharacterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyCharacterBase"),
			Z_Registration_Info_UClass_AMyCharacterBase.InnerSingleton,
			StaticRegisterNativesAMyCharacterBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMyCharacterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyCharacterBase_NoRegister()
{
	return AMyCharacterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacterBase.h" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "MyCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "GAS|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\x9c\xec\x9e\x91 \xec\x8b\x9c \xeb\xb6\x80\xec\x97\xac\xed\x95\xa0 Abilities (Blueprint\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95)\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\x9c\xec\x9e\x91 \xec\x8b\x9c \xeb\xb6\x80\xec\x97\xac\xed\x95\xa0 Abilities (Blueprint\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveAbilities_MetaData[] = {
		{ "Category", "GAS|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8c\xa8\xec\x8b\x9c\xeb\xb8\x8c \xeb\xb6\x80\xec\x97\xac Abilites\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8c\xa8\xec\x8b\x9c\xeb\xb8\x8c \xeb\xb6\x80\xec\x97\xac Abilites" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Attack_MetaData[] = {
		{ "Category", "GAS|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Action (Blueprint\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95)\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action (Blueprint\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_HeavyAttack_MetaData[] = {
		{ "Category", "GAS|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Action (Blueprint\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95)\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action (Blueprint\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Block_MetaData[] = {
		{ "Category", "GAS|Input" },
		{ "ModuleRelativePath", "Public/MyCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PassiveAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveAbilities;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Attack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_HeavyAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Block;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacterBase_ApplyDamage, "ApplyDamage" }, // 3482138950
		{ &Z_Construct_UFunction_AMyCharacterBase_GetHealth, "GetHealth" }, // 3727956397
		{ &Z_Construct_UFunction_AMyCharacterBase_GetMaxHealth, "GetMaxHealth" }, // 846099289
		{ &Z_Construct_UFunction_AMyCharacterBase_GetMaxStamina, "GetMaxStamina" }, // 1439589842
		{ &Z_Construct_UFunction_AMyCharacterBase_GetStamina, "GetStamina" }, // 3601871723
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterBase, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterBase, AttributeSet), Z_Construct_UClass_UMyAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterBase, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterBase, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_DefaultAbilities_Inner = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterBase, DefaultAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbilities_MetaData), NewProp_DefaultAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_PassiveAbilities_Inner = { "PassiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_PassiveAbilities = { "PassiveAbilities", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterBase, PassiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveAbilities_MetaData), NewProp_PassiveAbilities_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_IA_Attack = { "IA_Attack", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterBase, IA_Attack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Attack_MetaData), NewProp_IA_Attack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_IA_HeavyAttack = { "IA_HeavyAttack", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterBase, IA_HeavyAttack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_HeavyAttack_MetaData), NewProp_IA_HeavyAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_IA_Block = { "IA_Block", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacterBase, IA_Block), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Block_MetaData), NewProp_IA_Block_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_DefaultAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_DefaultAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_PassiveAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_PassiveAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_IA_Attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_IA_HeavyAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacterBase_Statics::NewProp_IA_Block,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Ch2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyCharacterBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMyCharacterBase, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacterBase_Statics::ClassParams = {
	&AMyCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCharacterBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacterBase()
{
	if (!Z_Registration_Info_UClass_AMyCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacterBase.OuterSingleton, Z_Construct_UClass_AMyCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacterBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacterBase);
AMyCharacterBase::~AMyCharacterBase() {}
// ********** End Class AMyCharacterBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_MyCharacterBase_h__Script_Ch2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacterBase, AMyCharacterBase::StaticClass, TEXT("AMyCharacterBase"), &Z_Registration_Info_UClass_AMyCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacterBase), 2370551817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_MyCharacterBase_h__Script_Ch2_773347104(TEXT("/Script/Ch2"),
	Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_MyCharacterBase_h__Script_Ch2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ch2_Source_Ch2_Public_MyCharacterBase_h__Script_Ch2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
