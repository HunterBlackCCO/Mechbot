// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Tools/MechToolShift.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechToolShift() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechToolShift_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechToolShift();
	MECHBOT_API UClass* Z_Construct_UClass_AMechTool();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechToolShift::StaticRegisterNativesAMechToolShift()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechToolShift);
	UClass* Z_Construct_UClass_AMechToolShift_NoRegister()
	{
		return AMechToolShift::StaticClass();
	}
	struct Z_Construct_UClass_AMechToolShift_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechToolShift_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMechTool,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechToolShift_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utilities/Tools/MechToolShift.h" },
		{ "ModuleRelativePath", "Public/Utilities/Tools/MechToolShift.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechToolShift_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechToolShift>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechToolShift_Statics::ClassParams = {
		&AMechToolShift::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMechToolShift_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechToolShift_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechToolShift()
	{
		if (!Z_Registration_Info_UClass_AMechToolShift.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechToolShift.OuterSingleton, Z_Construct_UClass_AMechToolShift_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechToolShift.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechToolShift>()
	{
		return AMechToolShift::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechToolShift);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolShift_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolShift_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechToolShift, AMechToolShift::StaticClass, TEXT("AMechToolShift"), &Z_Registration_Info_UClass_AMechToolShift, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechToolShift), 250468866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolShift_h_3684056829(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolShift_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechToolShift_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
