// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"
//#include У***.generated.hФ макрос


class UStaticMeshComponent;
UENUM(BluePrintType)
enum class EMovementState : uint8 {Mobility, Static};

UCLASS()
class TASK__2_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	
	// Sets default values for this actor's properties
	ACppBaseActor();
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;
UFUNCTION(BlueprintCallable)
	void SinMovement();
protected:
	
	UPROPERTY(VisibleAnywhere)
	double Amplitude=70.0;
	UPROPERTY(VisibleAnywhere)
	double Frequency=4.0;
	UPROPERTY(VisibleAnywhere)
	double InitialLocation[3];
	UPROPERTY(EditAnywhere)
	FVector InitialLocation0[3];
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditInstanceOnly)
	bool IsAlive = true;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
void ShowInformation();
};
