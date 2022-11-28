// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/MechGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechGameInstance() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_UMechGameInstance_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_UMechGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	DEFINE_FUNCTION(UMechGameInstance::execStartDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMechGameInstance::execSetLives)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewLivesCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLives(Z_Param_NewLivesCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMechGameInstance::execGetLifeCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetLifeCount();
		P_NATIVE_END;
	}
	void UMechGameInstance::StaticRegisterNativesUMechGameInstance()
	{
		UClass* Class = UMechGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLifeCount", &UMechGameInstance::execGetLifeCount },
			{ "SetLives", &UMechGameInstance::execSetLives },
			{ "StartDeath", &UMechGameInstance::execStartDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics
	{
		struct MechGameInstance_eventGetLifeCount_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechGameInstance_eventGetLifeCount_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "MechDroid|Player" },
		{ "ModuleRelativePath", "Public/MechGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMechGameInstance, nullptr, "GetLifeCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::MechGameInstance_eventGetLifeCount_Parms), Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMechGameInstance_GetLifeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMechGameInstance_GetLifeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMechGameInstance_SetLives_Statics
	{
		struct MechGameInstance_eventSetLives_Parms
		{
			uint8 NewLivesCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLivesCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewLivesCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::NewProp_NewLivesCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::NewProp_NewLivesCount = { "NewLivesCount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechGameInstance_eventSetLives_Parms, NewLivesCount), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::NewProp_NewLivesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::NewProp_NewLivesCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::NewProp_NewLivesCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MechGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMechGameInstance, nullptr, "SetLives", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::MechGameInstance_eventSetLives_Parms), Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMechGameInstance_SetLives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMechGameInstance_SetLives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMechGameInstance_StartDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMechGameInstance_StartDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MechGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMechGameInstance_StartDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMechGameInstance, nullptr, "StartDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMechGameInstance_StartDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMechGameInstance_StartDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMechGameInstance_StartDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMechGameInstance_StartDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMechGameInstance);
	UClass* Z_Construct_UClass_UMechGameInstance_NoRegister()
	{
		return UMechGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMechGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMechGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMechGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMechGameInstance_GetLifeCount, "GetLifeCount" }, // 1496861522
		{ &Z_Construct_UFunction_UMechGameInstance_SetLives, "SetLives" }, // 2757039598
		{ &Z_Construct_UFunction_UMechGameInstance_StartDeath, "StartDeath" }, // 1086134395
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMechGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MechGameInstance.h" },
		{ "ModuleRelativePath", "Public/MechGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMechGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMechGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMechGameInstance_Statics::ClassParams = {
		&UMechGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMechGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMechGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMechGameInstance()
	{
		if (!Z_Registration_Info_UClass_UMechGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMechGameInstance.OuterSingleton, Z_Construct_UClass_UMechGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMechGameInstance.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<UMechGameInstance>()
	{
		return UMechGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMechGameInstance);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMechGameInstance, UMechGameInstance::StaticClass, TEXT("UMechGameInstance"), &Z_Registration_Info_UClass_UMechGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMechGameInstance), 2674392956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_3147200360(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
