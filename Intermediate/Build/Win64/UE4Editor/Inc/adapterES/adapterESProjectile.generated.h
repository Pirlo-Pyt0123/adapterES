// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ADAPTERES_adapterESProjectile_generated_h
#error "adapterESProjectile.generated.h already included, missing '#pragma once' in adapterESProjectile.h"
#endif
#define ADAPTERES_adapterESProjectile_generated_h

#define adapterES_Source_adapterES_adapterESProjectile_h_15_SPARSE_DATA
#define adapterES_Source_adapterES_adapterESProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define adapterES_Source_adapterES_adapterESProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define adapterES_Source_adapterES_adapterESProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAadapterESProjectile(); \
	friend struct Z_Construct_UClass_AadapterESProjectile_Statics; \
public: \
	DECLARE_CLASS(AadapterESProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/adapterES"), NO_API) \
	DECLARE_SERIALIZER(AadapterESProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define adapterES_Source_adapterES_adapterESProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAadapterESProjectile(); \
	friend struct Z_Construct_UClass_AadapterESProjectile_Statics; \
public: \
	DECLARE_CLASS(AadapterESProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/adapterES"), NO_API) \
	DECLARE_SERIALIZER(AadapterESProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define adapterES_Source_adapterES_adapterESProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AadapterESProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AadapterESProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AadapterESProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AadapterESProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AadapterESProjectile(AadapterESProjectile&&); \
	NO_API AadapterESProjectile(const AadapterESProjectile&); \
public:


#define adapterES_Source_adapterES_adapterESProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AadapterESProjectile(AadapterESProjectile&&); \
	NO_API AadapterESProjectile(const AadapterESProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AadapterESProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AadapterESProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AadapterESProjectile)


#define adapterES_Source_adapterES_adapterESProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AadapterESProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AadapterESProjectile, ProjectileMovement); }


#define adapterES_Source_adapterES_adapterESProjectile_h_12_PROLOG
#define adapterES_Source_adapterES_adapterESProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	adapterES_Source_adapterES_adapterESProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	adapterES_Source_adapterES_adapterESProjectile_h_15_SPARSE_DATA \
	adapterES_Source_adapterES_adapterESProjectile_h_15_RPC_WRAPPERS \
	adapterES_Source_adapterES_adapterESProjectile_h_15_INCLASS \
	adapterES_Source_adapterES_adapterESProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define adapterES_Source_adapterES_adapterESProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	adapterES_Source_adapterES_adapterESProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	adapterES_Source_adapterES_adapterESProjectile_h_15_SPARSE_DATA \
	adapterES_Source_adapterES_adapterESProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	adapterES_Source_adapterES_adapterESProjectile_h_15_INCLASS_NO_PURE_DECLS \
	adapterES_Source_adapterES_adapterESProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERES_API UClass* StaticClass<class AadapterESProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID adapterES_Source_adapterES_adapterESProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
