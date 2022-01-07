// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4BOMBERMAN_EndGameWidget_generated_h
#error "EndGameWidget.generated.h already included, missing '#pragma once' in EndGameWidget.h"
#endif
#define UE4BOMBERMAN_EndGameWidget_generated_h

#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_SPARSE_DATA
#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnRestartClicked);


#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnRestartClicked);


#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndGameWidget(); \
	friend struct Z_Construct_UClass_UEndGameWidget_Statics; \
public: \
	DECLARE_CLASS(UEndGameWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(UEndGameWidget)


#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUEndGameWidget(); \
	friend struct Z_Construct_UClass_UEndGameWidget_Statics; \
public: \
	DECLARE_CLASS(UEndGameWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4Bomberman"), NO_API) \
	DECLARE_SERIALIZER(UEndGameWidget)


#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameWidget(UEndGameWidget&&); \
	NO_API UEndGameWidget(const UEndGameWidget&); \
public:


#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameWidget(UEndGameWidget&&); \
	NO_API UEndGameWidget(const UEndGameWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameWidget)


#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WinnerText() { return STRUCT_OFFSET(UEndGameWidget, WinnerText); } \
	FORCEINLINE static uint32 __PPO__RestartButton() { return STRUCT_OFFSET(UEndGameWidget, RestartButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UEndGameWidget, QuitButton); }


#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_14_PROLOG
#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_RPC_WRAPPERS \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_INCLASS \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_SPARSE_DATA \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_INCLASS_NO_PURE_DECLS \
	UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4BOMBERMAN_API UClass* StaticClass<class UEndGameWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4Bomberman_Source_UE4Bomberman_Public_EndGameWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
