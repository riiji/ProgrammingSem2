#include <iostream>
#include "methods.h"

int main()
{
    double a = 3.23;
	double v = .75;

	methods::increase(&a, v);

    std::cout << a << std::endl;

	methods::fractionremover(a);
	
	std::cout << a << std::endl;

	complex number(3, -2);

	methods::adjustcomplex(&number);

	std::cout << number << std::endl;

	square obj(point(0, 0), point(0, 1), point(1, 0));
	
	methods::movesquare(obj, vector(3,3));
	
	std::cout << obj;
}

