// Copyright Epic Games, Inc. All Rights Reserved.

#include "DS_Ui.h"

#define LOCTEXT_NAMESPACE "FDS_UiModule"

void FDS_UiModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDS_UiModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDS_UiModule, DS_Ui)