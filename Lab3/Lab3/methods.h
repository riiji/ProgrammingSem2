#pragma once

class vector
{
public:
	vector();
	vector(double x, double y);
	double x, y;
};


class point
{
public:
	point();
	point(double x, double y);
	double x, y;
};

class square
{
public:
	square();
	square(point a, double side, double angle);
	square(const square& obj);
	
	point a;
	double side;
	double angle;

	void multiplyside(double multiplier);
	void move(vector dir);
	
	bool operator<(const square& dt) const;
	bool operator>(const square& dt) const;
	bool operator!=(const square& dt) const;
	bool operator==(const square& dt) const;
};