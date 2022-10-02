// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/MechbotGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechbotGameModeBase() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechbotGameModeBase_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechbotGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechbotGameModeBase::StaticRegisterNativesAMechbotGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechbotGameModeBase);
	UClass* Z_Construct_UClass_AMechbotGameModeBase_NoRegister()
	{
		return AMechbotGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMechbotGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechbotGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechbotGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MechbotGameModeBase.h" },
		{ "ModuleRelativePath", "MechbotGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechbotGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechbotGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechbotGameModeBase_Statics::ClassParams = {
		&AMechbotGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMechbotGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechbotGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechbotGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AMechbotGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechbotGameModeBase.OuterSingleton, Z_Construct_UClass_AMechbotGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechbotGameModeBase.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechbotGameModeBase>()
	{
		return AMechbotGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechbotGameModeBase);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_MechbotGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_MechbotGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechbotGameModeBase, AMechbotGameModeBase::StaticClass, TEXT("AMechbotGameModeBase"), &Z_Registration_Info_UClass_AMechbotGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechbotGameModeBase), 3843717104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_MechbotGameModeBase_h_74315167(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_MechbotGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_MechbotGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
