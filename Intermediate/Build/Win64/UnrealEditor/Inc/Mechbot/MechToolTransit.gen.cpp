// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Tools/MechToolTransit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechToolTransit() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechToolTransit_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechToolTransit();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechToolTransit::StaticRegisterNativesAMechToolTransit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechToolTransit);
	UClass* Z_Construct_UClass_AMechToolTransit_NoRegister()
	{
		return AMechToolTransit::StaticClass();
	}
	struct Z_Construct_UClass_AMechToolTransit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechToolTransit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechToolTransit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/Tools/MechToolTransit.h" },
		{ "ModuleRelativePath", "Public/Utilities/Tools/MechToolTransit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechToolTransit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechToolTransit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechToolTransit_Statics::ClassParams = {
		&AMechToolTransit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMechToolTransit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechToolTransit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechToolTransit()
	{
		if (!Z_Registration_Info_UClass_AMechToolTransit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechToolTransit.OuterSingleton, Z_Construct_UClass_AMechToolTransit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechToolTransit.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechToolTransit>()
	{
		return AMechToolTransit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechToolTransit);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolTransit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolTransit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechToolTransit, AMechToolTransit::StaticClass, TEXT("AMechToolTransit"), &Z_Registration_Info_UClass_AMechToolTransit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechToolTransit), 3500729334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolTransit_h_732083436(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolTransit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolTransit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
