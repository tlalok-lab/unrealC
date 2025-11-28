// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterInput.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "InputTriggers.h"
//#include "../../../../../../../Programas/UE_5.5/Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/Services/PlayerControlRotationService.h"
//#include "../../../../../../../Programas/UE_5.5/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputTriggers.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

// Sets default values
AMyCharacterInput::AMyCharacterInput()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterInput::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterInput::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterInput::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
///	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if( UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AMyCharacterInput::Interact);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &AMyCharacterInput::Interact);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error,
			Text("'%s' failed"));
	}

}


void AMyCharacterInput::Interact(const FInputActionValue& Value)
{
	GEngine->AddOnScreenDebugMessage(-1,
		5.f,
		FColor::Blue,
		TEXT("Boton de Interaccion presionado"));
}