// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "SanityRecovery.generated.h"

UCLASS()
class CAPSTONE_API ASanityRecovery : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASanityRecovery();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = Mesh)
	UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, Category = UI)
	class UWidgetComponent* InteractionWidget;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
	UNiagaraSystem* SanityFXSystem;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
	UNiagaraComponent* SanityFXComponent;

	void Interaction();
	void SetInteractionUIVisible(bool NewBool);
};
