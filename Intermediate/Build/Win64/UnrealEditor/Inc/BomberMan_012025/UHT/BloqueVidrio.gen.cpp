// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/BloqueVidrio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueVidrio() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueVidrio();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueVidrio_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABloqueVidrio
void ABloqueVidrio::StaticRegisterNativesABloqueVidrio()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueVidrio);
UClass* Z_Construct_UClass_ABloqueVidrio_NoRegister()
{
	return ABloqueVidrio::StaticClass();
}
struct Z_Construct_UClass_ABloqueVidrio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueVidrio.h" },
		{ "ModuleRelativePath", "Public/BloqueVidrio.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueVidrio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueVidrio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueVidrio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueVidrio_Statics::ClassParams = {
	&ABloqueVidrio::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueVidrio_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueVidrio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueVidrio()
{
	if (!Z_Registration_Info_UClass_ABloqueVidrio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueVidrio.OuterSingleton, Z_Construct_UClass_ABloqueVidrio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueVidrio.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueVidrio>()
{
	return ABloqueVidrio::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueVidrio);
ABloqueVidrio::~ABloqueVidrio() {}
// End Class ABloqueVidrio

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueVidrio_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueVidrio, ABloqueVidrio::StaticClass, TEXT("ABloqueVidrio"), &Z_Registration_Info_UClass_ABloqueVidrio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueVidrio), 3075514153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueVidrio_h_597170761(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueVidrio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_Public_BloqueVidrio_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
