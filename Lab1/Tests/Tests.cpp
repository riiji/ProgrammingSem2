#include "pch.h"
#include "CppUnitTest.h"
#include "../CPlus/task.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		
		TEST_METHOD(Test_method1)
		{
			double x = 2.45;
			const double v = 1.32;

			const double check = x + v;
			
			increaser(x, v);
			
			Assert::AreEqual(check, x);
		}
	};
}
