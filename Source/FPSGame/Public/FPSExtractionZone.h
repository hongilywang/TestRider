#pragma once

#include "CoreMinimal.h"

#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "FPSExtractionZone.generated.h"

UCLASS()
class FPSGAME_API AFPSExtractionZone : public AActor
{
	GENERATED_BODY()

public:
	AFPSExtractionZone();	

protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UBoxComponent* OverlapComponent;

	UFUNCTION()
	void HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
};