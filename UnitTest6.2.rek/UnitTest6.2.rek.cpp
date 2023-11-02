#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2_rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rek
{
	TEST_CLASS(UnitTest62rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 15;
			int a = 0, b = 25;

			int arr[SIZE]{};
			FullArr(arr, SIZE, a, b);
			int sumArr = SumArr(arr, SIZE);

			Assert::AreEqual(sumArr, 82);

		}
	};
}
