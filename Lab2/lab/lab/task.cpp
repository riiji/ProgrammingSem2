#include "pch.h"
#include "task.h"

complex::complex()
{
	this->im = 0;
	this->re = 0;
}

complex::complex(const double re, const double im)
{
	this->re = re;
	this->im = im;
}

complex::complex(const complex& a)
{
	this->re = a.re;
	this->im = a.im;
}

std::string complex::to_string() const
{
	return std::to_string(this->re) + std::to_string(this->im) + "i";
}

complex complex::operator+(const complex& left) const
{
	return complex(this->re + left.re, this->im + left.im);
}

complex complex::operator+(const double& left) const
{
	return complex(this->re + left, this->im);
}

complex complex::operator*(const complex& left) const
{
	return complex(this->re*left.re-this->im*left.im, this->im*left.re + this->re*left.im);
}

complex complex::operator*(const double left) const
{
	return complex(this->re * left, this->im);
}

bool complex::operator==(const complex& left) const
{
	return this->re == left.re && this->im == left.im;
}

int complex::length() const
{
	return this->to_string().length();
}
