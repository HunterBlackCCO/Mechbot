// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Weapons/Bullets/MechBullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechBullet() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechBullet_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMechBullet::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AMechBullet::StaticRegisterNativesAMechBullet()
	{
		UClass* Class = AMechBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AMechBullet::execOnBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics
	{
		struct MechBullet_eventOnBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechBullet_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utilities/Weapons/Bullets/MechBullet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechBullet, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::MechBullet_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechBullet_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMechBullet_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechBullet);
	UClass* Z_Construct_UClass_AMechBullet_NoRegister()
	{
		return AMechBullet::StaticClass();
	}
	struct Z_Construct_UClass_AMechBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanPierceEnemies_MetaData[];
#endif
		static void NewProp_bCanPierceEnemies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPierceEnemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanPierceEnvironment_MetaData[];
#endif
		static void NewProp_bCanPierceEnvironment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPierceEnvironment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMechBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMechBullet_OnBeginOverlap, "OnBeginOverlap" }, // 2544544977
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/Weapons/Bullets/MechBullet.h" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/Bullets/MechBullet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnemies_MetaData[] = {
		{ "Category", "MechBullet" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/Bullets/MechBullet.h" },
	};
#endif
	void Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnemies_SetBit(void* Obj)
	{
		((AMechBullet*)Obj)->bCanPierceEnemies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnemies = { "bCanPierceEnemies", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMechBullet), &Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnemies_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnemies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnvironment_MetaData[] = {
		{ "Category", "MechBullet" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/Bullets/MechBullet.h" },
	};
#endif
	void Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnvironment_SetBit(void* Obj)
	{
		((AMechBullet*)Obj)->bCanPierceEnvironment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnvironment = { "bCanPierceEnvironment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMechBullet), &Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnvironment_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnvironment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnvironment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechBullet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "MechBullet" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/Bullets/MechBullet.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMechBullet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechBullet, Damage), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMechBullet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechBullet_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechBullet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechBullet_Statics::NewProp_bCanPierceEnvironment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechBullet_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechBullet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechBullet_Statics::ClassParams = {
		&AMechBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMechBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechBullet()
	{
		if (!Z_Registration_Info_UClass_AMechBullet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechBullet.OuterSingleton, Z_Construct_UClass_AMechBullet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechBullet.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechBullet>()
	{
		return AMechBullet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechBullet);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_Bullets_MechBullet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_Bullets_MechBullet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechBullet, AMechBullet::StaticClass, TEXT("AMechBullet"), &Z_Registration_Info_UClass_AMechBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechBullet), 4171521736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_Bullets_MechBullet_h_578340728(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_Bullets_MechBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_Bullets_MechBullet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
