#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyClass1.generated.h"

UCLASS()
class MINIPROJECT3RD_API AMyClass1 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this empty's properties
	AMyClass1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
