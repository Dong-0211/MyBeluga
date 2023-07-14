#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaArrayTest, "Beluga.Array", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaArrayTest::RunTest(const FString& Parameters)
{
	TArray<int32> arr = { 1, 2, 3 };
	arr.Add(4);
	arr.Add(4);
	TArray<int32> arr2 = { 1,2,3,4,4 };
	TestEqual(TEXT("TArray same"), arr, arr2);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaMapTest, "Beluga.Map", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaMapTest::RunTest(const FString& Parameters)
{
	TMap<FName, FString> map = { {TEXT("A"), TEXT("Apple")}, { TEXT("B"), TEXT("Banana") }, { TEXT("C"), TEXT("Cherry") } };
	FString* result = map.Find(TEXT("A"));
	FString test(TEXT("Apple"));
	TestEqual(TEXT("Map value same"), test, *result);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSetTest, "Beluga.Set", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaSetTest::RunTest(const FString& Parameters)
{
	TSet<int32> set = { 1, 2, 3 };
	set.Add(1);
	TSet<int32> set2 = { 1,3,4 };
	set2.Add(2);
	set2.Remove(4);
	TestEqual(TEXT("TSet same"), set, set2);

	return true;
}