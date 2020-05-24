#pragma once

template <class T>
class circle_buff
{
public:
	typedef T* iterator;
	circle_buff(unsigned int capacity);
	~circle_buff();

	unsigned int capacity() const;
	unsigned int size() const;
	bool empty() const;
	iterator begin();
	iterator end();
	void insert(iterator pos, T& value);
	T& front();
	T& back();
	void push(const T& value);
	void pop();

	T& operator[](unsigned int index);
	void clear();

private:
	unsigned int size_;
	unsigned int pointer_;
	unsigned int capacity_;
	T* data_;
};

template<class T>
circle_buff<T>::circle_buff(unsigned int capacity)
{
	size_ = 0;
	pointer_ = 0;
	capacity_ = capacity;
	data_ = new T[2*capacity];
}

template <class T>
circle_buff<T>::~circle_buff()
{
	delete[] data_;
}

template <class T>
unsigned circle_buff<T>::capacity() const
{
	return capacity_;
}

template <class T>
unsigned circle_buff<T>::size() const
{
	return size_;
}

template <class T>
bool circle_buff<T>::empty() const
{
	if (size_ == 0)
		return true;
	return false;
}

template <class T>
typename circle_buff<T>::iterator circle_buff<T>::begin()
{
	return data_ + pointer_;
}

template <class T>
typename circle_buff<T>::iterator circle_buff<T>::end()
{
	return data_ + pointer_ + size_;
}

template<class T>
void circle_buff<T>::insert(iterator pos, T& value)
{
	*pos = value;
	*(pos + size_) = value;
}

template <class T>
T& circle_buff<T>::front()
{
	return data_[0];
}

template <class T>
T& circle_buff<T>::back()
{
	return data_[size_ - 1];
}

template <class T>
void circle_buff<T>::push(const T& value)
{
	if (size_ < capacity_)
		size_++;

	data_[pointer_] = value;
	data_[pointer_ + capacity_] = value;
	
	pointer_++;

	if (pointer_ >= capacity_)
	{
		pointer_ = 0;
	}
}

template <class T>
void circle_buff<T>::pop()
{
	pointer_++;

	if (pointer_ > capacity_)
		pointer_ = 0;

	size_--;
}

template <class T>
T& circle_buff<T>::operator[](unsigned int index)
{
	return data_[index % capacity_];
}

template <class T>
void circle_buff<T>::clear()
{
	capacity_ = 0;
	size_ = 0;
	delete[] data_;
}
