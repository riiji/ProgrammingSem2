#pragma once

template <class T>
class circle_buffer
{
public:
	typedef T* iterator;
	circle_buffer(unsigned int size);
};