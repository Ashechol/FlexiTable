// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "FlexiTableFactory.generated.h"

/**
 * Factory class for FlexiDataTable
 */
UCLASS(HideCategories=Object)
class UFlexiTableFactory : public UFactory
{
	GENERATED_BODY()

public:
	UFlexiTableFactory();
	
public:
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
};
