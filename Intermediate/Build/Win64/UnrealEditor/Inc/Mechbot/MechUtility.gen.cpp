// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/MechUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechUtility() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechUtility_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechUtility();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMechUtility::execActivateSpecialAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateSpecialAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechUtility::execActivateMainAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateMainAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechUtility::execGiveToPlayer)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveToPlayer(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechUtility::execGetCooldownTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCooldownTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechUtility::execGetSpecialEnergyCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetSpecialEnergyCost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechUtility::execCanUseSpecialAbility)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_PlayerEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseSpecialAbility(Z_Param_PlayerEnergy);
		P_NATIVE_END;
	}
	void AMechUtility::StaticRegisterNativesAMechUtility()
	{
		UClass* Class = AMechUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateMainAbility", &AMechUtility::execActivateMainAbility },
			{ "ActivateSpecialAbility", &AMechUtility::execActivateSpecialAbility },
			{ "CanUseSpecialAbility", &AMechUtility::execCanUseSpecialAbility },
			{ "GetCooldownTimer", &AMechUtility::execGetCooldownTimer },
			{ "GetSpecialEnergyCost", &AMechUtility::execGetSpecialEnergyCost },
			{ "GiveToPlayer", &AMechUtility::execGiveToPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMechUtility_ActivateMainAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechUtility_ActivateMainAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechUtility_ActivateMainAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechUtility, nullptr, "ActivateMainAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechUtility_ActivateMainAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_ActivateMainAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechUtility_ActivateMainAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechUtility_ActivateMainAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechUtility_ActivateSpecialAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechUtility_ActivateSpecialAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechUtility_ActivateSpecialAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechUtility, nullptr, "ActivateSpecialAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechUtility_ActivateSpecialAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_ActivateSpecialAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechUtility_ActivateSpecialAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechUtility_ActivateSpecialAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics
	{
		struct MechUtility_eventCanUseSpecialAbility_Parms
		{
			uint8 PlayerEnergy;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerEnergy;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::NewProp_PlayerEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::NewProp_PlayerEnergy = { "PlayerEnergy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechUtility_eventCanUseSpecialAbility_Parms, PlayerEnergy), nullptr, METADATA_PARAMS(Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::NewProp_PlayerEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::NewProp_PlayerEnergy_MetaData)) };
	void Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MechUtility_eventCanUseSpecialAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MechUtility_eventCanUseSpecialAbility_Parms), &Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::NewProp_PlayerEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechUtility|Special" },
		{ "Comment", "// Public Read-only Getters - Should be called in the Player class\n" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
		{ "ToolTip", "Public Read-only Getters - Should be called in the Player class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechUtility, nullptr, "CanUseSpecialAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::MechUtility_eventCanUseSpecialAbility_Parms), Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics
	{
		struct MechUtility_eventGetCooldownTimer_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechUtility_eventGetCooldownTimer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechUtility" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechUtility, nullptr, "GetCooldownTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::MechUtility_eventGetCooldownTimer_Parms), Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechUtility_GetCooldownTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechUtility_GetCooldownTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics
	{
		struct MechUtility_eventGetSpecialEnergyCost_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechUtility_eventGetSpecialEnergyCost_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechUtility|Special" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechUtility, nullptr, "GetSpecialEnergyCost", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::MechUtility_eventGetSpecialEnergyCost_Parms), Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics
	{
		struct MechUtility_eventGiveToPlayer_Parms
		{
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechUtility_eventGiveToPlayer_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Functions\n" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechUtility, nullptr, "GiveToPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::MechUtility_eventGiveToPlayer_Parms), Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechUtility_GiveToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechUtility_GiveToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechUtility);
	UClass* Z_Construct_UClass_AMechUtility_NoRegister()
	{
		return AMechUtility::StaticClass();
	}
	struct Z_Construct_UClass_AMechUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaperSpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperSpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialEnergyCost_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpecialEnergyCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainActivationSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainActivationSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainActivationSFXPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MainActivationSFXPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialActivationSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialActivationSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialActivationSFXPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecialActivationSFXPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMechUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMechUtility_ActivateMainAbility, "ActivateMainAbility" }, // 1054316420
		{ &Z_Construct_UFunction_AMechUtility_ActivateSpecialAbility, "ActivateSpecialAbility" }, // 1903482694
		{ &Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility, "CanUseSpecialAbility" }, // 2282781035
		{ &Z_Construct_UFunction_AMechUtility_GetCooldownTimer, "GetCooldownTimer" }, // 53951284
		{ &Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost, "GetSpecialEnergyCost" }, // 1749709856
		{ &Z_Construct_UFunction_AMechUtility_GiveToPlayer, "GiveToPlayer" }, // 503149392
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/MechUtility.h" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_BaseComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "// Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_BaseComponent = { "BaseComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, BaseComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_BaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_BaseComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_PaperSpriteComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_PaperSpriteComponent = { "PaperSpriteComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, PaperSpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_PaperSpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_PaperSpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_CooldownTimer_MetaData[] = {
		{ "Category", "MechUtility" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Object Configuration Settings\n" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
		{ "ToolTip", "Object Configuration Settings" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_CooldownTimer = { "CooldownTimer", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, CooldownTimer), METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_CooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_CooldownTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost_MetaData[] = {
		{ "Category", "MechUtility" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost = { "SpecialEnergyCost", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, SpecialEnergyCost), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFX_MetaData[] = {
		{ "Category", "MechUtility|Sound" },
		{ "Comment", "// Sound FX Configuration Settings\n" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
		{ "ToolTip", "Sound FX Configuration Settings" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFX = { "MainActivationSFX", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, MainActivationSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFXPitch_MetaData[] = {
		{ "Category", "MechUtility|Sound" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFXPitch = { "MainActivationSFXPitch", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, MainActivationSFXPitch), METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFXPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFXPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFX_MetaData[] = {
		{ "Category", "MechUtility|Sound" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFX = { "SpecialActivationSFX", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, SpecialActivationSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFXPitch_MetaData[] = {
		{ "Category", "MechUtility|Sound" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFXPitch = { "SpecialActivationSFXPitch", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, SpecialActivationSFXPitch), METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFXPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFXPitch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechUtility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_BaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_PaperSpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_CooldownTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_MainActivationSFXPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialActivationSFXPitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechUtility_Statics::ClassParams = {
		&AMechUtility::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMechUtility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechUtility()
	{
		if (!Z_Registration_Info_UClass_AMechUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechUtility.OuterSingleton, Z_Construct_UClass_AMechUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechUtility.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechUtility>()
	{
		return AMechUtility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechUtility);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechUtility, AMechUtility::StaticClass, TEXT("AMechUtility"), &Z_Registration_Info_UClass_AMechUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechUtility), 2680740387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_209164439(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
