// Fill out your copyright notice in the Description page of Project Settings.


#include "FlexiTableFactory.h"
#include "FlexiTable.h"

UFlexiTableFactory::UFlexiTableFactory()
{
	SupportedClass = UFlexiTable::StaticClass();
	bCreateNew = 1;
}

UObject* UFlexiTableFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	check(InClass->IsChildOf(UFlexiTable::StaticClass()));
	return NewObject<UFlexiTable>(InParent, InClass, InName, Flags);
}
