// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Tools/MechToolMagnet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechToolMagnet() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechToolMagnet_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechToolMagnet();
	MECHBOT_API UClass* Z_Construct_UClass_AMechTool();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechToolMagnet::StaticRegisterNativesAMechToolMagnet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechToolMagnet);
	UClass* Z_Construct_UClass_AMechToolMagnet_NoRegister()
	{
		return AMechToolMagnet::StaticClass();
	}
	struct Z_Construct_UClass_AMechToolMagnet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechToolMagnet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMechTool,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechToolMagnet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utilities/Tools/MechToolMagnet.h" },
		{ "ModuleRelativePath", "Public/Utilities/Tools/MechToolMagnet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechToolMagnet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechToolMagnet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechToolMagnet_Statics::ClassParams = {
		&AMechToolMagnet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMechToolMagnet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechToolMagnet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechToolMagnet()
	{
		if (!Z_Registration_Info_UClass_AMechToolMagnet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechToolMagnet.OuterSingleton, Z_Construct_UClass_AMechToolMagnet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechToolMagnet.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechToolMagnet>()
	{
		return AMechToolMagnet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechToolMagnet);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolMagnet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolMagnet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechToolMagnet, AMechToolMagnet::StaticClass, TEXT("AMechToolMagnet"), &Z_Registration_Info_UClass_AMechToolMagnet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechToolMagnet), 2368135815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolMagnet_h_3877442598(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolMagnet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolMagnet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
