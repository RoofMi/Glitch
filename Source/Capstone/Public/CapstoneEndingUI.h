// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CapstoneEndingUI.generated.h"

/**
 * 
 */
UCLASS()
class CAPSTONE_API UCapstoneEndingUI : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetHappyEnding();

protected:
	virtual void NativeConstruct() override;

private:
	UPROPERTY()
	class UImage* Image;

};
