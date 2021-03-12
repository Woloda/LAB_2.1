#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2.1/Product.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab21
{
	TEST_CLASS(UnitTestLab21)
	{
	public:
		
		TEST_METHOD(Unit_Test_power)
		{
			Product a(200, 2.3);
			Assert::AreEqual(a.power(), 4600.0);
		}
	};
}
