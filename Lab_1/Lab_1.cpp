#include<iostream>
#include<vector>

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
		T tmpThis = 0, tmp_V = 0;

		for (int i = 0; i < this->size; i++)
			tmpThis += this->data[i];

		for (int i = 0; i < _V.size; i++)
			tmp_V += _V.data[i];

		if (tmpThis <= tmp_V) return true;
		else return false;
	}

	bool operator>=(const Vector& _V)
	{
		T tmpThis = 0, tmp_V = 0;

		for (int i = 0; i < this->size; i++)
			tmpThis += this->data[i];

		for (int i = 0; i < _V.size; i++)
			tmp_V += _V.data[i];

		if (tmpThis >= tmp_V) return true;
		else return false;
	}

	bool operator==(const T& _value)
	{
		T tmpThis = 0;

		for (int i = 0; i < this->size; i++)
			tmpThis += this->data[i];

		if (tmpThis == _value) return true;
		else return false;
	}

	void printElemenets()
	{
		for (int i = 0; i < this->size; i++) cout << this->data[i] << ' ';
	}
};

int main()
{
	Vector<double> V1(3);
	Vector<double> V2(3);

	//printf("Size - %i\n", V1.getSize());

	//V1.pushBack(123.5);
	//V1.pushBack(456.5);
	//V1.pushBack(789.5);
	//V1.pushBack(12345.5);

	//printf("Element[%i] = %.1lf\n", 0, V1.checkElement(0));
	//printf("Element[%i] = %.1lf\n", 1, V1.checkElement(1));
	//printf("Element[%i] = %.1lf\n", 2, V1.checkElement(2));
	//printf("Element[%i] = %.1lf\n", 3, V1.checkElement(3));
	//
	//double element;
	//
	//element = V1.popBack();
	//printf("Element = %.1lf\n", element);
	//element = V1.popBack();
	//printf("Element = %.1lf\n", element);
	//element = V1.popBack();
	//printf("Element = %.1lf\n", element);
	//element = V1.popBack();
	//printf("Element = %.1lf\n", element);

	V1.pushBack(1);
	V1.pushBack(1);
	V1.pushBack(1);

	V2.pushBack(1);
	V2.pushBack(1);
	V2.pushBack(2);

	if (V1 <= V2) printf("Y\n");
	else printf("N\n");

	if (V1 >= V2) printf("Y\n");
	else printf("N\n");

	if (V1 == 4) printf("Y\n");
	else printf("N\n");

	V1.printElemenets();

	return 0;
}