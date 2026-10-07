#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t = h(3, 2);   
			Assert::AreEqual(t, 5.);
		}

		TEST_METHOD(TestMethod2)
		{
			double t = h(2, 2);   
			Assert::AreEqual(t, 0.);
		}

		TEST_METHOD(TestMethod3)
		{
			double t = h(1, 3);   
			Assert::AreEqual(t, -8.);
		}
	};
}

