// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temperature.generated.h"

UCLASS()
class UNREALC_API ATemperature : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATemperature();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// mertodo para obtener temperatura en fahrenheit
	UFUNCTION(BlueprintCallable, Category = "Tempteratura")
	float GetTemperatureFahrenheit() const;

	UFUNCTION(BlueprintCallable, Category = "Temperature")
	float CalculateTemperatureDifference(float Temp1, float Temp2);

	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float CalculateStaticTemperatureDifference(float Temp1, float Temp2);

	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float ConvertToKelvinCelsius(float Kelvin);
	
	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float CalculateAverageTemperature(float Temp1, float Temp2);

	//evento para checar temperatura
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Temperature")
	void OnTemperatureChecked(float CurrentTemperature);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//temperature variable
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Temperature")
	float TemperatureCelsius;

	

};
