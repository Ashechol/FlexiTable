#include "FlexiTableEditorModule.h"
#include "FlexiTableEditor.h"

#define LOCTEXT_NAMESPACE "FFlexiTableEditorModule"

const FName FFlexiTableEditorModule::FlexiTableEditorAppIdentifier(TEXT("FlexiTableEditorApp"));

void FFlexiTableEditorModule::StartupModule()
{
    
}

void FFlexiTableEditorModule::ShutdownModule()
{
    
}

TSharedRef<FFlexiTableEditor> FFlexiTableEditorModule::CreateFlexiTableEditor(const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, UFlexiTable* Table)
{
	TSharedRef<FFlexiTableEditor> NewEditor(new FFlexiTableEditor());
	NewEditor->Init(Mode, InitToolkitHost, Table);
	return NewEditor;
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FFlexiTableEditorModule, FlexiTableEditor)