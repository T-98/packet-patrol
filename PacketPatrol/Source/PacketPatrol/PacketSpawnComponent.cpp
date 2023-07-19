// Fill out your copyright notice in the Description page of Project Settings.


#include "PacketSpawnComponent.h"

// Sets default values for this component's properties
UPacketSpawnComponent::UPacketSpawnComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPacketSpawnComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPacketSpawnComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPacketSpawnComponent::StartListeningPort()
{
	//AGeometryCollectionActor* packet = GetWorld()->SpawnActor<AGeometryCollectionActor>(BP_GC_Packet::StaticClass());
	//
	//Networking
	//NetworkTraffic.
}

const FString& UPacketSpawnComponent::Choose(const TMap<FString, double>& WeightMap, int PacketNum)const
{
	double sum = 0;

	for(const auto&[item, weight] : WeightMap)
	{
		sum+= weight;
	}

	check(0. < sum);

	//float noise =  FMath::PerlinNoise1D(PacketNum * 1.5);
	//double r = (noise+1) * sum / 2;
	double r = FMath::RandRange(0. , sum);
	double so_far = 0.;

	for(const auto &[item, weight]: WeightMap)
	{
		so_far+=weight;
		if(r <= so_far) return item;
	}

	UE_LOG(LogTemp, Error, TEXT("Inexplicably couldn't choose an item"));
	verify(false);

	static FString fake{};
	return fake;
}
