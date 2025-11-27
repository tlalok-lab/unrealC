// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Plataform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInterface;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UNREALC_Plataform_generated_h
#error "Plataform.generated.h already included, missing '#pragma once' in Plataform.h"
#endif
#define UNREALC_Plataform_generated_h

#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Plataform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execChangeMaterial);


#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Plataform_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlataform(); \
	friend struct Z_Construct_UClass_APlataform_Statics; \
public: \
	DECLARE_CLASS(APlataform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/unrealC"), NO_API) \
	DECLARE_SERIALIZER(APlataform)


#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Plataform_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlataform(APlataform&&); \
	APlataform(const APlataform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlataform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlataform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlataform) \
	NO_API virtual ~APlataform();


#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Plataform_h_9_PROLOG
#define FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Plataform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Plataform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Plataform_h_12_INCLASS_NO_PURE_DECLS \
	FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Plataform_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALC_API UClass* StaticClass<class APlataform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Archivo_Docuemntos_GitHub_unrealC_unrealC_Source_unrealC_Plataform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
