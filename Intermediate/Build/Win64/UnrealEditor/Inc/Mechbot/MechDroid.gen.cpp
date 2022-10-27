// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Droids/MechDroid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechDroid() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechDroid_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechDroid();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechDroid::StaticRegisterNativesAMechDroid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechDroid);
	UClass* Z_Construct_UClass_AMechDroid_NoRegister()
	{
		return AMechDroid::StaticClass();
	}
	struct Z_Construct_UClass_AMechDroid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechDroid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechDroid_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Droids/MechDroid.h" },
		{ "ModuleRelativePath", "Public/Droids/MechDroid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechDroid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechDroid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechDroid_Statics::ClassParams = {
		&AMechDroid::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechDroid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechDroid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechDroid()
	{
		if (!Z_Registration_Info_UClass_AMechDroid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechDroid.OuterSingleton, Z_Construct_UClass_AMechDroid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechDroid.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechDroid>()
	{
		return AMechDroid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechDroid);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechDroid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechDroid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechDroid, AMechDroid::StaticClass, TEXT("AMechDroid"), &Z_Registration_Info_UClass_AMechDroid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechDroid), 2481499109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechDroid_h_1738901376(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechDroid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechDroid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
