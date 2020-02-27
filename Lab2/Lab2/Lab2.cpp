#include <iostream>
#include "methods.h"

int main()
{
	complex a(3.2, -1.2);
	complex b(1.7, 1.1);

	std::cout << a + b << std::endl;
	std::cout << a.length();
	
}
