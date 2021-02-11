// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"


UCLASS()
class TD_PROTOTYPE_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveToGoal();

	
	UFUNCTION(BlueprintCallable)
		virtual void GiveDamage(float dmg);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CurrentHealth = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxHealth = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HealthPercentage;
private:

	UPROPERTY(EditAnywhere)
		int CurrentGoal = 1;

	UPROPERTY(EditAnywhere)
		float GoalAcceptanceRadius = 100.f;

	TArray<AActor*> Goals;

};
