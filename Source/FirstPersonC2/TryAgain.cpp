// Fill out your copyright notice in the Description page of Project Settings.


#include "TryAgain.h"
#include <iostream>
using namespace std;

// Sets default values for this component's properties
UTryAgain::UTryAgain()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UTryAgain::DeathCheck()
{
	if (IsDead == true) 
	{
		cout << "You are Dead.";
	}
}





// Called when the game starts
void UTryAgain::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
	
	
}

void UTryAgain::TakingDamage(float HealthChange)
{
	if (CanHealth == true) 
	{
		CurrentHealth += HealthChange;
		CurrentHealth = FMath::Clamp(CurrentHealth, 0, MaxHealth);

		if (CurrentHealth == 0.0f) 
		{
			IsDead = true;
			DeathCheck();
		}
	}
	
}



// Called every frame
void UTryAgain::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

