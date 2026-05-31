// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JUESystemStatics.generated.h"

/**
 * 
 */
UCLASS()
class JUE_API UJUESystemStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SystemStatics")
	static bool IsInEditor();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SystemStatics")
	static bool IsInBuild();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SystemStatics")
	static bool IsInBuildDevelopment();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SystemStatics")
	static bool IsInBuildShipping();
	
};
