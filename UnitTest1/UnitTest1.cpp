#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(number)
		{
			int arr[5]{ -1,4,5,7,8 };
			int num = number_of(arr, 5);
			Assert::AreEqual(num, 2);
		}

		TEST_METHOD(sum)
		{
			int arr[5]{ -1,4,5,7,8 };
			int num = sum_elem(arr, 5);
			Assert::AreEqual(num, 12);
		}

		TEST_METHOD(zero_test)
		{
			int arr[5]{ -1,4,5,7,8 };
			zero(arr, 5);
			Assert::AreEqual(arr[1], 0);
			Assert::AreEqual(arr[4], 0);

		}
	};
}
