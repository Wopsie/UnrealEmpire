// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Empires/EmpiresPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmpiresPlayerController() {}
// Cross Module References
	EMPIRES_API UClass* Z_Construct_UClass_AEmpiresPlayerController_NoRegister();
	EMPIRES_API UClass* Z_Construct_UClass_AEmpiresPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Empires();
// End Cross Module References
	void AEmpiresPlayerController::StaticRegisterNativesAEmpiresPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AEmpiresPlayerController_NoRegister()
	{
		return AEmpiresPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AEmpiresPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmpiresPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Empires,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmpiresPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PlayerController class used to enable cursor */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EmpiresPlayerController.h" },
		{ "ModuleRelativePath", "EmpiresPlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmpiresPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmpiresPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEmpiresPlayerController_Statics::ClassParams = {
		&AEmpiresPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEmpiresPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEmpiresPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmpiresPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEmpiresPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEmpiresPlayerController, 3748245563);
	template<> EMPIRES_API UClass* StaticClass<AEmpiresPlayerController>()
	{
		return AEmpiresPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmpiresPlayerController(Z_Construct_UClass_AEmpiresPlayerController, &AEmpiresPlayerController::StaticClass, TEXT("/Script/Empires"), TEXT("AEmpiresPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmpiresPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
