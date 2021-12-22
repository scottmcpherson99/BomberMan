// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4BOMBERMAN_BaseDrop_generated_h
#error "BaseDrop.generated.h already included, missing '#pragma once' in BaseDrop.h"
#endif
#define UE4BOMBERMAN_BaseDrop_generated_h

#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_SPARSE_DATA
#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_RPC_WRAPPERS \
	virtual void WasCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execWasCollected); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive);


#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWasCollected); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive);


#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_EVENT_PARMS
#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_CALLBACK_WRAPPERS
#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseDrop(); \
	friend struct Z_Construct_UClass_ABaseDrop_Statics; \
public: \
	DECLARE_CLASS(ABaseDrop, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABaseDrop)


#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseDrop(); \
	friend struct Z_Construct_UClass_ABaseDrop_Statics; \
public: \
	DECLARE_CLASS(ABaseDrop, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABaseDrop)


#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseDrop(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseDrop) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseDrop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseDrop); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseDrop(ABaseDrop&&); \
	NO_API ABaseDrop(const ABaseDrop&); \
public:


#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseDrop(ABaseDrop&&); \
	NO_API ABaseDrop(const ABaseDrop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseDrop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseDrop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseDrop)


#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupMesh() { return STRUCT_OFFSET(ABaseDrop, PickupMesh); }


#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_9_PROLOG \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_EVENT_PARMS


#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_RPC_WRAPPERS \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_CALLBACK_WRAPPERS \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_INCLASS \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_CALLBACK_WRAPPERS \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_INCLASS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4BOMBERMAN_API UClass* StaticClass<class ABaseDrop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Bomberman_Source_UE4Bomberman_Public_BaseDrop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
