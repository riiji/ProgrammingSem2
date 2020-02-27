// Lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "methods.h"

int main()
{
    square a(point(0,0), 2, 90);
	square b(point(1, 1), 4, 30);

	std::cout << (a < b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a != b) << std::endl;

	a.multiplyside(2);

	std::cout << (a == b) << std::endl;
}

