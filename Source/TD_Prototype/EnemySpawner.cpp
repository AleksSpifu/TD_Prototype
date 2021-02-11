// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemySpawner.h"
#include "Enemy.h"


// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	/*SpawnLocation = GetOwner()->GetActorLocation();
	SpawnRotation = GetOwner()->GetActorRotation();*/

}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Timer += DeltaTime;
	if (Timer >= DelayBetweenSpawns) {
		if (EnemiesSpawned < AmountOfEnemies)
			SpawnEnemy();
			Timer = 0;
			EnemiesSpawned++;
	}
}

void AEnemySpawner::SpawnEnemy()
{
	const FVector Location = GetActorLocation();
	const FRotator Rotation = GetActorRotation();
	GetWorld()->SpawnActor<AEnemy>(ActorToSpawn, Location, Rotation);
	UE_LOG(LogTemp, Warning, TEXT("Spawning..."));
}

