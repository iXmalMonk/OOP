#include "Vector.h"

Vector::Vector(int _size)
{
	if (_size > 1)
	{
		size = _size;
		data = new double[size];
		cout << "create\n";
	}
	else
	{
		size = _size;
		data = new double[1];
		cout << "constructor\n";
	}
}

Vector::Vector(Vector& _v)
{
	size = _v.size;
	data = new double[size];
	for (int i = 0; i < size; i++) data[i] = _v.data[i];
	cout << "constructor copy\n";
}

Vector::~Vector()
{
	delete data;
	data = nullptr;
	size = 0;
	cout << "deconstructor\n";
}

istream& operator>>(istream& _in, Vector& _v)
{
	for (int i = 0; i < _v.size; i++) _in >> _v.data[i];
	return _in;
}

ostream& operator<<(ostream& _out, const Vector& _v)
{
	for (int i = 0; i < _v.size; i++) _out << _v.data[i] << " ";
	return _out << "\n";
}

double& Vector::operator[](int _pos)
{
	if (_pos >= 0 and _pos <= size) return data[_pos];
}

const Vector& Vector::operator=(const Vector& _v)
{
	if (data) delete data;
	size = _v.size;
	data = new double[size];
	for (int i = 0; i < size; i++) data[i] = _v.data[i];
	return* this;
}

bool Vector::operator<=(const Vector& _v)
{
	if (this->size <= _v.size) return true;
	else return false;
}

bool Vector::operator>=(const Vector& _v)
{
	if (this->size >= _v.size) return true;
	else return false;
}

bool Vector::operator==(const double& _value)
{
	if (this->size == _value) return true;
	else return false;
}

Vector Vector::operator+(const Vector& _v)
{
	if (size == _v.size)
	{
		Vector temp(size);
		for (int i = 0; i < size; i++) temp.data[i] = data[i] + _v.data[i];
		return temp;
	}
}

Vector Vector::operator+(double _value)
{
	Vector temp(size);
	for (int i = 0; i < size; i++) temp.data[i] = data[i] + _value;
	return temp;
}

Vector operator+(double _value, const Vector& _v)
{
	Vector temp(_v.size);
	for (int i = 0; i < _v.size; i++) temp.data[i] = _value + _v.data[i];
	return temp;
}

Vector Vector::operator-(const Vector& _v)
{
	if (size == _v.size)
	{
		Vector temp(size);
		for (int i = 0; i < size; i++) temp.data[i] = data[i] - _v.data[i];
		return temp;
	}
}

Vector Vector::operator-(double _value)
{
	Vector temp(size);
	for (int i = 0; i < size; i++) temp.data[i] = data[i] - _value;
	return temp;
}

Vector operator-(double _value, const Vector& _v)
{
	Vector temp(_v.size);
	for (int i = 0; i < _v.size; i++) temp.data[i] = _value - _v.data[i];
	return temp;
}

Vector Vector::operator*(const Vector& _v)
{
	if (size == _v.size)
	{
		Vector temp(size);
		for (int i = 0; i < size; i++) temp.data[i] = data[i] * _v.data[i];
		return temp;
	}
}

Vector Vector::operator*(double _value)
{
	Vector temp(size);
	for (int i = 0; i < size; i++) temp.data[i] = data[i] * _value;
	return temp;
}

Vector operator*(double _value, const Vector& _v)
{
	Vector temp(_v.size);
	for (int i = 0; i < _v.size; i++) temp.data[i] = _value * _v.data[i];
	return temp;
}

Vector Vector::operator/(const Vector& _v)
{
	if (size == _v.size)
	{
		Vector temp(size);
		for (int i = 0; i < size; i++) temp.data[i] = data[i] / _v.data[i];
		return temp;
	}
}

Vector Vector::operator/(double _value)
{
	Vector temp(size);
	for (int i = 0; i < size; i++) temp.data[i] = data[i] / _value;
	return temp;
}

Vector operator/(double _value, const Vector& _v)
{
	Vector temp(_v.size);
	for (int i = 0; i < _v.size; i++) temp.data[i] = _value / _v.data[i];
	return temp;
}