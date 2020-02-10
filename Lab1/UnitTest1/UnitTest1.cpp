#include "pch.h"
#include "CppUnitTest.h"
#include "../lab/task.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

const double diff = 0.1;

namespace LabTests
{
	TEST_CLASS(IncreaserTest)
	{
	public:
		TEST_METHOD(LinkerValidTest1)
		{
			double number = 52.25;
			const double increaser_value = .723;

			const double expected = number + increaser_value;

			increaser(number, increaser_value);

			Assert::AreEqual(expected, number, diff);
		}

		TEST_METHOD(PointerValidTest1)
		{
			double number = 52.25;
			const double increaser_value = .723;

			const double expected = number + increaser_value;

			increaser(&number, increaser_value);

			Assert::AreEqual(expected, number, diff);
		}
	};

	TEST_CLASS(FractionPartOfNumberTests)
	{
	public:
		TEST_METHOD(LinkerValidTest1)
		{
			double number = 13.62;

			const double expected = .62;

			fraction_part_of_number(number);

			Assert::AreEqual(expected, number, diff);
		}

		TEST_METHOD(PointerValidTest1)
		{
			double number = 13.62;

			const double expected = .62;

			fraction_part_of_number(&number);

			Assert::AreEqual(expected, number, diff);
		}
	};

	TEST_CLASS(AdjustComplexTests)
	{
	public:
		TEST_METHOD(ValidTest)
		{
			complex a(13, 25);
			const complex expected(13, -25);

			a.adjust();

			if (a == expected)
				Assert::AreEqual(1, 1);
			else
				Assert::AreEqual(0, 1);
		}
	};

	TEST_CLASS(SqaureTests)
	{
	public:
		TEST_METHOD(MoveTest)
		{
			square a = square(point(0, 0), point(1, 1));

			a.move(vector(1, 1));

			const square expected = square(point(1, 1), point(2, 2));

			if (a == expected)
				Assert::AreEqual(1, 1);
			else
				Assert::AreEqual(0, 1);
		}
	};
}
