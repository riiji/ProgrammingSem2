#include "methods.h"

vector::vector(const int x, const int y)
{
	this->x = x;
	this->y = y;
}

point::point()
{
	this->x = 0;
	this->y = 0;
}

point::point(const int x, const int y)
{
	this->x = x;
	this->y = y;
}

square::square(const point a, const point b, const point c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

complex::complex(const int re, const int im)
{
	this->re = re;
	this->im = im;
}

void methods::increase(double& value, const double amount)
{
	value += amount;
}

void methods::increase(double* value, const double amount)
{
	(*value) += amount;
}

void methods::fractionremover(double& value)
{
	value = static_cast<int>(value);
}

void methods::fractionremover(double* value)
{
	(*value) = static_cast<int>(*value);
}

void methods::adjustcomplex(complex& value)
{
	value.im = -value.im;
}

void methods::adjustcomplex(complex* value)
{
	value->im = -value->im;
}

void methods::movesquare(square& obj, const vector dir)
{
	obj.a.x += dir.x;
	obj.b.x += dir.x;
	obj.c.x += dir.x;

	obj.a.y += dir.y;
	obj.b.y += dir.y;
	obj.c.y += dir.y;
}

void methods::movesquare(square* obj, const vector dir)
{
	obj->a.x += dir.x;
	obj->b.x += dir.x;
	obj->c.x += dir.x;

	obj->a.y += dir.y;
	obj->b.y += dir.y;
	obj->c.y += dir.y;
}

std::ostream& operator<<(std::ostream& os, const square& dt)
{
	os << "point a: " << dt.a.x << " " << dt.a.y << std::endl;
	os << "point b: " << dt.b.x << " " << dt.b.y << std::endl;
	os << "point c: " << dt.c.x << " " << dt.c.y << std::endl;

	return os;
}

std::ostream& operator<<(std::ostream& os, const complex& dt)
{
	if (dt.im >= 0)
		os << dt.re << "+" << dt.im << "i";
	else
		os << dt.re << "-" << -dt.im << "i";
	return os;
}
