#include "square.h"

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

square::square()
{
	this->x = 0;
	this->angle = 0;
	this->side_size = 0;
}

square::square(const square& left)
{
	this->x = left.x;
	this->side_size = left.side_size;
	this->angle = left.angle;
}

square::square(const double x, const double y, const double side, const double angle)
{
	this->x = x;
	this->y = y;
	this->side_size = side;
	this->angle = angle;
}

bool square::operator==(const square& left) const
{
	return this->side_size == left.side_size;
}

bool square::operator!=(const square& left) const
{
	return this->side_size != left.side_size;
}

bool square::operator<(const square& left) const
{
	return this->side_size < left.side_size;
}

bool square::operator>(const square& left) const
{
	return this->side_size > left.side_size;
}

square square::operator+(const vector left) const
{
	return square(this->x + left.x, this->y + left.y, this->side_size, this->angle);
}

square square::operator*(const double left) const
{
	return square(this->x, this->y, this->side_size * left, this->angle);
}
