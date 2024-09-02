// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor.h"

// Sets default values
ACppBaseActor::ACppBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	InitialLocation0->X= 70.0 ;
	InitialLocation0->Y = 70.0;
	InitialLocation0->Z = 140.0;
	Super::BeginPlay();
	ShowInformation();
	
}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//SinMovement(DeltaTime);
}
void ACppBaseActor::ShowInformation() {
	FString PlayerName = "NETOLOGIA";
	UE_LOG(LogTemp, Display, TEXT("name is %s"), *PlayerName);
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Black, PlayerName, true, FVector2D(2.0f, 2.0f));
}

void ACppBaseActor::SinMovement(double DeltaTime) {
	InitialLocation0->Z = Amplitude*sin(Frequency* DeltaTime)+140.0;
}