// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "adapterES/bounce_Ball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebounce_Ball() {}
// Cross Module References
	ADAPTERES_API UClass* Z_Construct_UClass_Ubounce_Ball_NoRegister();
	ADAPTERES_API UClass* Z_Construct_UClass_Ubounce_Ball();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_adapterES();
// End Cross Module References
	void Ubounce_Ball::StaticRegisterNativesUbounce_Ball()
	{
	}
	UClass* Z_Construct_UClass_Ubounce_Ball_NoRegister()
	{
		return Ubounce_Ball::StaticClass();
	}
	struct Z_Construct_UClass_Ubounce_Ball_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ubounce_Ball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_adapterES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ubounce_Ball_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "bounce_Ball.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ubounce_Ball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ibounce_Ball>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ubounce_Ball_Statics::ClassParams = {
		&Ubounce_Ball::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_Ubounce_Ball_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ubounce_Ball_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ubounce_Ball()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ubounce_Ball_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ubounce_Ball, 382760496);
	template<> ADAPTERES_API UClass* StaticClass<Ubounce_Ball>()
	{
		return Ubounce_Ball::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ubounce_Ball(Z_Construct_UClass_Ubounce_Ball, &Ubounce_Ball::StaticClass, TEXT("/Script/adapterES"), TEXT("Ubounce_Ball"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ubounce_Ball);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
