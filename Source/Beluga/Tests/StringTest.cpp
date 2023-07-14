#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

//IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
//
//bool FBelugaStringTest::RunTest(const FString& Parameters)
//{
//	// 생성, 대입
//	{
//		FString strChar("char");
//		FString strWChar(L"wchar");
//		FString strTChar(TEXT("wchar"));
//
//		strChar = "char";
//		strWChar = "wchar";
//		strTChar = TEXT("wchar");
//	}
//
//	// Printf
//	{
//		//TestEqual(TEXT("Printf"), FString::Printf(TEXT("%d %f %s"), 123, 1.0f, TEXT("string")), TEXT("123 1.000000 string"));
//		TestEqual(TEXT("Printf"), FString::Printf(TEXT("%d %.2f %s"), 1, 1.00f, TEXT("a")), TEXT("1 1.00 a"));
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
//	// Equals
//	{
//		FString a(TEXT("A"));
//		FString b(TEXT("a"));
//
//		TestFalse(TEXT("Equals"), a.Equals(b, ESearchCase::CaseSensitive));
//	}
//
//	// Len
//	{
//		FString str_test(TEXT("Test"));
//		int test_len = str_test.Len();
//		int compare = 4;
//		TestTrue(TEXT("Len"), test_len == compare);
//	}
//
//
//	return true;
//}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaStringTest::RunTest(const FString& Parameters)
{
	// 생성
	FString char_str("asdf");
	FString wchar_str(L"asdf");
	FString tchar_str(TEXT("asdf"));

	// 대입
	FString test1 = char_str;
	FString test2 = wchar_str;
	FString test3 = tchar_str;
	TestTrue(TEXT("Make"), char_str == test1);
	TestTrue(TEXT("Make"), wchar_str == test2);
	TestTrue(TEXT("Make"), tchar_str == test3);

	// Printf
	FString test4(TEXT("apple"));
	TestEqual(TEXT("Printf"), FString::Printf(TEXT("%s"), TEXT("apple")), test4);

	return true;
}

// 생성
		// char		"asdf"
		// wchar	L"asdf"
		// tchar	TEXT("asdf")

	// 대입 연산자 = 

	// Printf

	// Format
		// FStringFormatNamedArguments
		// FStringFormatOrderedArguments

	// operator []

	// 대소비교

	// TCHAR* 얻기
	// operator*

	// 길이 구하기

	// Replace

	// Insert

	// clear

	// Split

	// IsEmpty

	// Shrink

	// RemoveAt

	// find 로 인덱스

	// Left
	// Mid
	// Right

	// 대문자로 변환, 소문자로 변환

// Printf
// Format
	//FStringFormatNamedArguments
	//FStringFormatOrderedArguments


IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaTextTest, "Beluga.Text", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaTextTest::RunTest(const FString& Parameters)
{
	FString string(TEXT("apple"));
	FName name(TEXT("apple"));
	FText text = FText::FromString(string);
	FText text2 = FText::FromName(name);
	TestNotEqual(TEXT("FText different"), text, text2);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaNameTest, "Beluga.Name", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaNameTest::RunTest(const FString& Parameters)
{
	// FName은 언리얼 컨텐츠 브라우저에서 '새로운 에셋의 이름에 접근, 머터리얼의 인스턴스의 파라미터 접근, 스켈레탈 메시컴포넌트의 본에 접근'등을 할때
	// 모두 FName을 사용한다.
	// FName 은 문자열 사용에 있어서 초경량 시스템을 제공한다.
	// FName 은 대소문자를 구분하지 않습니다. 
	// 변경과 조작을 할 수 없습니다.
	// -> static const FName test = FName(TEXT("Test")); 
	//    와 같이 초기화되기때문에 static때문에 접근은 쉽게 가능하지만, const로 인해 변경·조작이 불가능하다.

	// FName 은 소유 스트링 테이블에 대한 인덱스와 인스턴스 번호의 조합으로 저장됨.
	// 언리얼엔진에서 스트링 테이블이란?
	// -> NameTable이라 부르고, 엔진내부에서 문자열 심볼을 효율적으로 관리하기 위한 스트링 테이블이다. 



	// FName두개 자체를 비교
	FName test5(TEXT("apple"), 0);
	FName test6(TEXT("apple"), 0);
	FName test7 = FName(TEXT("banana"), 0);
	FName test8(TEXT("apple"), 1);
	TestEqual(TEXT("FName"), test5, test6);

	// <FName index비교>
	TestTrue(TEXT("Index of FName, 5&6"), test5.CompareIndexes(test6) == test6.CompareIndexes(test5));
	// test5와 test6는 같은 TEXT이기 때문에 Index, 즉 key값이 무조건 같을수 밖에 없으니 True값을 반환함.
	TestFalse(TEXT("Index of FName, 5&7"), test5.CompareIndexes(test7) == test7.CompareIndexes(test5));
	// test5와 test7는 같지 않은 TEXT이기 떄문에 Index, 즉 key값이 무조건 다를 수 밖에 없으니 False값을 반환함.

	// <FName number비교>
	// number는 몇번째로 생성된 인스턴스인지를 판별하는 숫자임
	TestTrue(TEXT("Number of FName, 5&6"), test5.GetNumber() == test6.GetNumber());
	// test5와 test6는 둘다 0번째로 생성된 인스턴스이기 때문에 무조건 True값 반환함.
	TestTrue(TEXT("Number of FName, 5&7"), test5.GetNumber() == test7.GetNumber());
	// test5와 test7는 NameTable은 다르지만, 둘다 각자의 테이블에서 0번째로 생성된 인스턴스의 값만 비교하기 때문에 무조건 True값을 반환함.
	TestFalse(TEXT("Number of FName, 5&8"), test5.GetNumber() == test8.GetNumber());
	// test5와 test8는 NameTable은 같다. 하지만 test5는 0번째 인스턴스이고, test8은 1번째 인스턴스이다. 그래서 두개의 인스턴스값을 비교하면 무조건 False값을 반환함.

	return true;
}