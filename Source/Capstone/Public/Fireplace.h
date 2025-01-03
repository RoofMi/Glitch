// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fireplace.generated.h"

UCLASS()
class CAPSTONE_API AFireplace : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireplace();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = Mesh)
	UStaticMeshComponent* Mesh;

// ��ȣ�ۿ� UI
public:
	UPROPERTY(VisibleAnywhere, Category = UI)
	class UWidgetComponent* InteractionWidget;

	void Interaction();
	void SetInteractionUIVisible(bool NewBool);
};
