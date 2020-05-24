// Lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <iterator>
#include "circle_buff.h"
using namespace std;

int main()
{
	circle_buff<int> a(3);

	a.push(1);
	a.push(3);
	a.push(2);
	a.push(0);
	a.pop();

	int f = 5;
	
	a.insert(a.begin(), f);
	
	sort(a.begin(), a.end());

	for (auto it = a.begin(); it != a.end(); ++it)
	{
		cout << *it;
	}
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
