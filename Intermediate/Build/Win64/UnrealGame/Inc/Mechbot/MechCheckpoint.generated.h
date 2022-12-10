// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMechPaperPlayer;
#ifdef MECHBOT_MechCheckpoint_generated_h
#error "MechCheckpoint.generated.h already included, missing '#pragma once' in MechCheckpoint.h"
#endif
#define MECHBOT_MechCheckpoint_generated_h

#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_10_DELEGATE \
static inline void FOnCreated_DelegateWrapper(const FMulticastScriptDelegate& OnCreated) \
{ \
	OnCreated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_11_DELEGATE \
static inline void FOnSave_DelegateWrapper(const FMulticastScriptDelegate& OnSave) \
{ \
	OnSave.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_SPARSE_DATA
#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveProgress); \
	DECLARE_FUNCTION(execIsCheckpointActive); \
	DECLARE_FUNCTION(execGetId);


#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveProgress); \
	DECLARE_FUNCTION(execIsCheckpointActive); \
	DECLARE_FUNCTION(execGetId);


#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechCheckpoint(); \
	friend struct Z_Construct_UClass_AMechCheckpoint_Statics; \
public: \
	DECLARE_CLASS(AMechCheckpoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(AMechCheckpoint)


#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMechCheckpoint(); \
	friend struct Z_Construct_UClass_AMechCheckpoint_Statics; \
public: \
	DECLARE_CLASS(AMechCheckpoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(AMechCheckpoint)


#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechCheckpoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechCheckpoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechCheckpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechCheckpoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechCheckpoint(AMechCheckpoint&&); \
	NO_API AMechCheckpoint(const AMechCheckpoint&); \
public:


#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechCheckpoint(AMechCheckpoint&&); \
	NO_API AMechCheckpoint(const AMechCheckpoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechCheckpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechCheckpoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechCheckpoint)


#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_13_PROLOG
#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_RPC_WRAPPERS \
	FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_INCLASS \
	FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_INCLASS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHBOT_API UClass* StaticClass<class AMechCheckpoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Mechbot_Source_Mechbot_Public_SaveData_MechCheckpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
