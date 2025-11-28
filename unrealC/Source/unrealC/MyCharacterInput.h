

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacterInput.generated.h"
#include "logging/LogMacros.h"


class UInputMapingContext;
class UEnhancedInputComponent;
class UInputAction;
class FInputActionValue;



UCLASS(Config = game)
class UNREALC_API AMyCharacterInput : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterInput();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Interact(const FInputActionValue& Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//called for intearction input
	void Interact(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPreserveAccess = "true"))
	UInputAction* InteractAction;

};
