// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Droids/MechPaperDroid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechPaperDroid() {}
// Cross Module References
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPaperDroid_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPaperDroid();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics
	{
		struct _Script_Mechbot_eventOnHealthUpdated_Parms
		{
			float NewPercent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::NewProp_NewPercent = { "NewPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Mechbot_eventOnHealthUpdated_Parms, NewPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::NewProp_NewPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnHealthUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::_Script_Mechbot_eventOnHealthUpdated_Parms), Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMechPaperDroid::execHeal)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Heal(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperDroid::execTakeDamage)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperDroid::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperDroid::execGetPercentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentHealth();
		P_NATIVE_END;
	}
	void AMechPaperDroid::StaticRegisterNativesAMechPaperDroid()
	{
		UClass* Class = AMechPaperDroid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPercentHealth", &AMechPaperDroid::execGetPercentHealth },
			{ "Heal", &AMechPaperDroid::execHeal },
			{ "IsAlive", &AMechPaperDroid::execIsAlive },
			{ "TakeDamage", &AMechPaperDroid::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics
	{
		struct MechPaperDroid_eventGetPercentHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperDroid_eventGetPercentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Health" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperDroid, nullptr, "GetPercentHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::MechPaperDroid_eventGetPercentHealth_Parms), Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperDroid_Heal_Statics
	{
		struct MechPaperDroid_eventHeal_Parms
		{
			uint8 Amount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperDroid_eventHeal_Parms, Amount), nullptr, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::NewProp_Amount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Health" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperDroid, nullptr, "Heal", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::MechPaperDroid_eventHeal_Parms), Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperDroid_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperDroid_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics
	{
		struct MechPaperDroid_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MechPaperDroid_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MechPaperDroid_eventIsAlive_Parms), &Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Health" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperDroid, nullptr, "IsAlive", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::MechPaperDroid_eventIsAlive_Parms), Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperDroid_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperDroid_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics
	{
		struct MechPaperDroid_eventTakeDamage_Parms
		{
			uint8 Amount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperDroid_eventTakeDamage_Parms, Amount), nullptr, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::NewProp_Amount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Health" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperDroid, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::MechPaperDroid_eventTakeDamage_Parms), Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperDroid_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperDroid_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechPaperDroid);
	UClass* Z_Construct_UClass_AMechPaperDroid_NoRegister()
	{
		return AMechPaperDroid::StaticClass();
	}
	struct Z_Construct_UClass_AMechPaperDroid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BaseDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechPaperDroid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMechPaperDroid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMechPaperDroid_GetPercentHealth, "GetPercentHealth" }, // 162819178
		{ &Z_Construct_UFunction_AMechPaperDroid_Heal, "Heal" }, // 313544569
		{ &Z_Construct_UFunction_AMechPaperDroid_IsAlive, "IsAlive" }, // 3563773875
		{ &Z_Construct_UFunction_AMechPaperDroid_TakeDamage, "TakeDamage" }, // 3739053575
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperDroid_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Droids/MechPaperDroid.h" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnHealthUpdated_MetaData[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnHealthUpdated = { "OnHealthUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperDroid, OnHealthUpdated), Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnHealthUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnHealthUpdated_MetaData)) }; // 3517667855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnDeath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperDroid, OnDeath), Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnDeath_MetaData)) }; // 3611224353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "MechDroid" },
		{ "ClampMin", "1" },
		{ "Comment", "// Setup Specifiers\n" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
		{ "ToolTip", "Setup Specifiers" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperDroid, MaxHealth), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "MechDroid" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperDroid.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperDroid, BaseDamage), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_BaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_BaseDamage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechPaperDroid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnHealthUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_OnDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperDroid_Statics::NewProp_BaseDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechPaperDroid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechPaperDroid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechPaperDroid_Statics::ClassParams = {
		&AMechPaperDroid::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMechPaperDroid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperDroid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechPaperDroid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperDroid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechPaperDroid()
	{
		if (!Z_Registration_Info_UClass_AMechPaperDroid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechPaperDroid.OuterSingleton, Z_Construct_UClass_AMechPaperDroid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechPaperDroid.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechPaperDroid>()
	{
		return AMechPaperDroid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechPaperDroid);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechPaperDroid, AMechPaperDroid::StaticClass, TEXT("AMechPaperDroid"), &Z_Registration_Info_UClass_AMechPaperDroid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechPaperDroid), 3861252850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_1423310805(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
