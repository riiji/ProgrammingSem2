#pragma once
#include <functional>
#include <stack>

template <class iterator, class pred>
bool any_of1(iterator first, iterator second, pred)
{
	while (first != second)
	{
		if (pred(*first))
			return true;
		++first;
	}
	
	return false;
}

template <class iterator, class pred>
bool one_of1(iterator first, iterator second, pred)
{
	int count = 0;
	while (first != second)
	{
		if (pred(*first))
			count++;
		++first;
	}

	if (count == 1)
		return true;
	return false;
}

template <class iterator>
bool is_palindrome(iterator first, iterator second)
{
	std::vector<iterator> a;
	while(first!=second)
	{
		a.push_back(first);
		++first;
	}

	for(int i = 0;i<a.size()/2;++i)
	{
		if(*a[i]!=*a[a.size()-i-1])
		{
			return false;
		}
	}

	return true;
}
