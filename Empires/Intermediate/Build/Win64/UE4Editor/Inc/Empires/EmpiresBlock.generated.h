// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef EMPIRES_EmpiresBlock_generated_h
#error "EmpiresBlock.generated.h already included, missing '#pragma once' in EmpiresBlock.h"
#endif
#define EMPIRES_EmpiresBlock_generated_h

#define Empires_Source_Empires_EmpiresBlock_h_13_SPARSE_DATA
#define Empires_Source_Empires_EmpiresBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define Empires_Source_Empires_EmpiresBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define Empires_Source_Empires_EmpiresBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmpiresBlock(); \
	friend struct Z_Construct_UClass_AEmpiresBlock_Statics; \
public: \
	DECLARE_CLASS(AEmpiresBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Empires"), EMPIRES_API) \
	DECLARE_SERIALIZER(AEmpiresBlock)


#define Empires_Source_Empires_EmpiresBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEmpiresBlock(); \
	friend struct Z_Construct_UClass_AEmpiresBlock_Statics; \
public: \
	DECLARE_CLASS(AEmpiresBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Empires"), EMPIRES_API) \
	DECLARE_SERIALIZER(AEmpiresBlock)


#define Empires_Source_Empires_EmpiresBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EMPIRES_API AEmpiresBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmpiresBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EMPIRES_API, AEmpiresBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmpiresBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EMPIRES_API AEmpiresBlock(AEmpiresBlock&&); \
	EMPIRES_API AEmpiresBlock(const AEmpiresBlock&); \
public:


#define Empires_Source_Empires_EmpiresBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EMPIRES_API AEmpiresBlock(AEmpiresBlock&&); \
	EMPIRES_API AEmpiresBlock(const AEmpiresBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EMPIRES_API, AEmpiresBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmpiresBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEmpiresBlock)


#define Empires_Source_Empires_EmpiresBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(AEmpiresBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(AEmpiresBlock, BlockMesh); }


#define Empires_Source_Empires_EmpiresBlock_h_10_PROLOG
#define Empires_Source_Empires_EmpiresBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Empires_Source_Empires_EmpiresBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	Empires_Source_Empires_EmpiresBlock_h_13_SPARSE_DATA \
	Empires_Source_Empires_EmpiresBlock_h_13_RPC_WRAPPERS \
	Empires_Source_Empires_EmpiresBlock_h_13_INCLASS \
	Empires_Source_Empires_EmpiresBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Empires_Source_Empires_EmpiresBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Empires_Source_Empires_EmpiresBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	Empires_Source_Empires_EmpiresBlock_h_13_SPARSE_DATA \
	Empires_Source_Empires_EmpiresBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Empires_Source_Empires_EmpiresBlock_h_13_INCLASS_NO_PURE_DECLS \
	Empires_Source_Empires_EmpiresBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EMPIRES_API UClass* StaticClass<class AEmpiresBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Empires_Source_Empires_EmpiresBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
