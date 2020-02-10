#include "pch.h"
#include "../CPlus/task.h"


TEST(IncreaserTest, LinkTest1)
{
	double number = 13.62;
	const double increaser_value = .845;

	const double expected = number + increaser_value;

	increaser(number, increaser_value);
	
	EXPECT_DOUBLE_EQ(expected, number);
}

TEST(IncreaserTest, PointerTest1)
{
	double number = 13.62;
	const double increaser_value = .845;

	const double expected = number + increaser_value;

	increaser(&number, increaser_value);

	EXPECT_DOUBLE_EQ(expected, number);
}

TEST(FractionPartOfNumber, LinkTest1)
{
	double number = 13.62;

	const double expected = .62;

	fraction_part_of_number(number);
	
	EXPECT_DOUBLE_EQ(expected, number);
}

TEST(FractionPartOfNumber, PointerTest1)
{
	double number = 13.62;

	const double expected = .62;

	fraction_part_of_number(&number);

	EXPECT_DOUBLE_EQ(expected, number);
}

TEST(AdjustComplexNumber, LinkTest1)
{
	complex number = complex(13, 23);

	complex expected = complex(13, -23);

	number.adjust_complex_number();
}