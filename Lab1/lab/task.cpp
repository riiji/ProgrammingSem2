#include "pch.h"
#include "task.h"

void increaser(double& number, const double amount)
{
	number += amount;
}

void increaser(double* number, const double amount)
{
	(*number) += amount;
}

void fraction_part_of_number(double& number)
{
	number = number - static_cast<int>(number);
}

void fraction_part_of_number(double* number)
{
	(*number) = (*number) - static_cast<int>(*number);
}

auto complex::operator==(const complex value) const -> bool
{
	return this->re == value.re && this->im == value.im;
}

complex::complex(const double re, const double im)
{
	this->re = re;
	this->im = im;
}

void complex::adjust()
{
	this->im = -this->im;
}

bool point::operator==(const point a) const
{
	return this->x == a.x && this->y == a.y;
}

point::point(const double x, const double y)
{
	this->x = x;
	this->y = y;
}

vector::vector(const double x, const double y)
{
	this->x = x;
	this->y = y;
}

bool square::operator==(const square a) const
{
	return this->a == a.a && this->b == a.b;
}

square::square(const point a, const point b)
{
	this->a = a;
	this->b = b;
}

void square::move(const vector vec)
{
	this->a.x += vec.x;
	this->b.x += vec.x;

	this->a.y += vec.y;
	this->b.y += vec.y;
}
