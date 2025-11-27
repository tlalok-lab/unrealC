// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeunrealC_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_unrealC;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_unrealC()
	{
		if (!Z_Registration_Info_UPackage__Script_unrealC.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/unrealC",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x99C5BACC,
				0xD953D841,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_unrealC.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_unrealC.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_unrealC(Z_Construct_UPackage__Script_unrealC, TEXT("/Script/unrealC"), Z_Registration_Info_UPackage__Script_unrealC, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x99C5BACC, 0xD953D841));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
