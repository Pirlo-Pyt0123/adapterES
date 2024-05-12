// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTERES_bounce_Ball_generated_h
#error "bounce_Ball.generated.h already included, missing '#pragma once' in bounce_Ball.h"
#endif
#define ADAPTERES_bounce_Ball_generated_h

#define adapterES_Source_adapterES_bounce_Ball_h_13_SPARSE_DATA
#define adapterES_Source_adapterES_bounce_Ball_h_13_RPC_WRAPPERS
#define adapterES_Source_adapterES_bounce_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define adapterES_Source_adapterES_bounce_Ball_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADAPTERES_API Ubounce_Ball(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Ubounce_Ball) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTERES_API, Ubounce_Ball); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ubounce_Ball); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTERES_API Ubounce_Ball(Ubounce_Ball&&); \
	ADAPTERES_API Ubounce_Ball(const Ubounce_Ball&); \
public:


#define adapterES_Source_adapterES_bounce_Ball_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADAPTERES_API Ubounce_Ball(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTERES_API Ubounce_Ball(Ubounce_Ball&&); \
	ADAPTERES_API Ubounce_Ball(const Ubounce_Ball&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTERES_API, Ubounce_Ball); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ubounce_Ball); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Ubounce_Ball)


#define adapterES_Source_adapterES_bounce_Ball_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUbounce_Ball(); \
	friend struct Z_Construct_UClass_Ubounce_Ball_Statics; \
public: \
	DECLARE_CLASS(Ubounce_Ball, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/adapterES"), ADAPTERES_API) \
	DECLARE_SERIALIZER(Ubounce_Ball)


#define adapterES_Source_adapterES_bounce_Ball_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	adapterES_Source_adapterES_bounce_Ball_h_13_GENERATED_UINTERFACE_BODY() \
	adapterES_Source_adapterES_bounce_Ball_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define adapterES_Source_adapterES_bounce_Ball_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	adapterES_Source_adapterES_bounce_Ball_h_13_GENERATED_UINTERFACE_BODY() \
	adapterES_Source_adapterES_bounce_Ball_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define adapterES_Source_adapterES_bounce_Ball_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~Ibounce_Ball() {} \
public: \
	typedef Ubounce_Ball UClassType; \
	typedef Ibounce_Ball ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define adapterES_Source_adapterES_bounce_Ball_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~Ibounce_Ball() {} \
public: \
	typedef Ubounce_Ball UClassType; \
	typedef Ibounce_Ball ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define adapterES_Source_adapterES_bounce_Ball_h_10_PROLOG
#define adapterES_Source_adapterES_bounce_Ball_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	adapterES_Source_adapterES_bounce_Ball_h_13_SPARSE_DATA \
	adapterES_Source_adapterES_bounce_Ball_h_13_RPC_WRAPPERS \
	adapterES_Source_adapterES_bounce_Ball_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define adapterES_Source_adapterES_bounce_Ball_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	adapterES_Source_adapterES_bounce_Ball_h_13_SPARSE_DATA \
	adapterES_Source_adapterES_bounce_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	adapterES_Source_adapterES_bounce_Ball_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERES_API UClass* StaticClass<class Ubounce_Ball>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID adapterES_Source_adapterES_bounce_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
