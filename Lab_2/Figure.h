#ifndef _FIGURE_H
#define _FIGURE_H

class Figure
{
protected:
	int size = 0;
	int x = 0;
	int y = 0;
	int color = 0;

	void init();

public:
	//Figure();
	//Figure(int _size, int _x, int _y, int _color);
	void setSize(int _size);
	void setX(int _x);
	void setY(int _y);
	void setColor(int _color);

	int getSize();
	int getX();
	int getY();
	int getColor();

	virtual void show() = 0;
};

class Circle : public Figure
{
private:
	int r = 0;

public:
	Circle();
	Circle(int _size, int _x, int _y, int _color, int _r);
	void setR(int _r);

	int getR();

	void show();
};

class Rectangle : public Figure
{
private:
	int w = 0;
	int h = 0;

public:
	Rectangle();
	Rectangle(int _size, int _x, int _y, int _color, int _w, int _h);
	void setW(int _w);
	void setH(int _h);

	int getW();
	int getH();

	void show();
};

class Triangle : public Figure
{
private:
	int first_side = 0;
	int second_side = 0;
	int third_side = 0;

public:
	Triangle();
	Triangle(int _size, int _x, int _y, int _color, int _first_side, int _second_side, int _third_side);
	void setFirstSide(int _first_side);
	void setSecondSide(int _second_side);
	void setThirdSide(int _third_side);

	int getFirstSide();
	int getSecondSide();
	int getThirdSide();

	void show();
};

#endif