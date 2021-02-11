// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy.h"
#include "EnemyAIController.h"
#include "EnemyGoal.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	/*AEnemyAIController* EnemyAIController = Cast<AEnemyAIController>(GetController());
	AActor* EnemyGoal1 = UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyGoal::StaticClass());
	
	if (EnemyAIController) {
		if (EnemyGoal1) {
		EnemyAIController->MoveToActor(EnemyGoal1);

		}
	}
	TArray <AActor*> EnemyGoals;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyGoal::StaticClass(), EnemyGoals);
	if (EnemyAIController) {
		if (EnemyGoals.Num() > 0) {
			if (CurrentGoal < EnemyGoals.Num()) {
				for (int i = 0; i < EnemyGoals.Num(); i++) {

				}
			}
		}
	}*/

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyGoal::StaticClass(), Goals);
	MoveToGoal();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	HealthPercentage = CurrentHealth / MaxHealth;
	GiveDamage(DeltaTime);
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::MoveToGoal()
{
	AEnemyAIController* EnemyAIController = Cast<AEnemyAIController>(GetController());

	if (EnemyAIController) {
		if (CurrentGoal <= Goals.Num()) {
			for (AActor* Goal : Goals) {
				AEnemyGoal* GoalIterator = Cast<AEnemyGoal>(Goal);
				if (GoalIterator) {
					if (GoalIterator->GetGoalNumber() == CurrentGoal) {
						EnemyAIController->MoveToActor(GoalIterator, GoalAcceptanceRadius, false);
						CurrentGoal++;
						break;
					}
				}
			}
		}
	}
}



void AEnemy::GiveDamage(float dmg)
{
	CurrentHealth -= dmg;
}

