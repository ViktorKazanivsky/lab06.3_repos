#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3/Lab_06_3.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int array[n] = { 1, 2, 3, 4, 5 };
			int expected_result = 1;

			int result = FindMin(array, n);
			Assert::AreEqual(expected_result, result);
		}
	};
}
