#include "methods.h"

vector::vector()
{
	this->x = 0;
	this->y = 0;
}

vector::vector(const double x, const double y)
{
	this->x = x;
	this->y = y;
}

point::point()
{
	this->x = 0;
	this->y = 0;
}

point::point(const double x, const double y)
{
	this->x = x;
	this->y = y;
}

square::square()
{
	this->a.x = 0;
	this->a.y = 0;

	this->angle = 0;
	this->side = 0;
}

square::square(const point a, const double side, const double angle)
{
	this->a.x = a.x;
	this->a.y = a.y;

	this->angle = angle;
	this->side = side;
}

square::square(const square& obj)
{
	this->a.x = obj.a.x;
	this->a.y = obj.a.y;

	this->angle = obj.angle;
	this->side = obj.side;
}

void square::multiplyside(const double multiplier)
{
	this->side *= multiplier;
}

void square::move(const vector dir)
{
	this->a.x += dir.x;
	this->a.y += dir.y;
}

bool square::operator<(const square& dt) const
{
	return this->side < dt.side;
}

bool square::operator>(const square& dt) const
{
	return this->side > dt.side;
}

bool square::operator!=(const square& dt) const
{
	return this->side != dt.side;
}

bool square::operator==(const square& dt) const
{
	return this->side == dt.side;
}
