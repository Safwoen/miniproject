// Fill out your copyright notice in the Description page of Project Settings.


#include "FindPlayer_BTTaskNode.h"
#include "Kismet/GameplayStatics.h"
#include "AIModule/Classes/BehaviourTree/BlackboardComponent.h"
UFindPlayer_BTTask::UFindPlayer_BTTask()
{
	NodeName - "FindPlayer";

}

EBTNodeResult::Type UFindPlayer_BTTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
	{
		auto BlackBoard = OwnerComp.GetBlackboardComponent();
		Blackboard->SetValueAsObject(PlayerKey.SelectedKeyName, Player);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
