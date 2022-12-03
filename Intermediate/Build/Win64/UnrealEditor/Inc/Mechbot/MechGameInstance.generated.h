// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHBOT_MechGameInstance_generated_h
#error "MechGameInstance.generated.h already included, missing '#pragma once' in MechGameInstance.h"
#endif
#define MECHBOT_MechGameInstance_generated_h

#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_SPARSE_DATA
#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartDeath); \
	DECLARE_FUNCTION(execSetActiveCheckpoint); \
	DECLARE_FUNCTION(execSetLives); \
	DECLARE_FUNCTION(execGetActiveCheckpoint); \
	DECLARE_FUNCTION(execGetLifeCount);


#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartDeath); \
	DECLARE_FUNCTION(execSetActiveCheckpoint); \
	DECLARE_FUNCTION(execSetLives); \
	DECLARE_FUNCTION(execGetActiveCheckpoint); \
	DECLARE_FUNCTION(execGetLifeCount);


#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMechGameInstance(); \
	friend struct Z_Construct_UClass_UMechGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMechGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(UMechGameInstance)


#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMechGameInstance(); \
	friend struct Z_Construct_UClass_UMechGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMechGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(UMechGameInstance)


#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMechGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMechGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMechGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMechGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMechGameInstance(UMechGameInstance&&); \
	NO_API UMechGameInstance(const UMechGameInstance&); \
public:


#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMechGameInstance(UMechGameInstance&&); \
	NO_API UMechGameInstance(const UMechGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMechGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMechGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMechGameInstance)


#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_14_PROLOG
#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_RPC_WRAPPERS \
	FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_INCLASS \
	FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHBOT_API UClass* StaticClass<class UMechGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Mechbot_Source_Mechbot_Public_MechGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
