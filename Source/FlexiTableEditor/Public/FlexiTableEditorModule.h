#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class UFlexiTable;
class FFlexiTableEditor;

class FFlexiTableEditorModule : public IModuleInterface
{
public:
    static const FName FlexiTableEditorAppIdentifier;
    
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    TSharedRef<FFlexiTableEditor> CreateFlexiTableEditor(const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, UFlexiTable* Table);
};
