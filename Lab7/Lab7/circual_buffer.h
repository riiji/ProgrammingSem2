#pragma once
#include <iterator>
template <class type, int size>
class circual_buffer 
{
public:
	int writePointer = 0;
	type arr[size];
	void add_element();
	void remove_element();
	circual_buffer();
	iterator
};