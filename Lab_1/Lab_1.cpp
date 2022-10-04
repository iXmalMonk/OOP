#include<iostream>
#include"Vector.h"

int main()
{
	Vector<double> V1(4);
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