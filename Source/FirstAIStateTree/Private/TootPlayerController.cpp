// Fill out your copyright notice in the Description page of Project Settings.


#include "TootPlayerController.h"





ATootPlayerController::ATootPlayerController(const FObjectInitializer &ObjectInitializer)
    : Super(ObjectInitializer)
{
    SetGenericTeamId(FGenericTeamId(2));

}

void ATootPlayerController::SetGenericTeamId(const FGenericTeamId &TeamID)
{
    if(_teamId != TeamID)
    {
        _teamId = TeamID;
    }

}
