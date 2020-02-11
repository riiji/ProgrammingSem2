#pragma once

class vector
{
public:

	double x;
	double y;

	vector();

	vector(double, double);
};

class square
{
public:
	double x, y{};
	double side_size;
	double angle;

	square();

	square(const square&);

	square(double, double, double, double);

	bool operator==(const square&) const;

	bool operator!=(const square&) const;

	bool operator<(const square&) const;

	bool operator>(const square&) const;

	square operator+(const vector) const;

	square operator*(const double) const;
};
