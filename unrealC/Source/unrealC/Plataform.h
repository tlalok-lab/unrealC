// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataform.generated.h"

UCLASS()
class UNREALC_API APlataform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Platafom Functions")
	void ChangeMaterial(UMaterialInterface* NewMaterial);

	UFUNCTION()

	void
		OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, 
			class AActor* OtherActor,
			class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult);

public:
	//Components
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionComponent;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platafom Settings")
	UStaticMeshComponent* MeshComponent;

	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platafom Settings")
	UMaterialInterface* DefaultMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platafom Settings")	
	float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platafom Settings")
	float MovementAmplitud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platafom Settings")
	FVector InitialLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platafom Settings")
	bool bMovingRight;

};
