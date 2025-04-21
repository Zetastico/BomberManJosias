// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/EnemigoTerrestre.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoTerrestre() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoTerrestre();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoTerrestre_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoTerrestre
void AEnemigoTerrestre::StaticRegisterNativesAEnemigoTerrestre()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoTerrestre);
UClass* Z_Construct_UClass_AEnemigoTerrestre_NoRegister()
{
	return AEnemigoTerrestre::StaticClass();
}
struct Z_Construct_UClass_AEnemigoTerrestre_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoTerrestre.h" },
		{ "ModuleRelativePath", "Public/EnemigoTerrestre.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoTerrestre>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoTerrestre_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestre_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoTerrestre_Statics::ClassParams = {
	&AEnemigoTerrestre::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestre_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoTerrestre_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoTerrestre()
{
	if (!Z_Registration_Info_UClass_AEnemigoTerrestre.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoTerrestre.OuterSingleton, Z_Construct_UClass_AEnemigoTerrestre_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoTerrestre.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoTerrestre>()
{
	return AEnemigoTerrestre::StaticClass();
}
AEnemigoTerrestre::AEnemigoTerrestre() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoTerrestre);
AEnemigoTerrestre::~AEnemigoTerrestre() {}
// End Class AEnemigoTerrestre

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoTerrestre_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoTerrestre, AEnemigoTerrestre::StaticClass, TEXT("AEnemigoTerrestre"), &Z_Registration_Info_UClass_AEnemigoTerrestre, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoTerrestre), 1021921205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoTerrestre_h_2060119696(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoTerrestre_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_EnemigoTerrestre_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
