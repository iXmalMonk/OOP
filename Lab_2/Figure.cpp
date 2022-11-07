#include <iostream>
#include "Figure.h"

using namespace std;

#pragma region Figure

//Figure::Figure()
//{
//	init();
//}
//
//Figure::Figure(int _size, int _x, int _y, int _color)
//{
//	setSize(_size);
//	setX(_x);
//	setY(_y);
//	setColor(_color);
//}

void Figure::init()
{
	size = 1;
	x = 1;
	y = 1;
	color = 1;
}

void Figure::setSize(int _size)
{
	size = _size;
}

void Figure::setX(int _x)
{
	x = _x;
}

void Figure::setY(int _y)
{
	y = _y;
}

void Figure::setColor(int _color)
{
	color = _color;
}

int Figure::getSize()
{
	return size;
}

int Figure::getX()
{
	return x;
}

int Figure::getY()
{
	return y;
}

int Figure::getColor()
{
	return color;
}

#pragma endregion

#pragma region Circle

Circle::Circle()
{
	init();
	r = 1;
}

Circle::Circle(int _size, int _x, int _y, int _color, int _r)
{
	setSize(_size);
	setX(_x);
	setY(_y);
	setColor(_color);
	setR(_r);
}

void Circle::setR(int _r)
{
	r = _r;
}

int Circle:: getR()
{
	return r;
}

void Circle::show()
{
	cout << "Circle\n";
}

#pragma endregion

#pragma region Rectangle

Rectangle::Rectangle()
{
	init();
	w = 1;
	h = 1;
}

Rectangle::Rectangle(int _size, int _x, int _y, int _color, int _w, int _h)
{
	setSize(_size);
	setX(_x);
	setY(_y);
	setColor(_color);
	setW(_w);
	setH(_h);
}

void Rectangle::setW(int _w)
{
	w = _w;
}

void Rectangle::setH(int _h)
{
	h = _h;
}

int Rectangle::getW()
{
	return w;
}

int Rectangle::getH()
{
	return h;
}

void Rectangle::show()
{
	cout << "Rectangle\n";
}

#pragma endregion

#pragma region Triangle

Triangle::Triangle()
{
	init();
	first_side = 1;
	second_side = 1;
	third_side = 1;
}

Triangle::Triangle(int _size, int _x, int _y, int _color, int _first_side, int _second_side, int _third_side)
{
	setSize(_size);
	setX(_x);
	setY(_y);
	setColor(_color);
	setFirstSide(_first_side);
	setSecondSide(_second_side);
	setThirdSide(_third_side);
}

void Triangle::setFirstSide(int _first_side)
{
	first_side = _first_side;
}

void Triangle::setSecondSide(int _second_side)
{
	second_side = _second_side;
}

void Triangle::setThirdSide(int _third_side)
{
	third_side = _third_side;
}

int Triangle::getFirstSide()
{
	return first_side;
}

int Triangle::getSecondSide()
{
	return second_side;
}

int Triangle::getThirdSide()
{
	return third_side;
}

void Triangle::show()
{
	cout << "Triangle\n";
}

#pragma endregion