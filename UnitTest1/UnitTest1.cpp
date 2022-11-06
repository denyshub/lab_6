#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Arithmetic_mean)
		{
			const int n = 10;
			int arr[n]{ 10, -11, 12, 43, 14, 51, 12,32,41, 57 };
			int sum = sum_elem(arr, n);// 181
			int num = number_of(arr, n); // 5 
			double average = arithmetic_mean(sum, num);
			Assert::AreEqual(average, 36.2);

		}
	};
}
