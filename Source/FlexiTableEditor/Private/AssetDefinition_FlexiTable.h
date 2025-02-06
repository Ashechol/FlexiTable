// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetDefinitionDefault.h"
#include "AssetDefinition_FlexiTable.generated.h"

/**
 * 
 */
UCLASS()
class UAssetDefinition_FlexiTable : public UAssetDefinitionDefault
{
	GENERATED_BODY()

public:
	virtual TConstArrayView<FAssetCategoryPath> GetAssetCategories() const override;
	virtual TSoftClassPtr<UObject> GetAssetClass() const override;
	virtual FLinearColor GetAssetColor() const override;
	virtual FText GetAssetDescription(const FAssetData& AssetData) const override;
	virtual FText GetAssetDisplayName() const override;
	virtual EAssetCommandResult OpenAssets(const FAssetOpenArgs& OpenArgs) const override;
};
