// Copyright 2025 Ashechol


#include "FlexiTableEditor.h"
#include "FlexiTable.h"
#include "FlexiTableEditorModule.h"


FFlexiTableEditor::FFlexiTableEditor()
{
	
}

FFlexiTableEditor::~FFlexiTableEditor()
{
	
}

void FFlexiTableEditor::Init(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UFlexiTable* Table)
{
	TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout("FlexiTableEditorDefaultLayout");
	StandaloneDefaultLayout->AddArea
	(
		FTabManager::NewPrimaryArea()->SetOrientation(Orient_Horizontal)
		->Split
		(
			FTabManager::NewStack()
			->AddTab("TableTab", ETabState::OpenedTab)
		)
		->Split
		(
			FTabManager::NewStack()
			->AddTab("DetailTab", ETabState::OpenedTab)
		)
	);
	
	InitAssetEditor(Mode, InitToolkitHost, FFlexiTableEditorModule::FlexiTableEditorAppIdentifier, StandaloneDefaultLayout, true, false, Table);
}
