#include<iostream>
#include"Queue.h"

using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");

	int size = 10;

	Queue<int> q1;
	Queue<int> q2(5, 10);
	Queue<int> q3 = q2;

	q1.push(1);
	q1.push(1);
	q1.push(1);

	q1.print();

	q2.print();

	q3.print();

	q3 + 10;

	q3.print();

	q1.clear();

	q1.push(3);

	q1.print();

	cout << q1 << "123\n";
	return 0;
}