#include <iostream>
#include "methods.h"
int main()
{
    Line a;

	a.initFromDialog();
	a.draw();

	std::cout << a.classname();
}
