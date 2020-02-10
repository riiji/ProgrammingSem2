#pragma once
#include <string>


class complex
{
public:
	double re, im;

	complex();

	complex(double, double);

	complex(const complex&);

	std::string to_string() const;

	complex operator+(const complex&) const;

	complex operator+(const double&) const;

	complex operator*(const complex&) const;

	complex operator*(double) const;

	bool operator==(const complex&) const;

	int length() const;
	
};
