// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningAgentsDrive/LearningAgentsDriveWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningAgentsDriveWheelRear() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ULearningAgentsDriveWheelRear();
	LEARNINGAGENTSDRIVE_API UClass* Z_Construct_UClass_ULearningAgentsDriveWheelRear_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LearningAgentsDrive();
// End Cross Module References
	void ULearningAgentsDriveWheelRear::StaticRegisterNativesULearningAgentsDriveWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULearningAgentsDriveWheelRear);
	UClass* Z_Construct_UClass_ULearningAgentsDriveWheelRear_NoRegister()
	{
		return ULearningAgentsDriveWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_ULearningAgentsDriveWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULearningAgentsDriveWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningAgentsDrive,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULearningAgentsDriveWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "LearningAgentsDriveWheelRear.h" },
		{ "ModuleRelativePath", "LearningAgentsDriveWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULearningAgentsDriveWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULearningAgentsDriveWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULearningAgentsDriveWheelRear_Statics::ClassParams = {
		&ULearningAgentsDriveWheelRear::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULearningAgentsDriveWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_ULearningAgentsDriveWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULearningAgentsDriveWheelRear()
	{
		if (!Z_Registration_Info_UClass_ULearningAgentsDriveWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULearningAgentsDriveWheelRear.OuterSingleton, Z_Construct_UClass_ULearningAgentsDriveWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULearningAgentsDriveWheelRear.OuterSingleton;
	}
	template<> LEARNINGAGENTSDRIVE_API UClass* StaticClass<ULearningAgentsDriveWheelRear>()
	{
		return ULearningAgentsDriveWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULearningAgentsDriveWheelRear);
	ULearningAgentsDriveWheelRear::~ULearningAgentsDriveWheelRear() {}
	struct Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULearningAgentsDriveWheelRear, ULearningAgentsDriveWheelRear::StaticClass, TEXT("ULearningAgentsDriveWheelRear"), &Z_Registration_Info_UClass_ULearningAgentsDriveWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULearningAgentsDriveWheelRear), 1375487938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveWheelRear_h_416625726(TEXT("/Script/LearningAgentsDrive"),
		Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningAgentsDrive_Source_LearningAgentsDrive_LearningAgentsDriveWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
