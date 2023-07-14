//#include "BelugaMinimal.h"
//#include "Misc/AutomationTest.h"
//
//IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
//
//bool FBelugaStringTest::RunTest(const FString& Parameters)
//{
//	// 생성
//		// char		"asdf"
//		// wchar	L"asdf"
//		// tchar	TEXT("asdf")
//	FString char_("char");
//
//	// 대입 연산자 = 
//
//	// Printf
//
//	// Format
//		// FStringFormatNamedArguments
//		// FStringFormatOrderedArguments
//
//	// operator []
//
//	// 대소비교
//
//	// TCHAR* 얻기
//	// operator*
//
//	// 길이 구하기
//	FString str1("apple");
//	int a = str1.Len();
//
//	// Replace
//	FString str2("a");
//	FString str3("b");
//	//FString str4 = FString::Replace(str2, str3, ESearchCase::IgnoreCase);
//	// Insert
//
//	// clear
//
//	// Split
//
//	// IsEmpty
//
//	// Shrink
//
//	// RemoveAt
//
//	// find 로 인덱스
//
//	// Left
//	// Mid
//	// Right
//
//	// 대문자로 변환, 소문자로 변환
//
//// Printf
//// Format
//	//FStringFormatNamedArguments
//	//FStringFormatOrderedArguments
//	return true;
//}
//
//bool FBelugaStringTest::RunTest(const FString& Parameters)
//{
//	// 생성, 대입
//	{
//		FString strChar("char");
//		FString strWChar(L"wchar");
//		FString strTChar(TEXT("wchar"));
//
//		FString strChar = "char";
//		strWChar = "wchar";
//		strTChar = TEXT("wchar");
//	}
//
//	// Printf
//	{
//		TestEqual(TEXT("Printf"), FString::Printf(TEXT("%d %f %s"), 123, 1.0f, TEXT("string")), TEXT("123 1.000000 string"));
//	}
//
//	// Format
//	{
//		{
//			FStringFormatNamedArguments NamedArgs;
//			NamedArgs.Add(TEXT("First"), 123);
//			NamedArgs.Add(TEXT("Second"), 1.0f);
//			NamedArgs.Add(TEXT("Third"), TEXT("string"));
//
//			TestEqual(TEXT("FormatNamedArguments"), FString::Format(TEXT("{First} {Second} {Third}"), NamedArgs), TEXT("123 1.000000 string"));
//		}
//		
//		{
//			FStringFormatOrderedArguments OrderedArgs;
//			OrderedArgs.Add(123);
//			OrderedArgs.Add(1.0f);
//			OrderedArgs.Add(TEXT("string"));
//			
//			TestEqual(TEXT("FormatOrderedArgs"), FString::Format(TEXT("{0} {1} {2}"), OrderedArgs), TEXT("123 1.000000 string"));
//		}
//	}
//
//	FString strApple(TEXT("Apple"));
//	FString strBanana(TEXT("Banana"));
//
//	// Operators
//	{
//		// []
//		{
//			TestEqual(TEXT("Operator []"), strApple[0], L'A');
//		}
//
//		// < >
//		{
//			TestTrue(TEXT("Operator <"), strApple < strBanana);
//		}
//	}
//
//	return true;
//}
//
//IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaNameTest, "Beluga.Name", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
//
//bool FBelugaNameTest::RunTest(const FString& Parameters)
//{
//	return true;
//}
//
//// 생성
//		// char		"asdf"
//		// wchar	L"asdf"
//		// tchar	TEXT("asdf")
//
//	// 대입 연산자 = 
//
//	// Printf
//
//	// Format
//		// FStringFormatNamedArguments
//		// FStringFormatOrderedArguments
//
//	// operator []
//
//	// 대소비교
//
//	// TCHAR* 얻기
//	// operator*
//
//	// 길이 구하기
//
//	// Replace
//
//	// Insert
//
//	// clear
//
//	// Split
//
//	// IsEmpty
//
//	// Shrink
//
//	// RemoveAt
//
//	// find 로 인덱스
//
//	// Left
//	// Mid
//	// Right
//
//	// 대문자로 변환, 소문자로 변환
//
//// Printf
//// Format
//	//FStringFormatNamedArguments
//	//FStringFormatOrderedArguments