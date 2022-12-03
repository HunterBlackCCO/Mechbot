// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Droids/MechPaperPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechPaperPlayer() {}
// Cross Module References
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature();
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeapon_NoRegister();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature();
	MECHBOT_API UClass* Z_Construct_UClass_AMechTool_NoRegister();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPaperPlayer_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPaperPlayer();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPaperDroid();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics
	{
		struct _Script_Mechbot_eventOnEnergyUpdated_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::NewProp_NewPercent = { "NewPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Mechbot_eventOnEnergyUpdated_Parms, NewPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::NewProp_NewPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnEnergyUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::_Script_Mechbot_eventOnEnergyUpdated_Parms), Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics
	{
		struct _Script_Mechbot_eventOnWeaponEquipped_Parms
		{
			AMechWeapon* EquippedWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Mechbot_eventOnWeaponEquipped_Parms, EquippedWeapon), Z_Construct_UClass_AMechWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::NewProp_EquippedWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnWeaponEquipped__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::_Script_Mechbot_eventOnWeaponEquipped_Parms), Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics
	{
		struct _Script_Mechbot_eventOnToolEquipped_Parms
		{
			AMechTool* EquippedWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Mechbot_eventOnToolEquipped_Parms, EquippedWeapon), Z_Construct_UClass_AMechTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::NewProp_EquippedWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnToolEquipped__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::_Script_Mechbot_eventOnToolEquipped_Parms), Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnRevive__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execActivateEquippedWeaponSpecial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateEquippedWeaponSpecial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execActivateEquippedWeaponMain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateEquippedWeaponMain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execRegainEnergy)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegainEnergy(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execGetPercentEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentEnergy();
		P_NATIVE_END;
	}
	void AMechPaperPlayer::StaticRegisterNativesAMechPaperPlayer()
	{
		UClass* Class = AMechPaperPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateEquippedWeaponMain", &AMechPaperPlayer::execActivateEquippedWeaponMain },
			{ "ActivateEquippedWeaponSpecial", &AMechPaperPlayer::execActivateEquippedWeaponSpecial },
			{ "GetPercentEnergy", &AMechPaperPlayer::execGetPercentEnergy },
			{ "RegainEnergy", &AMechPaperPlayer::execRegainEnergy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "ActivateEquippedWeaponMain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "ActivateEquippedWeaponSpecial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics
	{
		struct MechPaperPlayer_eventGetPercentEnergy_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperPlayer_eventGetPercentEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Energy" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "GetPercentEnergy", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::MechPaperPlayer_eventGetPercentEnergy_Parms), Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics
	{
		struct MechPaperPlayer_eventRegainEnergy_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperPlayer_eventRegainEnergy_Parms, Amount), nullptr, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::NewProp_Amount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Energy" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "RegainEnergy", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::MechPaperPlayer_eventRegainEnergy_Parms), Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechPaperPlayer);
	UClass* Z_Construct_UClass_AMechPaperPlayer_NoRegister()
	{
		return AMechPaperPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMechPaperPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnergyUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnergyUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponEquipped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnToolEquipped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToolEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRevive_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRevive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RechargeEnergyRate_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RechargeEnergyRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RechargeEnergyTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RechargeEnergyTimer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechPaperPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMechPaperDroid,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMechPaperPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain, "ActivateEquippedWeaponMain" }, // 823573731
		{ &Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial, "ActivateEquippedWeaponSpecial" }, // 4265576486
		{ &Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy, "GetPercentEnergy" }, // 1113353819
		{ &Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy, "RegainEnergy" }, // 682813910
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Droids/MechPaperPlayer.h" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated_MetaData[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated = { "OnEnergyUpdated", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnEnergyUpdated), Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated_MetaData)) }; // 1756767069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped = { "OnWeaponEquipped", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnWeaponEquipped), Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped_MetaData)) }; // 2001415926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped = { "OnToolEquipped", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnToolEquipped), Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped_MetaData)) }; // 1005488590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive = { "OnRevive", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnRevive), Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive_MetaData)) }; // 121511518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "MechPaperPlayer" },
		{ "ClampMin", "1" },
		{ "Comment", "// Blueprint Editable\n" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
		{ "ToolTip", "Blueprint Editable" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, MaxEnergy), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_MaxEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyRate_MetaData[] = {
		{ "Category", "MechPaperPlayer" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyRate = { "RechargeEnergyRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, RechargeEnergyRate), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyTimer_MetaData[] = {
		{ "Category", "MechPaperPlayer" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyTimer = { "RechargeEnergyTimer", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, RechargeEnergyTimer), METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyTimer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechPaperPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_MaxEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechPaperPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechPaperPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechPaperPlayer_Statics::ClassParams = {
		&AMechPaperPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMechPaperPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechPaperPlayer()
	{
		if (!Z_Registration_Info_UClass_AMechPaperPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechPaperPlayer.OuterSingleton, Z_Construct_UClass_AMechPaperPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechPaperPlayer.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechPaperPlayer>()
	{
		return AMechPaperPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechPaperPlayer);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechPaperPlayer, AMechPaperPlayer::StaticClass, TEXT("AMechPaperPlayer"), &Z_Registration_Info_UClass_AMechPaperPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechPaperPlayer), 2965727343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_242855535(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
