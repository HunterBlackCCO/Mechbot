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
// End Cross Module References
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
			{ "CanUseSpecialAbility", &AMechUtility::execCanUseSpecialAbility },
			{ "GetSpecialEnergyCost", &AMechUtility::execGetSpecialEnergyCost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "Comment", "// This should be called in the Player class\n" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
		{ "ToolTip", "This should be called in the Player class" },
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialEnergyCost_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpecialEnergyCost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMechUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMechUtility_CanUseSpecialAbility, "CanUseSpecialAbility" }, // 3703698884
		{ &Z_Construct_UFunction_AMechUtility_GetSpecialEnergyCost, "GetSpecialEnergyCost" }, // 1749709856
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/MechUtility.h" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost_MetaData[] = {
		{ "Category", "MechUtility" },
		{ "Comment", "// The Energy cost to the player to use the Special Ability\n" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
		{ "ToolTip", "The Energy cost to the player to use the Special Ability" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost = { "SpecialEnergyCost", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechUtility, SpecialEnergyCost), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechUtility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechUtility_Statics::NewProp_SpecialEnergyCost,
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
		{ Z_Construct_UClass_AMechUtility, AMechUtility::StaticClass, TEXT("AMechUtility"), &Z_Registration_Info_UClass_AMechUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechUtility), 809588740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_3756557025(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
