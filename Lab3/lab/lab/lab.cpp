// lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "square.h"

int main()
{
	square a(1, 1, 2, 20);

	const square b(3, 4, 2, 40);

	const vector vec(2, 3);

	std::cout << (a == b) << std::endl;

	a = a + vec;

	std::cout << a.x << " " << a.y << std::endl;

	a = a * 2;

	std::cout << a.side_size << std::endl;

	std::cout << (a > b);
}
