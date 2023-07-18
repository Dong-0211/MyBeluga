#include "DeerCreature.h"

FString UDeerCreature::CPP_Hello()
{
	return HelloMsg;
}

FName UDeerCreature::CPP_GetName()
{
	return Name;
}

void UDeerCreature::BOTH_Update_Implementation_Implementation()
{
	HelloMsg = HelloMsg.ToUpper();
}