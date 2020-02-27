#include "methods.h"

complex::complex()
{
	this->re = 0;
	this->im = 0;
}

complex::complex(const complex& number)
{
	this->re = number.re;
	this->im = number.im;
}

complex::complex(const double re, const double im)
{
	this->re = re;
	this->im = im;
}

double complex::length() const
{
	return sqrt(this->re * this->re + this->im * this->im);
}

complex complex::operator+(const complex& dt) const
{
	return complex(this->re+dt.re, this->im+dt.im);
}

complex complex::operator*(const complex& dt) const
{
	return complex(this->re*dt.re-this->im*dt.im, this->re*dt.im+dt.re*this->im);
}

std::ostream& operator<<(std::ostream& os, const complex& dt)
{
	if (dt.im >= 0)
		os << dt.re << "+" << dt.im << "i";
	else
		os << dt.re << "-" << -dt.im << "i";
	return os;
} 
