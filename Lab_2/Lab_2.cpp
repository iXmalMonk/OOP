#include <iostream>
#include "Figure.h"

using namespace std;

#define _SIZE 9

void printFigure(Figure** pf)
{
	system("cls");

	for (int i = 0; pf[i] != NULL and i < _SIZE; i++)
	{
		cout << i + 1 << " | ";
		pf[i]->show();
	}

	cout << "\n";
}

int main()
{
	system("chcp 1251");
	system("cls");

	Figure* pf[_SIZE] = { NULL };

	int index = 0;
	int pf_index = 1;

	int size = 0;
	int x = 0;
	int y = 0;
	int color = 0;

	/*for (int i = 0; i < _SIZE; i++)
	{
		if (i < _SIZE / 3) pf[i] = new Circle;
		else if (i < _SIZE / 3 * 2) pf[i] = new Rectangle;
		else pf[i] = new Triangle;
	}*/

	//for (int i = 0; i < _SIZE; i++) pf[i]->show();

	int _s = 0;
	int s = 0;

	do {
		printFigure(pf);
		cout << "CURRENT INDEX: " << pf_index << "\n0 - EXIT\n1 - SET CURRENT FIGURE\n2 - ADD FIGURE\n3 - DELETE FIGURE\n4 - SET X & Y\n5 - SET COLOR\n6 - SET SIZE\n7 - CURRENT FIGURE PROPERTIES\n\nS: ";
		cin >> s;
		switch (s)
		{
		case 1:
			do
			{
				printFigure(pf);
				cout << "0 - EXIT\nINDEX: ";
				cin >> _s;
				if (_s > 0 and _s <= index) pf_index = _s;
			} while ((_s < 1 or _s > index) and _s != 0);
			break;

		case 2:
			do
			{
				printFigure(pf);
				cout << "0 - EXIT\n1 - CIRCLE\n2 - RECTANGLE\n3 - TRIANGLE\nS: ";
				cin >> _s;
				switch (_s)
				{
				case 1:
					if (index != _SIZE)
						pf[index++] = new Circle;
					break;
				case 2:
					if (index != _SIZE)
						pf[index++] = new Rectangle;
					break;
				case 3:
					if (index != _SIZE)
						pf[index++] = new Triangle;
					break;
				}
			} while (_s != 0 and index != _SIZE);
			break;

		case 3:
			if (index >= 0)
				if (index == 0)
				{
					delete pf[index];
					pf[index] = NULL;
					if (pf_index > index) pf_index = index;
					if (pf_index == 0) pf_index++;
				}
				else
				{
					delete pf[--index];
					pf[index] = NULL;
					if (pf_index > index) pf_index = index;
					if (pf_index == 0) pf_index++;
				}
			break;

		case 4:
			if (pf[pf_index - 1] != NULL)
			{
				do
				{
					system("cls");
					cout << "CURRENT INDEX: " << pf_index << "\n0 - EXIT\nX: ";
					cin >> x;
					cout << "Y: ";
					cin >> y;
					cout << "S: ";
					cin >> _s;
				} while (_s != 0);
				pf[pf_index - 1]->setX(x);
				pf[pf_index - 1]->setY(y);
			}
			break;

		case 5:
			if (pf[pf_index - 1] != NULL)
			{
				do
				{
					system("cls");
					cout << "CURRENT INDEX: " << pf_index << "\n0 - EXIT\nCOLOR: ";
					cin >> color;
					cout << "S: ";
					cin >> _s;
				} while (_s != 0);
				pf[pf_index - 1]->setColor(color);
			}
			break;

		case 6:
			if (pf[pf_index - 1] != NULL)
			{
				do
				{
					system("cls");
					cout << "CURRENT INDEX: " << pf_index << "\n0 - EXIT\nSIZE: ";
					cin >> size;
					cout << "S: ";
					cin >> _s;
				} while (_s != 0);
				pf[pf_index - 1]->setSize(size);
			}
			break;

		case 7:
			if (pf[pf_index - 1] != NULL)
			{
				do
				{
					system("cls");
					cout << "CURRENT INDEX: " << pf_index << "\n0 - EXIT\n";
					cout << "X: " << pf[pf_index - 1]->getX() << " Y: " << pf[pf_index - 1]->getY() << " COLOR: " << pf[pf_index - 1]->getColor() << " SIZE: " << pf[pf_index - 1]->getSize() << "\nS: ";
					cin >> _s;
				} while (_s != 0);
			}
			break;
		}
	} while (s != 0);

	for (int i = 0; i < _SIZE; i++) delete pf[i];

	return 0;
}