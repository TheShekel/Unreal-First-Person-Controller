// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TryAgain.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTPERSONC2_API UTryAgain : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTryAgain();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanHealth = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanRegen = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanWalk = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanSprint = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanLook = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanCrouch = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanJump = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanZoom = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanInteract = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanClimb = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	bool CanMove = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Crouch")
	bool IsCrouching = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Death")
	bool IsDead = false;
	UFUNCTION(Category = "Death")
	void DeathCheck();
	
	UPROPERTY(BlueprintReadOnly, Category = "Speed")
	float BaseSpeed = 600.0f;
	UPROPERTY(BlueprintReadOnly, Category = "Speed")
	float SprintSpeed = 1200.0f;
	UPROPERTY(BlueprintReadOnly, Category = "Speed")
	float CrouchSpeed = 300.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Camera")
	float CameraPitchMax = 80.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Crouch")
	float UncrouchHeightAllowance = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jump")
	float JumpHeight = 550.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CanDoList")
	float HealthRegenAmount = 5.0f;
	UPROPERTY(BlueprintReadOnly, Category = "Health")
	float MaxHealth = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float CurrentHealth = 100.0f;
	UFUNCTION(blueprintCallable)
	void TakingDamage(float HealthChange = 0.0f);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;




public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
