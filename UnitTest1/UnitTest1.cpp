#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Casual)
		{
			int n = 10;
			int* a = new int[n]{1, 2, 3, 4, 5 ,6 ,7, 8, 9 ,10};
			Sort(a, n);
			Assert::AreEqual(a[n - 1], 1);
			Assert::AreEqual(a[0], 10);

		}

		TEST_METHOD(Template)
		{
			int n = 10;
			int* a = new int[n] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			int sored = Sort1(a, n);
			Assert::AreEqual(a[n - 1], 1);
			Assert::AreEqual(a[0], 10);

		}

	};
}
