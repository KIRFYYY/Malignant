// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Mutants/MutantCharacter.h"
#include "../Mutants/BoneBladeMutantCharacter.h"
#include "../Mutants/FourArmMutantCharacter.h"
#include "MutantMapComponent.generated.h"


//Storage for all mutant class references 
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MALIGNANT_API UMutantMapComponent : public UActorComponent
{
	GENERATED_BODY()




	/* methods */
public:

	// Sets default values for this component's properties
	UMutantMapComponent();

	//Accessor for MutantClassMap
	UFUNCTION(BlueprintCallable)
		TMap<TEnumAsByte<EMutantState>, TSubclassOf<AMutantCharacter>> GetMap();

	/* members */
public:



	/* methods */
protected:

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	/* members */
protected:

	//TMap to hold mutant class references
	UPROPERTY()
	TMap<TEnumAsByte<EMutantState>, TSubclassOf<AMutantCharacter>> MutantClassMap;


	/* methods */
private:


	/* members */
private:



		
};