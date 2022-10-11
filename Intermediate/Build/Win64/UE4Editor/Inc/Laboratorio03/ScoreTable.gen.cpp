// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Laboratorio03/ScoreTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreTable() {}
// Cross Module References
	LABORATORIO03_API UClass* Z_Construct_UClass_UScoreTable_NoRegister();
	LABORATORIO03_API UClass* Z_Construct_UClass_UScoreTable();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Laboratorio03();
// End Cross Module References
	void UScoreTable::StaticRegisterNativesUScoreTable()
	{
	}
	UClass* Z_Construct_UClass_UScoreTable_NoRegister()
	{
		return UScoreTable::StaticClass();
	}
	struct Z_Construct_UClass_UScoreTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScoreTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Laboratorio03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreTable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ScoreTable.h" },
		{ "ModuleRelativePath", "ScoreTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScoreTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScoreTable_Statics::ClassParams = {
		&UScoreTable::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScoreTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScoreTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScoreTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScoreTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScoreTable, 2565148561);
	template<> LABORATORIO03_API UClass* StaticClass<UScoreTable>()
	{
		return UScoreTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScoreTable(Z_Construct_UClass_UScoreTable, &UScoreTable::StaticClass, TEXT("/Script/Laboratorio03"), TEXT("UScoreTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
