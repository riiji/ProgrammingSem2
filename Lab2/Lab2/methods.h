#pragma once
#include <ostream>

class complex
{
public:
	complex();
	complex(const complex& number);
	complex(double re, double im);
	
	double re, im;

	double length() const;
	
	complex operator+(const complex& dt) const;
	complex operator*(const complex& dt) const;
	friend std::ostream& operator<<(std::ostream& os, const complex& dt);
};


