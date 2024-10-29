// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsDrive/LearningAgentsDriveSportsCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsDriveSportsCar() {}
// Cross Module References
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ALearningAgentsDrivePawn();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ALearningAgentsDriveSportsCar();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ALearningAgentsDriveSportsCar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsDrive();
// End Cross Module References
	void ALearningAgentsDriveSportsCar::StaticRegisterNativesALearningAgentsDriveSportsCar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALearningAgentsDriveSportsCar);
	UClass* Z_Construct_UClass_ALearningAgentsDriveSportsCar_NoRegister()
	{
		return ALearningAgentsDriveSportsCar::StaticClass();
	}
	struct Z_Construct_UClass_ALearningAgentsDriveSportsCar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALearningAgentsDriveSportsCar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALearningAgentsDrivePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsDrive,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsDriveSportsCar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearningAgentsDriveSportsCar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LearningAgentsDriveSportsCar.h" },
		{ "ModuleRelativePath", "LearningAgentsDriveSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALearningAgentsDriveSportsCar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALearningAgentsDriveSportsCar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALearningAgentsDriveSportsCar_Statics::ClassParams = {
		&ALearningAgentsDriveSportsCar::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALearningAgentsDriveSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ALearningAgentsDriveSportsCar_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ALearningAgentsDriveSportsCar()
	{
		if (!Z_Registration_Info_UClass_ALearningAgentsDriveSportsCar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALearningAgentsDriveSportsCar.OuterSingleton, Z_Construct_UClass_ALearningAgentsDriveSportsCar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALearningAgentsDriveSportsCar.OuterSingleton;
	}
	template<> LEARNINGAGENTSDRIVE_API UClass* StaticClass<ALearningAgentsDriveSportsCar>()
	{
		return ALearningAgentsDriveSportsCar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearningAgentsDriveSportsCar);
	ALearningAgentsDriveSportsCar::~ALearningAgentsDriveSportsCar() {}
	struct Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveSportsCar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveSportsCar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALearningAgentsDriveSportsCar, ALearningAgentsDriveSportsCar::StaticClass, TEXT("ALearningAgentsDriveSportsCar"), &Z_Registration_Info_UClass_ALearningAgentsDriveSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALearningAgentsDriveSportsCar), 1414946344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveSportsCar_h_446897675(TEXT("/Script/LearningAgentsDrive"),
		Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveSportsCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveSportsCar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
