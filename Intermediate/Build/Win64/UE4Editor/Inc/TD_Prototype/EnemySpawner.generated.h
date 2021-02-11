// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TD_PROTOTYPE_EnemySpawner_generated_h
#error "EnemySpawner.generated.h already included, missing '#pragma once' in EnemySpawner.h"
#endif
#define TD_PROTOTYPE_EnemySpawner_generated_h

#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_SPARSE_DATA
#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_RPC_WRAPPERS
#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TD_Prototype"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TD_Prototype"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner)


#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemySpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemySpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public:


#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawner)


#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DelayBetweenSpawns() { return STRUCT_OFFSET(AEnemySpawner, DelayBetweenSpawns); } \
	FORCEINLINE static uint32 __PPO__AmountOfEnemies() { return STRUCT_OFFSET(AEnemySpawner, AmountOfEnemies); } \
	FORCEINLINE static uint32 __PPO__ActorToSpawn() { return STRUCT_OFFSET(AEnemySpawner, ActorToSpawn); }


#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_9_PROLOG
#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_SPARSE_DATA \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_RPC_WRAPPERS \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_INCLASS \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_SPARSE_DATA \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_INCLASS_NO_PURE_DECLS \
	TD_Prototype_Source_TD_Prototype_EnemySpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TD_PROTOTYPE_API UClass* StaticClass<class AEnemySpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TD_Prototype_Source_TD_Prototype_EnemySpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
