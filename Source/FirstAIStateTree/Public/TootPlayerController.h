// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "GenericTeamAgentInterface.h"

#include "TootPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTAISTATETREE_API ATootPlayerController : public APlayerController , public IGenericTeamAgentInterface
{
	GENERATED_BODY()
	

   public:
   explicit ATootPlayerController(const FObjectInitializer& ObjectInitializer) ;


    void SetGenericTeamId(const FGenericTeamId &TeamID) override;


    FGenericTeamId GetGenericTeamId() const override { return _teamId;}

	
    private:

    FGenericTeamId _teamId;



};
