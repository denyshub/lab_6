#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1_rec/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(number_test)
		{
			const int size = 5;
			int arr[size]{ -1, 2, 4, 5, 1 };
			int num = number_of(arr, size, 0, 0);
			Assert::AreEqual(num, 2);
		}

		TEST_METHOD(sum_test)
		{
			const int size = 5;
			int arr[size]{ -1, 2, 4, 5, 1 };
			int sum = sum_of(arr, size, 0, 0);
			Assert::AreEqual(sum, 6);
		}

		TEST_METHOD(zero_test)
		{
			const int size = 5;
			int arr[size]{ -1, 2, 4, 5, 1 };
			zero(arr, size, 0);
			Assert::AreEqual(arr[1], 0);
			Assert::AreEqual(arr[2], 0);
		}
	};
}
