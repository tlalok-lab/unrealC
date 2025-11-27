// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTest.h"

// Sets default values
AMyActorTest::AMyActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyFloatVariable = 50.0f;
	edad = 41;
	esInstructor = true;
	nombre = "Carlos";
	DemosstrateeFundamentals();

}

// Called when the game starts or when spawned
void AMyActorTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorTest::DemosstrateeFundamentals()
{
	//operaciones Aritmeticasss
	int32 sum = edad + 10;
	float multiplicacion = MyFloatVariable * 1.5f;

	//Opeaciones de control
	if (esInstructor)
	{
		// Imprime en consola el nombre y la edad del instructor
		//UE_LOG(LogTemp, Warning, TEXT("El instructor %s tiene %d años."), *nombre, edad);
		// Imprime el pantalla /viewport
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,TEXT("  es intructor "));
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("%s no es instructor y tiene %d años"), *nombre, edad);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("  no es intructor"));
	}

	//bucle o Ciclos
	for (int32 i = 0; i < 5; i++) {
		FString DEbugMessage = FString::Printf(TEXT("loop interation: %d"), i );
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, DEbugMessage);
	}


	//bucle while
	int32 count = 0;
	while (count < 3) {
		FString DebugMessage = FString::Printf(TEXT("While loop iteration: %d"), count);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, DebugMessage);
		count++;
	}


}

