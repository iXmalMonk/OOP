#ifndef _VECTOR_H
#define _VECTOR_H

#include<iostream>

using namespace std;

class Vector
{
private:
	double* data = nullptr;
	int size = 0;

public:
	Vector(int _size);
	Vector(Vector& _v);
	~Vector();
	friend istream& operator>>(istream& _in, Vector& _v);
	friend ostream& operator<<(ostream& _out, const Vector& _v);
	double& operator[](int _pos);
	const Vector& operator=(const Vector& _v);
	bool operator<=(const Vector& _v);
	bool operator>=(const Vector& _v);
	bool operator==(const double& _value);
	Vector operator+(const Vector& _v);
	Vector operator+(double _value);
	friend Vector operator+(double _value, const Vector& _v);
	Vector operator-(const Vector& _v);
	Vector operator-(double _value);
	friend Vector operator-(double _value, const Vector& _v);
	Vector operator*(const Vector& _v);
	Vector operator*(double _value);
	friend Vector operator*(double _value, const Vector& _v);
	Vector operator/(const Vector& _v);
	Vector operator/(double _value);
	friend Vector operator/(double _value, const Vector& _v);
	int getSize();
	double getLength();
};

#endif