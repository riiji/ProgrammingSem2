// Lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>

#include "methods.h"

bool isZero(int a)
{
    if (a == 0)
        return true;
    return false;
}

class point
{
public:
    int x, y;
	
    point()
    {
        x = 0;
        y = 0;
    }

	point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

	bool operator!=(const point& p) const
	{
        if (p.x != x && p.y != y)
            return true;
        return false;
    }
};

bool isOddX(point a)
{
    if (a.x % 2 != 0)
        return true;
    return false;
}

int main()
{
    std::cout << "Hello World!\n";
    std::vector<point> a(3, point());
    a[0] = point(1, 3);
    a[2] = point(1, 3);


    std::cout << is_palindrome(a.begin(),a.end()) << std::endl;

    std::cout << one_of1(a.begin(), a.end(), [](point a) { return a.x % 2 == 0; });
    
    std::vector<int> b(3, 1);
    std::cout << one_of1(b.begin(), b.end(), isZero);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
