#include "pch.h"
#include "CppUnitTest.h"
#include "../lab/task.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ComplexTest
{
	TEST_CLASS(Complex)
	{
	public:
		
		TEST_METHOD(MultiplyComplexTest1)
		{
			const complex tested(1,2);

			const double multiply_value = 2;

			const complex expected(2, 2);

			const complex result = tested * multiply_value;

			if (expected == result)
				Assert::AreEqual(true, true);
			else
				Assert::AreEqual(false, true);
		}

		TEST_METHOD(MultiplyComplexTest2)
		{
			const complex tested(1, 2);

			const complex multiply_value(3, 4);

			const complex expected(-5, 10);

			const complex result = tested * multiply_value;

			if (expected == result)
				Assert::AreEqual(true, true);
			else
				Assert::AreEqual(false, true);
		}

		TEST_METHOD(AddComplexTest1)
		{
			const complex tested(2, 4);

			const complex add_value(1, 9);

			const complex expected(3, 13);

			const complex result = tested + add_value;

			if (expected == result)
				Assert::AreEqual(true, true);
			else
				Assert::AreEqual(false, true);
		}

		TEST_METHOD(LengthComplexTest1)
		{
			const complex tested(1, 1);

			const int expected = 1 + 7 + 1 + 1 + 7;

			Assert::AreEqual(tested.length(), expected);
		}

		TEST_METHOD(PrintTest1)
		{
			const complex tested(6, -2);

			const std::string expected = "6.000000-2.000000i";

			Assert::AreEqual(tested.to_string(), expected);
		}
	};
}
