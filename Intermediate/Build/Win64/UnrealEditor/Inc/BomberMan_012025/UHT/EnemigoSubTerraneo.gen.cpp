// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/EnemigoSubTerraneo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoSubTerraneo() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoSubTerraneo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoSubTerraneo_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoSubTerraneo
void AEnemigoSubTerraneo::StaticRegisterNativesAEnemigoSubTerraneo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoSubTerraneo);
UClass* Z_Construct_UClass_AEnemigoSubTerraneo_NoRegister()
{
	return AEnemigoSubTerraneo::StaticClass();
}
struct Z_Construct_UClass_AEnemigoSubTerraneo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoSubTerraneo.h" },
		{ "ModuleRelativePath", "Public/EnemigoSubTerraneo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoSubTerraneo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoSubTerraneo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubTerraneo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoSubTerraneo_Statics::ClassParams = {
	&AEnemigoSubTerraneo::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubTerraneo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoSubTerraneo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoSubTerraneo()
{
	if (!Z_Registration_Info_UClass_AEnemigoSubTerraneo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoSubTerraneo.OuterSingleton, Z_Construct_UClass_AEnemigoSubTerraneo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoSubTerraneo.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoSubTerraneo>()
{
	return AEnemigoSubTerraneo::StaticClass();
}
AEnemigoSubTerraneo::AEnemigoSubTerraneo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoSubTerraneo);
AEnemigoSubTerraneo::~AEnemigoSubTerraneo() {}
// End Class AEnemigoSubTerraneo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoSubTerraneo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoSubTerraneo, AEnemigoSubTerraneo::StaticClass, TEXT("AEnemigoSubTerraneo"), &Z_Registration_Info_UClass_AEnemigoSubTerraneo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoSubTerraneo), 1273631757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoSubTerraneo_h_3642072684(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoSubTerraneo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoSubTerraneo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
