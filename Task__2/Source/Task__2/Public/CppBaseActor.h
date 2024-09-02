// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class TASK__2_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	
	// Sets default values for this actor's properties
	ACppBaseActor();
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditInstanceOnly)
	bool IsAlive = true;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
void ShowInformation();
};
