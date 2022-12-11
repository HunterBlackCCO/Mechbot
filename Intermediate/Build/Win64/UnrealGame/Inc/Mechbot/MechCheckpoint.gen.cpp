// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/SaveData/MechCheckpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechCheckpoint() {}
// Cross Module References
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnCreated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnSave__DelegateSignature();
	MECHBOT_API UClass* Z_Construct_UClass_AMechCheckpoint_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechCheckpoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPaperPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Mechbot_OnCreated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/SaveData/MechCheckpoint.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnCreated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Mechbot_OnSave__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Mechbot_OnSave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData/MechCheckpoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Mechbot_OnSave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Mechbot, nullptr, "OnSave__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Mechbot_OnSave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mechbot_OnSave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Mechbot_OnSave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mechbot_OnSave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMechCheckpoint::execSaveProgress)
	{
		P_GET_OBJECT(AMechPaperPlayer,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveProgress(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechCheckpoint::execIsCheckpointActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCheckpointActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMechCheckpoint::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	void AMechCheckpoint::StaticRegisterNativesAMechCheckpoint()
	{
		UClass* Class = AMechCheckpoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetId", &AMechCheckpoint::execGetId },
			{ "IsCheckpointActive", &AMechCheckpoint::execIsCheckpointActive },
			{ "SaveProgress", &AMechCheckpoint::execSaveProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMechCheckpoint_GetId_Statics
	{
		struct MechCheckpoint_eventGetId_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechCheckpoint_eventGetId_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData/MechCheckpoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechCheckpoint, nullptr, "GetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::MechCheckpoint_eventGetId_Parms), Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechCheckpoint_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechCheckpoint_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics
	{
		struct MechCheckpoint_eventIsCheckpointActive_Parms
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
	void Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MechCheckpoint_eventIsCheckpointActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MechCheckpoint_eventIsCheckpointActive_Parms), &Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData/MechCheckpoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechCheckpoint, nullptr, "IsCheckpointActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::MechCheckpoint_eventIsCheckpointActive_Parms), Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics
	{
		struct MechCheckpoint_eventSaveProgress_Parms
		{
			AMechPaperPlayer* Player;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechCheckpoint_eventSaveProgress_Parms, Player), Z_Construct_UClass_AMechPaperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData/MechCheckpoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechCheckpoint, nullptr, "SaveProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::MechCheckpoint_eventSaveProgress_Parms), Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechCheckpoint_SaveProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechCheckpoint_SaveProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechCheckpoint);
	UClass* Z_Construct_UClass_AMechCheckpoint_NoRegister()
	{
		return AMechCheckpoint::StaticClass();
	}
	struct Z_Construct_UClass_AMechCheckpoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSave_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivationSFX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechCheckpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMechCheckpoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMechCheckpoint_GetId, "GetId" }, // 869833740
		{ &Z_Construct_UFunction_AMechCheckpoint_IsCheckpointActive, "IsCheckpointActive" }, // 1823975114
		{ &Z_Construct_UFunction_AMechCheckpoint_SaveProgress, "SaveProgress" }, // 3876113759
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechCheckpoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveData/MechCheckpoint.h" },
		{ "ModuleRelativePath", "Public/SaveData/MechCheckpoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnCreated_MetaData[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/SaveData/MechCheckpoint.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnCreated = { "OnCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechCheckpoint, OnCreated), Z_Construct_UDelegateFunction_Mechbot_OnCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnCreated_MetaData)) }; // 2486235216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveData/MechCheckpoint.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnSave = { "OnSave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechCheckpoint, OnSave), Z_Construct_UDelegateFunction_Mechbot_OnSave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnSave_MetaData)) }; // 620110364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_ActivationSFX_MetaData[] = {
		{ "Category", "MechCheckpoint" },
		{ "Comment", "// Object Configuration Settings\n" },
		{ "ModuleRelativePath", "Public/SaveData/MechCheckpoint.h" },
		{ "ToolTip", "Object Configuration Settings" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_ActivationSFX = { "ActivationSFX", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechCheckpoint, ActivationSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_ActivationSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_ActivationSFX_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechCheckpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_OnSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechCheckpoint_Statics::NewProp_ActivationSFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechCheckpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechCheckpoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechCheckpoint_Statics::ClassParams = {
		&AMechCheckpoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMechCheckpoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechCheckpoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechCheckpoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechCheckpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechCheckpoint()
	{
		if (!Z_Registration_Info_UClass_AMechCheckpoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechCheckpoint.OuterSingleton, Z_Construct_UClass_AMechCheckpoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechCheckpoint.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechCheckpoint>()
	{
		return AMechCheckpoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechCheckpoint);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechCheckpoint, AMechCheckpoint::StaticClass, TEXT("AMechCheckpoint"), &Z_Registration_Info_UClass_AMechCheckpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechCheckpoint), 3578115491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_1755000148(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
