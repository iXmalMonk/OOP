#ifndef _VECTOR_H
#define _VECTOR_H

using namespace std;

template <typename T>
class Vector {
private:
	T* data = NULL;
	int size = 0;
	int pos = 0;

public:
	Vector(int _size)
	{
		if (_size > 1)
		{
			size = _size;
			data = new T[size];
		}
		else
		{
			size = _size;
			data = new T[1];
		}
	}

	~Vector()
	{
		delete[] data;
		data = NULL;
		size = 0;
		pos = 0;
	}

	int getSize()
	{
		return size;
	}

	void pushBack(T _element)
	{
		if (pos < size)
		{
			data[pos] = _element;
			pos++;
		}
	}

	T popBack()
	{
		if (pos > 0)
		{
			pos--;
			T element = data[pos];
			data[pos] = 0;
			return element;
		}
	}

	T checkElement(int _pos)
	{
		if (pos <= size) return data[_pos];
	}

	bool operator<=(const Vector& _V)
	{
		if (this->size <= _V.size) return true;
		else return false;
	}

	bool operator>=(const Vector& _V)
	{
		if (this->size >= _V.size) return true;
		else return false;
	}

	bool operator==(const T& _value)
	{
		if (this->size == _value) return true;
		else return false;
	}

	void printElemenets()
	{
		for (int i = 0; i < this->size; i++) cout << this->data[i] << ' ';
	}
};

#endif