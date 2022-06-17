// Copyright Epic Games, Inc. All Rights Reserved.

#include "SH_Map.h"

#define LOCTEXT_NAMESPACE "FSH_MapModule"

void FSH_MapModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FSH_MapModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSH_MapModule, SH_Map)