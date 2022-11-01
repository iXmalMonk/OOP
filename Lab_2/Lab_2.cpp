#include <iostream>
#include "Figure.h"

using namespace std;

#define _SIZE 9

int main()
{
	system("chcp 1251");
	system("cls");

	//Figure f(1, 5, 5, 256);
	//Circle c(1, 2, 3, 4, 5);
	//
	//f.show();
	//c.show();

	Figure* pf[_SIZE] = { NULL };
	int s = 0;

	for (int i = 0; i < _SIZE; i++)
	{
		if (i < _SIZE / 3) pf[i] = new Circle;
		else if (i < _SIZE / 3 * 2) pf[i] = new Rectangle;
		else pf[i] = new Triangle;
	}

	//for (int i = 0; i < _SIZE; i++) pf[i]->show();

	do {
		system("cls");
		cout << "0 - EXIT\n1 - SET CURRENT FIGURE\n2 - ADD FIGURE\n3 - DELETE FIGURE\n4 - SET X & Y\n5 - SET COLOR\n6 - SET SIZE\n7 - SET OTHER PROPERTIES\nS: ";
		cin >> s;

		switch (s)
		{
		case 1:
			break;
		}

	} while (s != 0);

	for (int i = 0; i < _SIZE; i++) delete pf[i];

	return 0;
}