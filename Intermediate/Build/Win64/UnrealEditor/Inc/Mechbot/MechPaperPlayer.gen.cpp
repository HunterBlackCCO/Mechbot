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
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature();
	MECHBOT_API UClass* Z_Construct_UClass_AMechTool_NoRegister();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnLoad__DelegateSignature();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPaperPlayer_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPaperPlayer();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPaperDroid();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
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
	struct Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics
	{
		struct _Script_Mechbot_eventOnWeaponAdded_Parms
		{
			AMechWeapon* NewWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Mechbot_eventOnWeaponAdded_Parms, NewWeapon), Z_Construct_UClass_AMechWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::NewProp_NewWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnWeaponAdded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::_Script_Mechbot_eventOnWeaponAdded_Parms), Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics
	{
		struct _Script_Mechbot_eventOnToolAdded_Parms
		{
			AMechTool* NewTool;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::NewProp_NewTool = { "NewTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Mechbot_eventOnToolAdded_Parms, NewTool), Z_Construct_UClass_AMechTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::NewProp_NewTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnToolAdded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::_Script_Mechbot_eventOnToolAdded_Parms), Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_Mechbot_OnLoad__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnLoad__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnLoad__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnLoad__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execSaveOnWin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveOnWin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execActivateEquippedWeaponSpecial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateEquippedWeaponSpecial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execActivateEquippedWeaponMain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateEquippedWeaponMain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execSwapEquippedWeapon)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_WeaponSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapEquippedWeapon(Z_Param_WeaponSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execAddWeapon)
	{
		P_GET_OBJECT(AMechWeapon,Z_Param_Weapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWeapon(Z_Param_Weapon);
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
	DEFINE_FUNCTION(AMechPaperPlayer::execHasAnyWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyWeapons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execGetEquippedWeaponSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetEquippedWeaponSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execGetEquippedWeaponCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEquippedWeaponCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechPaperPlayer::execGetEquippedWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const AMechWeapon**)Z_Param__Result=P_THIS->GetEquippedWeapon();
		P_NATIVE_END;
	}
	void AMechPaperPlayer::StaticRegisterNativesAMechPaperPlayer()
	{
		UClass* Class = AMechPaperPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateEquippedWeaponMain", &AMechPaperPlayer::execActivateEquippedWeaponMain },
			{ "ActivateEquippedWeaponSpecial", &AMechPaperPlayer::execActivateEquippedWeaponSpecial },
			{ "AddWeapon", &AMechPaperPlayer::execAddWeapon },
			{ "GetEquippedWeapon", &AMechPaperPlayer::execGetEquippedWeapon },
			{ "GetEquippedWeaponCooldown", &AMechPaperPlayer::execGetEquippedWeaponCooldown },
			{ "GetEquippedWeaponSlot", &AMechPaperPlayer::execGetEquippedWeaponSlot },
			{ "GetPercentEnergy", &AMechPaperPlayer::execGetPercentEnergy },
			{ "HasAnyWeapons", &AMechPaperPlayer::execHasAnyWeapons },
			{ "RegainEnergy", &AMechPaperPlayer::execRegainEnergy },
			{ "SaveOnWin", &AMechPaperPlayer::execSaveOnWin },
			{ "SwapEquippedWeapon", &AMechPaperPlayer::execSwapEquippedWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics
	{
		struct MechPaperPlayer_eventActivateEquippedWeaponMain_Parms
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
	void Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MechPaperPlayer_eventActivateEquippedWeaponMain_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MechPaperPlayer_eventActivateEquippedWeaponMain_Parms), &Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "ActivateEquippedWeaponMain", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::MechPaperPlayer_eventActivateEquippedWeaponMain_Parms), Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain_Statics::Function_MetaDataParams)) };
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
		struct MechPaperPlayer_eventActivateEquippedWeaponSpecial_Parms
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
	void Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MechPaperPlayer_eventActivateEquippedWeaponSpecial_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MechPaperPlayer_eventActivateEquippedWeaponSpecial_Parms), &Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "ActivateEquippedWeaponSpecial", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::MechPaperPlayer_eventActivateEquippedWeaponSpecial_Parms), Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics
	{
		struct MechPaperPlayer_eventAddWeapon_Parms
		{
			AMechWeapon* Weapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperPlayer_eventAddWeapon_Parms, Weapon), Z_Construct_UClass_AMechWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "AddWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::MechPaperPlayer_eventAddWeapon_Parms), Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_AddWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_AddWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics
	{
		struct MechPaperPlayer_eventGetEquippedWeapon_Parms
		{
			const AMechWeapon* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperPlayer_eventGetEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_AMechWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "GetEquippedWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::MechPaperPlayer_eventGetEquippedWeapon_Parms), Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics
	{
		struct MechPaperPlayer_eventGetEquippedWeaponCooldown_Parms
		{
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperPlayer_eventGetEquippedWeaponCooldown_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "GetEquippedWeaponCooldown", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::MechPaperPlayer_eventGetEquippedWeaponCooldown_Parms), Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics
	{
		struct MechPaperPlayer_eventGetEquippedWeaponSlot_Parms
		{
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperPlayer_eventGetEquippedWeaponSlot_Parms, ReturnValue), nullptr, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "GetEquippedWeaponSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::MechPaperPlayer_eventGetEquippedWeaponSlot_Parms), Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics
	{
		struct MechPaperPlayer_eventHasAnyWeapons_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MechPaperPlayer_eventHasAnyWeapons_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MechPaperPlayer_eventHasAnyWeapons_Parms), &Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "HasAnyWeapons", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::MechPaperPlayer_eventHasAnyWeapons_Parms), Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AMechPaperPlayer_SaveOnWin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_SaveOnWin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_SaveOnWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "SaveOnWin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_SaveOnWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_SaveOnWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_SaveOnWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_SaveOnWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics
	{
		struct MechPaperPlayer_eventSwapEquippedWeapon_Parms
		{
			uint8 WeaponSlot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSlot_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::NewProp_WeaponSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechPaperPlayer_eventSwapEquippedWeapon_Parms, WeaponSlot), nullptr, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::NewProp_WeaponSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::NewProp_WeaponSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::NewProp_WeaponSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player|Weapon" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechPaperPlayer, nullptr, "SwapEquippedWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::MechPaperPlayer_eventSwapEquippedWeapon_Parms), Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletSpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnergyUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnergyUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponEquipped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnToolEquipped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToolEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnToolAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToolAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRevive_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRevive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoad_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoad;
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
		{ &Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponMain, "ActivateEquippedWeaponMain" }, // 1968369089
		{ &Z_Construct_UFunction_AMechPaperPlayer_ActivateEquippedWeaponSpecial, "ActivateEquippedWeaponSpecial" }, // 3985182560
		{ &Z_Construct_UFunction_AMechPaperPlayer_AddWeapon, "AddWeapon" }, // 1776587104
		{ &Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeapon, "GetEquippedWeapon" }, // 2293383650
		{ &Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponCooldown, "GetEquippedWeaponCooldown" }, // 1014335720
		{ &Z_Construct_UFunction_AMechPaperPlayer_GetEquippedWeaponSlot, "GetEquippedWeaponSlot" }, // 701915925
		{ &Z_Construct_UFunction_AMechPaperPlayer_GetPercentEnergy, "GetPercentEnergy" }, // 1113353819
		{ &Z_Construct_UFunction_AMechPaperPlayer_HasAnyWeapons, "HasAnyWeapons" }, // 3859558821
		{ &Z_Construct_UFunction_AMechPaperPlayer_RegainEnergy, "RegainEnergy" }, // 682813910
		{ &Z_Construct_UFunction_AMechPaperPlayer_SaveOnWin, "SaveOnWin" }, // 2834443641
		{ &Z_Construct_UFunction_AMechPaperPlayer_SwapEquippedWeapon, "SwapEquippedWeapon" }, // 899369474
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_BulletSpawnLocation_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "// Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_BulletSpawnLocation = { "BulletSpawnLocation", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, BulletSpawnLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_BulletSpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_BulletSpawnLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated_MetaData[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated = { "OnEnergyUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnEnergyUpdated), Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated_MetaData)) }; // 1756767069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped = { "OnWeaponEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnWeaponEquipped), Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped_MetaData)) }; // 2001415926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponAdded = { "OnWeaponAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnWeaponAdded), Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponAdded_MetaData)) }; // 1330179969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped = { "OnToolEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnToolEquipped), Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped_MetaData)) }; // 1005488590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolAdded = { "OnToolAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnToolAdded), Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolAdded_MetaData)) }; // 4084457880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive = { "OnRevive", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnRevive), Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive_MetaData)) }; // 121511518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnLoad = { "OnLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, OnLoad), Z_Construct_UDelegateFunction_Mechbot_OnLoad__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnLoad_MetaData)) }; // 2143716882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "MechPaperPlayer" },
		{ "ClampMin", "1" },
		{ "Comment", "// Config variables\n" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
		{ "ToolTip", "Config variables" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, MaxEnergy), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_MaxEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyRate_MetaData[] = {
		{ "Category", "MechPaperPlayer" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyRate = { "RechargeEnergyRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, RechargeEnergyRate), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyTimer_MetaData[] = {
		{ "Category", "MechPaperPlayer" },
		{ "ModuleRelativePath", "Public/Droids/MechPaperPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyTimer = { "RechargeEnergyTimer", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechPaperPlayer, RechargeEnergyTimer), METADATA_PARAMS(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_RechargeEnergyTimer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechPaperPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_BulletSpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnEnergyUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnWeaponAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnToolAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnRevive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechPaperPlayer_Statics::NewProp_OnLoad,
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
		{ Z_Construct_UClass_AMechPaperPlayer, AMechPaperPlayer::StaticClass, TEXT("AMechPaperPlayer"), &Z_Registration_Info_UClass_AMechPaperPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechPaperPlayer), 3121024587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_1122774721(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
