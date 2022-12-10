// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/SaveData/MechSaveData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechSaveData() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_UMechSaveData_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_UMechSaveData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
	MECHBOT_API UClass* Z_Construct_UClass_AMechCheckpoint_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechTool_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeapon_NoRegister();
// End Cross Module References
	void UMechSaveData::StaticRegisterNativesUMechSaveData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMechSaveData);
	UClass* Z_Construct_UClass_UMechSaveData_NoRegister()
	{
		return UMechSaveData::StaticClass();
	}
	struct Z_Construct_UClass_UMechSaveData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Lives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCheckpoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCheckpoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObtainedTools_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObtainedTools_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObtainedTools;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObtainedWeapons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObtainedWeapons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObtainedWeapons;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMechSaveData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMechSaveData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveData/MechSaveData.h" },
		{ "ModuleRelativePath", "Public/SaveData/MechSaveData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMechSaveData_Statics::NewProp_Lives_MetaData[] = {
		{ "Category", "MechSaveData" },
		{ "Comment", "// Variables to save\n" },
		{ "ModuleRelativePath", "Public/SaveData/MechSaveData.h" },
		{ "ToolTip", "Variables to save" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMechSaveData_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMechSaveData, Lives), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMechSaveData_Statics::NewProp_Lives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMechSaveData_Statics::NewProp_Lives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMechSaveData_Statics::NewProp_ActiveCheckpoint_MetaData[] = {
		{ "Category", "MechSaveData" },
		{ "ModuleRelativePath", "Public/SaveData/MechSaveData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMechSaveData_Statics::NewProp_ActiveCheckpoint = { "ActiveCheckpoint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMechSaveData, ActiveCheckpoint), Z_Construct_UClass_AMechCheckpoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMechSaveData_Statics::NewProp_ActiveCheckpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMechSaveData_Statics::NewProp_ActiveCheckpoint_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedTools_Inner = { "ObtainedTools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMechTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedTools_MetaData[] = {
		{ "Category", "MechSaveData" },
		{ "Comment", "// Utilities\n" },
		{ "ModuleRelativePath", "Public/SaveData/MechSaveData.h" },
		{ "ToolTip", "Utilities" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedTools = { "ObtainedTools", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMechSaveData, ObtainedTools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedTools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedTools_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedWeapons_Inner = { "ObtainedWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMechWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedWeapons_MetaData[] = {
		{ "Category", "MechSaveData" },
		{ "ModuleRelativePath", "Public/SaveData/MechSaveData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedWeapons = { "ObtainedWeapons", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMechSaveData, ObtainedWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedWeapons_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMechSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMechSaveData_Statics::NewProp_Lives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMechSaveData_Statics::NewProp_ActiveCheckpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedTools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedTools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedWeapons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMechSaveData_Statics::NewProp_ObtainedWeapons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMechSaveData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMechSaveData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMechSaveData_Statics::ClassParams = {
		&UMechSaveData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMechSaveData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMechSaveData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMechSaveData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMechSaveData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMechSaveData()
	{
		if (!Z_Registration_Info_UClass_UMechSaveData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMechSaveData.OuterSingleton, Z_Construct_UClass_UMechSaveData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMechSaveData.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<UMechSaveData>()
	{
		return UMechSaveData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMechSaveData);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechSaveData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechSaveData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMechSaveData, UMechSaveData::StaticClass, TEXT("UMechSaveData"), &Z_Registration_Info_UClass_UMechSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMechSaveData), 533956455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechSaveData_h_3631333037(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechSaveData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechSaveData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
