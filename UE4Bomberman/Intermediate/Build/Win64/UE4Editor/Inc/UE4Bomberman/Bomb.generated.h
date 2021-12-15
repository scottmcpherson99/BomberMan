// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4BOMBERMAN_Bomb_generated_h
#error "Bomb.generated.h already included, missing '#pragma once' in Bomb.h"
#endif
#define UE4BOMBERMAN_Bomb_generated_h

#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_SPARSE_DATA
#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplodeBomb);


#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplodeBomb);


#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public:


#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomb)


#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootComp() { return STRUCT_OFFSET(ABomb, RootComp); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ABomb, MeshComp); } \
	FORCEINLINE static uint32 __PPO__CollisionBoxX() { return STRUCT_OFFSET(ABomb, CollisionBoxX); } \
	FORCEINLINE static uint32 __PPO__CollisionBoxY() { return STRUCT_OFFSET(ABomb, CollisionBoxY); }


#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_13_PROLOG
#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_RPC_WRAPPERS \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_INCLASS \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_INCLASS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4BOMBERMAN_API UClass* StaticClass<class ABomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Bomberman_Source_UE4Bomberman_Public_Bomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
