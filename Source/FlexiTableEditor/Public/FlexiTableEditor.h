// Copyright 2025 Ashechol

#pragma once

#include "CoreMinimal.h"

class UFlexiTable;

/**
 * 
 */
class FFlexiTableEditor : public FAssetEditorToolkit
{
public:

	FFlexiTableEditor();
	virtual ~FFlexiTableEditor() override;

	void Init(const EToolkitMode::Type Mode, const TSharedPtr< class IToolkitHost >& InitToolkitHost, UFlexiTable* Table);

	virtual FName GetToolkitFName() const override {return FName("FlexiTableEditor");}
	virtual FText GetBaseToolkitName() const override {return FText::FromString("FlexiTable Editor");}
	virtual FString GetWorldCentricTabPrefix() const override {return "FlexiTable";}
	virtual FLinearColor GetWorldCentricTabColorScale() const override {return FLinearColor( 0.0f, 0.0f, 0.2f, 0.5f );}
};
