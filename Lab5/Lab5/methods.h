#pragma once

using namespace std;

class IndexOutOfRangeException : public exception {
	const char* what() const throw () {
		return "Index was out of range";
	}
};

static class methods
{
public:
	template<class T>
	static T GetMin(T a, T b);
};

template <int N, class T>
class Array
{
	T arr[N];

public:
	T& operator[](int n);
};

template <class T>
T methods::GetMin(T a, T b)
{
	return (a < b) ? a : b;
}

template <int N, class T>
T& Array<N, T>::operator[](int n)
{
	if (n<0 || n>N)
		throw IndexOutOfRangeException();

	return this->arr[n];
}


