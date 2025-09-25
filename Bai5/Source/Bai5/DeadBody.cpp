// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadBody.h"

#include "Bai5Character.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"


// Sets default values
ADeadBody::ADeadBody()
{
	bReplicates = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	//SetRootComponent(Sphere);
	Sphere->SetSphereRadius(500.0);
	//Sphere->SetHiddenInGame(false);
	
	StaticMeshBodyDead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshBodyDead"));
	StaticMeshBone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshBone"));
	StaticMeshBodyDead->SetupAttachment(Sphere);
	StaticMeshBone->SetupAttachment(StaticMeshBodyDead);
}
void ADeadBody::OnOverlapBegin(class UPrimitiveComponent* newComp, class AActor* OtherActor,
							   class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IsValid(Cast<ABai5Character>(OtherActor)))
	{
		Cast<ABai5Character>(OtherActor)->DeadBodyReported(this);
	}
}

void ADeadBody::OnOverlapEnd(class UPrimitiveComponent* newComp, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (IsValid(Cast<ABai5Character>(OtherActor)))
	{
		Cast<ABai5Character>(OtherActor)->EndDeadBodyReported(this);
		// UKismetSystemLibrary::PrintString(this,	"EndOverlap");
	}
}

// void ADeadBody::OnOverlapEnd(UPrimitiveComponent* newComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
// {
// 	if (IsValid(Cast<ABai5Character>(OtherActor)))
// 	{
// 		UKismetSystemLibrary::PrintString(this,	"EndOverlap");
// 		OnEndOverlapEvent(OtherActor); // Gọi sự kiện cho Blueprint
// 	}
// }

// Called when the game starts or when spawned
void ADeadBody::BeginPlay()
{
	Super::BeginPlay();
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ADeadBody::OnOverlapBegin);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &ADeadBody::OnOverlapEnd);
}

// Called every frame
void ADeadBody::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADeadBody::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ADeadBody, Color);
}

