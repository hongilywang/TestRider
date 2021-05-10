#include "FPSExtractionZone.h"

#include "FPSCharacter.h"

AFPSExtractionZone::AFPSExtractionZone()
{
	OverlapComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComponent"));
	RootComponent = OverlapComponent;
	OverlapComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	OverlapComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	OverlapComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	OverlapComponent->SetBoxExtent(FVector(200));
	OverlapComponent->OnComponentBeginOverlap.AddDynamic(this, &AFPSExtractionZone::HandleOverlap);
	OverlapComponent->SetHiddenInGame(false);
}

void AFPSExtractionZone::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Overlap!"));
}