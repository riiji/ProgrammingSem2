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

	bool operator == (complex) const;

	complex(double, double);

	void adjust();
};

class point
{
public:
	double x;
	double y;

	bool operator == (point) const;
	
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

	bool operator == (square) const;
	
	square(point, point);

	void move(vector vec);
};






