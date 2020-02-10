#pragma once

void increaser(double&, double);

void increaser(double*, double);

void fraction_part_of_number(double&);

void fraction_part_of_number(double*);

class complex
{
public:
	double re;
	double im;

	complex(double, double);

	static void adjust_complex_number(complex&);
	static void adjust_complex_number(complex*);
};

class point
{
public:
	double x;
	double y;

	point(double, double);
};

class vector
{
public:
	double x;
	double y;

	vector(double, double);
};

class square
{
public:
	point a{ 0,0 };
	point b{ 0,0 };

	square(point, point);

	void move(vector vec);
};






