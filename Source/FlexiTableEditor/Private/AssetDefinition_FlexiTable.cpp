// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetDefinition_FlexiTable.h"
#include "FlexiTable.h"

TConstArrayView<FAssetCategoryPath> UAssetDefinition_FlexiTable::GetAssetCategories() const
{
	static const auto Categories = { EAssetCategoryPaths::Misc };
	return Categories;
}

TSoftClassPtr<UObject> UAssetDefinition_FlexiTable::GetAssetClass() const
{
	return UFlexiTable::StaticClass();
}

FLinearColor UAssetDefinition_FlexiTable::GetAssetColor() const
{
	return FLinearColor(FColor::FromHex("#378ead"));
}

FText UAssetDefinition_FlexiTable::GetAssetDescription(const FAssetData& AssetData) const
{
	return FText::FromString(TEXT("Flexi Table"));
}

FText UAssetDefinition_FlexiTable::GetAssetDisplayName() const
{
	return FText::FromString(TEXT("Flexi Table"));
}

EAssetCommandResult UAssetDefinition_FlexiTable::OpenAssets(const FAssetOpenArgs& OpenArgs) const
{
	
	
	return EAssetCommandResult::Unhandled;
}
