#pragma once
#include <ostream>

class vector
{
public:
	vector(int x, int y);
	
	int x, y;
};

class point
{
public:
	point();
	point(int x, int y);
	
	int x, y;
};

class square
{
public:
	square(point a, point b, point c);
	
	point a,b,c;

	friend std::ostream& operator<<(std::ostream& os, const square& dt);
};

class complex
{
public:
	complex(int re, int im);

	int re, im;

	friend std::ostream& operator<<(std::ostream& os, const complex& dt);
};

static class methods
{
public:
	static void increase(double& value, double amount);
	static void increase(double* value, double amount);

	static void fractionremover(double& value);
	static void fractionremover(double* value);

	static void adjustcomplex(complex& value);
	static void adjustcomplex(complex* value);

	static void movesquare(square& obj, vector dir);
	static void movesquare(square* obj, vector dir);
};