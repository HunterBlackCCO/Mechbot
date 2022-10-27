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
	void AMechUtility::StaticRegisterNativesAMechUtility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechUtility);
	UClass* Z_Construct_UClass_AMechUtility_NoRegister()
	{
		return AMechUtility::StaticClass();
	}
	struct Z_Construct_UClass_AMechUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/MechUtility.h" },
		{ "ModuleRelativePath", "Public/Utilities/MechUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechUtility_Statics::ClassParams = {
		&AMechUtility::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_AMechUtility, AMechUtility::StaticClass, TEXT("AMechUtility"), &Z_Registration_Info_UClass_AMechUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechUtility), 2834411095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_5170394(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
