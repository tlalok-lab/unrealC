// Fill out your copyright notice in the Description page of Project Settings.


#include "TransformModifier.h"

// Sets default values
ATransformModifier::ATransformModifier()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATransformModifier::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	DrawDSphere();
}


// Called when the game starts or when spawned
void ATransformModifier::BeginPlay()
{
	Super::BeginPlay();
	//vinculkar al actor seleccionado con el transform
	if(TargetActor)
	{
		NewTransform = TargetActor->GetActorTransform();
	}
	else {
		TargetActor = nullptr;
	}
	//Inicilizar el indice de l a posicion actual
	if (Positions.Num() > 0) {
		MoveToNextPosition();
	}
}

// Called every frame
void ATransformModifier::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ModifyTaretTransform(DeltaTime);

}

void ATransformModifier::ModifyTaretTransform(float DeltaTime)
{
	//if(TargetActor)
	//{
	//	TargetActor->SetActorTransform(NewTransform);
	//
	// }

	if(Positions.Num() == 0)
	{
		return;
	}
	FVector CurrentPosition = TargetActor->GetActorLocation();
	FVector TargetPosition = Positions[CurrentPositionIndex];

	//Move Towards target position
	FVector Direction = (TargetPosition - CurrentPosition).GetSafeNormal();
	FVector NewPosition = CurrentPosition + Direction * 100 * DeltaTime;

	TargetActor->SetActorLocation(NewPosition);

	//Check if target position
	if (FVector::Dist(NewPosition, TargetPosition) < 10.0f)
	{
		CurrentPositionIndex++;
		ChangeMaterial();
		if (CurrentPositionIndex >= Positions.Num()) {
			CurrentPositionIndex = 0; // Reset to first position
		}
	}
}

void ATransformModifier::MoveToNextPosition()
{
	if (TargetActor && Positions.IsValidIndex(CurrentPositionIndex)) {
		FVector TargetPosition = Positions[CurrentPositionIndex];
		TargetActor->SetActorLocation(TargetPosition);
	}
}

void ATransformModifier::ChangeMaterial()
{
}

void ATransformModifier::DrawDSphere() const
{
	for(const FVector& Position : Positions)
	{
		DrawDebugSphere(
			GetWorld(),
			Position,
			50.0f,  ////Radius
			12, 	  ////Segments
			FColor::Red,	//Color
			false, // persistent lines (will stay for a while)
			-1.0f,	// LifeTime
			0,	// DepthPriority
			5.0f // Thickness
		);
	}
}
