// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/BloqueBurbuja.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBurbuja() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBurbuja();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueBurbuja
void ABloqueBurbuja::StaticRegisterNativesABloqueBurbuja()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBurbuja);
UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister()
{
	return ABloqueBurbuja::StaticClass();
}
struct Z_Construct_UClass_ABloqueBurbuja_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "BloqueBurbuja.h" },
		{ "ModuleRelativePath", "Public/BloqueBurbuja.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBurbuja>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams = {
	&ABloqueBurbuja::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBurbuja()
{
	if (!Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton, Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueBurbuja>()
{
	return ABloqueBurbuja::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBurbuja);
ABloqueBurbuja::~ABloqueBurbuja() {}
// End Class ABloqueBurbuja

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueBurbuja_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBurbuja, ABloqueBurbuja::StaticClass, TEXT("ABloqueBurbuja"), &Z_Registration_Info_UClass_ABloqueBurbuja, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBurbuja), 1647577556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueBurbuja_h_3132423466(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueBurbuja_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueBurbuja_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
