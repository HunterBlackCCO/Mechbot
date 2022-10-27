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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMechSaveData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMechSaveData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMechSaveData_Statics::ClassParams = {
		&UMechSaveData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_UMechSaveData, UMechSaveData::StaticClass, TEXT("UMechSaveData"), &Z_Registration_Info_UClass_UMechSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMechSaveData), 1627184674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechSaveData_h_3413074536(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechSaveData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_SaveData_MechSaveData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
