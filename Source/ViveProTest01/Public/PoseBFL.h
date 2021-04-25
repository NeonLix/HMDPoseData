// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ISteamControllerPlugin.h"
#include "ISteamVRPlugin.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PoseBFL.generated.h"

/**
 * 
 */
UCLASS()
class VIVEPROTEST01_API UPoseBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
		static void testFunc();
};
