#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeerCreature.generated.h"

/** Please add a class description */
UCLASS(Blueprintable, BlueprintType)
class BELUGA_API UDeerCreature : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	FString CPP_Hello();

	UFUNCTION(BlueprintPure)
	FName CPP_GetName();

	// BlueprintImplementableEvent
	// 에디터의 블루프린트에서 구현해야하는 Function
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_SetHelloMessage();

	// BlueprintNativeEvent
	// cpp파일에도 구현되어있고, 플루프린트에서도 구현이 가능한 Function
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BOTH_Update_Implementation();


public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString HelloMsg;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName Name;
};