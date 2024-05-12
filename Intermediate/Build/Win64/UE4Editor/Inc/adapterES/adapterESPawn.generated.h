// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTERES_adapterESPawn_generated_h
#error "adapterESPawn.generated.h already included, missing '#pragma once' in adapterESPawn.h"
#endif
#define ADAPTERES_adapterESPawn_generated_h

#define adapterES_Source_adapterES_adapterESPawn_h_12_SPARSE_DATA
#define adapterES_Source_adapterES_adapterESPawn_h_12_RPC_WRAPPERS
#define adapterES_Source_adapterES_adapterESPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define adapterES_Source_adapterES_adapterESPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAadapterESPawn(); \
	friend struct Z_Construct_UClass_AadapterESPawn_Statics; \
public: \
	DECLARE_CLASS(AadapterESPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/adapterES"), NO_API) \
	DECLARE_SERIALIZER(AadapterESPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AadapterESPawn*>(this); }


#define adapterES_Source_adapterES_adapterESPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAadapterESPawn(); \
	friend struct Z_Construct_UClass_AadapterESPawn_Statics; \
public: \
	DECLARE_CLASS(AadapterESPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/adapterES"), NO_API) \
	DECLARE_SERIALIZER(AadapterESPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AadapterESPawn*>(this); }


#define adapterES_Source_adapterES_adapterESPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AadapterESPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AadapterESPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AadapterESPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AadapterESPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AadapterESPawn(AadapterESPawn&&); \
	NO_API AadapterESPawn(const AadapterESPawn&); \
public:


#define adapterES_Source_adapterES_adapterESPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AadapterESPawn(AadapterESPawn&&); \
	NO_API AadapterESPawn(const AadapterESPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AadapterESPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AadapterESPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AadapterESPawn)


#define adapterES_Source_adapterES_adapterESPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AadapterESPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AadapterESPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AadapterESPawn, CameraBoom); }


#define adapterES_Source_adapterES_adapterESPawn_h_9_PROLOG
#define adapterES_Source_adapterES_adapterESPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	adapterES_Source_adapterES_adapterESPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	adapterES_Source_adapterES_adapterESPawn_h_12_SPARSE_DATA \
	adapterES_Source_adapterES_adapterESPawn_h_12_RPC_WRAPPERS \
	adapterES_Source_adapterES_adapterESPawn_h_12_INCLASS \
	adapterES_Source_adapterES_adapterESPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define adapterES_Source_adapterES_adapterESPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	adapterES_Source_adapterES_adapterESPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	adapterES_Source_adapterES_adapterESPawn_h_12_SPARSE_DATA \
	adapterES_Source_adapterES_adapterESPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	adapterES_Source_adapterES_adapterESPawn_h_12_INCLASS_NO_PURE_DECLS \
	adapterES_Source_adapterES_adapterESPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERES_API UClass* StaticClass<class AadapterESPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID adapterES_Source_adapterES_adapterESPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
