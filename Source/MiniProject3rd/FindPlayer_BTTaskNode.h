// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FindPlayer_BTTaskNode.generated.h"

/**
 * 
 */
UCLASS()
class MINIPROJECT3RD_API UFindPlayer_BTTaskNode : public UBTTaskNode
{
	GENERATED_BODY()

public:
    void UFindPlayer_BTTask();
	
	UPROPERTY(EditAnywhere)
	FBlackboardKeySelector PlayerKey;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)override;
	
	
};
