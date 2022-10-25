#include<iostream>
#include"Vector.h"

using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");

	Vector V(4);

	cin >> V;

	cout << V.getLength() << "\n";

	return 0;
}