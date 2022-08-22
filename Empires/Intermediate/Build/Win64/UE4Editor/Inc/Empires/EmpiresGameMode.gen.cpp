// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Empires/EmpiresGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmpiresGameMode() {}
// Cross Module References
	EMPIRES_API UClass* Z_Construct_UClass_AEmpiresGameMode_NoRegister();
	EMPIRES_API UClass* Z_Construct_UClass_AEmpiresGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Empires();
// End Cross Module References
	void AEmpiresGameMode::StaticRegisterNativesAEmpiresGameMode()
	{
	}
	UClass* Z_Construct_UClass_AEmpiresGameMode_NoRegister()
	{
		return AEmpiresGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEmpiresGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmpiresGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Empires,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmpiresGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GameMode class to specify pawn and playercontroller */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EmpiresGameMode.h" },
		{ "ModuleRelativePath", "EmpiresGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmpiresGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmpiresGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEmpiresGameMode_Statics::ClassParams = {
		&AEmpiresGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEmpiresGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEmpiresGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmpiresGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEmpiresGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEmpiresGameMode, 2415770093);
	template<> EMPIRES_API UClass* StaticClass<AEmpiresGameMode>()
	{
		return AEmpiresGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmpiresGameMode(Z_Construct_UClass_AEmpiresGameMode, &AEmpiresGameMode::StaticClass, TEXT("/Script/Empires"), TEXT("AEmpiresGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmpiresGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
