#include "methods.h"
#include <valarray>
#include <iostream>

Vector2D::Vector2D()
{
	this->x = 0;
	this->y = 0;
}

Vector2D::Vector2D(const double x, const double y)
{
	this->x = x;
	this->y = y;
}

double Line::square()
{
	return 0;
}

double Line::perimeter()
{
	return std::sqrt(dir.x*dir.x+dir.y*dir.y);
}

void Line::draw()
{
	std::cout << "origin point: x: " << origin.x << " y: " << origin.y << std::endl << "vector: x: " << dir.x << " y:" << dir.y << std::endl;
}

void Line::initFromDialog()
{
	double pX, pY;
	double vX, vY;
	std::cout << "input origin point x: ";
	std::cin >> pX;

	std::cout << "input origin point y: ";
	std::cin >> pY;

	std::cout << "input vector x: ";
	std::cin >> vX;

	std::cout << "input vector y: ";
	std::cin >> vY;

	this->origin.x = pX;
	this->origin.y = pY;

	this->dir.x = vX;
	this->dir.y = vY;
}

const char* Line::classname()
{
	return "line";
}

unsigned Line::size()
{
	return perimeter();
}

double Line::mass()
{
	return 0;
}

Vector2D Line::position()
{
	return Vector2D((this->origin.x+this->dir.x)/2, (this->origin.y+this->dir.y)/2);
}

bool Line::operator==(IPhysObject& ob)
{
	return mass() == ob.mass();
}

bool Line::operator<(IPhysObject& ob)
{
	return mass() < ob.mass();
}
