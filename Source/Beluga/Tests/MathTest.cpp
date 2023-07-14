#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaVectorTest, "Beluga.Vector", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaVectorTest::RunTest(const FString& Parameters)
{
	FVector vec = FVector::OneVector;
	FVector vec2 = FVector::ZeroVector;
	vec2 += FVector::UpVector;
	vec2 += FVector::ForwardVector;
	vec2 += FVector::RightVector;
	TestTrue(TEXT("FVector (1,1,1)"), vec == vec2);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaRotatorTest, "Beluga.Rotator", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaRotatorTest::RunTest(const FString& Parameters)
{
	FRotator rot(FRotator(1.0, 1.0, 1.0));
	FRotator rot2(FRotator(2.0, 1.0, 1.0));
	rot.Add(1.0, 0.0, 0.0);
	TestTrue(TEXT("FRotator (2.0, 1.0, 1.0) "), rot == rot2);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaMatrixTest, "Beluga.Matrix", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaMatrixTest::RunTest(const FString& Parameters)
{
	FMatrix mat(FMatrix::Identity);
	FMatrix mat2(FMatrix::Identity);
	mat2.M[0][0] = 1.0f;
	TestFalse(TEXT("FMatrix different"), mat == mat2);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaTransformTest, "Beluga.Transform", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaTransformTest::RunTest(const FString& Parameters)
{
	FTransform trans(FTransform::Identity);
	FTransform trans2(FTransform::Identity);
	trans2.TransformPosition(FVector::ZeroVector);
	trans2.TransformRotation(FQuat::Identity);
	trans2.TransformVector(FVector::ZeroVector);
	TestEqual(TEXT("FTransform"), trans, trans2);

	return true;
}