#include "BelugaMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"



UCLASS()
class AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyGameModeBase();

	UPROPERTY()
	int32 Number;

};