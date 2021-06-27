// Fill out your copyright notice in the Description page of Project Settings.


#include "AExtendedCharacter.h"

// Sets default values
AAExtendedCharacter::AAExtendedCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AAExtendedCharacter::FellOutOfWorld(const UDamageType& dmg)
{
	AAExtendedCharacter::OnFellOutOfWorld();
}
