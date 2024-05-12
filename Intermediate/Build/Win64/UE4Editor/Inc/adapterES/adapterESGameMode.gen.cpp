// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "adapterES/adapterESGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeadapterESGameMode() {}
// Cross Module References
	ADAPTERES_API UClass* Z_Construct_UClass_AadapterESGameMode_NoRegister();
	ADAPTERES_API UClass* Z_Construct_UClass_AadapterESGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_adapterES();
	ADAPTERES_API UClass* Z_Construct_UClass_AadapterESPawn_NoRegister();
	ADAPTERES_API UClass* Z_Construct_UClass_AADAPTER_EXTRANJERA_NoRegister();
// End Cross Module References
	void AadapterESGameMode::StaticRegisterNativesAadapterESGameMode()
	{
	}
	UClass* Z_Construct_UClass_AadapterESGameMode_NoRegister()
	{
		return AadapterESGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AadapterESGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_jugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adapter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_adapter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AadapterESGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_adapterES,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AadapterESGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "adapterESGameMode.h" },
		{ "ModuleRelativePath", "adapterESGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_jugador_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "adapterESGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_jugador = { "jugador", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AadapterESGameMode, jugador), Z_Construct_UClass_AadapterESPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_jugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_jugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_adapter_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "adapterESGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_adapter = { "adapter", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AadapterESGameMode, adapter), Z_Construct_UClass_AADAPTER_EXTRANJERA_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_adapter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_adapter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AadapterESGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_jugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AadapterESGameMode_Statics::NewProp_adapter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AadapterESGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AadapterESGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AadapterESGameMode_Statics::ClassParams = {
		&AadapterESGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AadapterESGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AadapterESGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AadapterESGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AadapterESGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AadapterESGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AadapterESGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AadapterESGameMode, 1905749476);
	template<> ADAPTERES_API UClass* StaticClass<AadapterESGameMode>()
	{
		return AadapterESGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AadapterESGameMode(Z_Construct_UClass_AadapterESGameMode, &AadapterESGameMode::StaticClass, TEXT("/Script/adapterES"), TEXT("AadapterESGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AadapterESGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
