// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AExtendedCharacter.generated.h"

UCLASS()
class PLATFORMER_API AAExtendedCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAExtendedCharacter();

	virtual void FellOutOfWorld(const UDamageType& dmg) override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnFellOutOfWorld();

};
