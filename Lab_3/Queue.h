#ifndef _QUEUE_H
#define _QUEUE_H

#include <iostream>

using namespace std;

#define DEBUG 0

template <class T>
class Queue
{
private:
	struct Element
	{
		T data = 0;
		Element* next = NULL;
	};

	struct ElementHT
	{
		Element* head = NULL;
		Element* tail = NULL;
	};

	ElementHT q;

public:
	Queue();
	Queue(Queue<T>& _q);
	Queue(T _data, int _size);
	~Queue();
	void push(T _data);
	T pop();
	T peek();
	void print();
	void clear();
	bool isEmpty();

	void operator+(T _data);

	template <class T> friend ostream& operator<<(ostream& _out, Queue<T>& _q);
};

template<class T>
Queue<T>::Queue()
{
	if (DEBUG) cout << "Default constructor\n";
}

template<class T>
Queue<T>::Queue(Queue<T>& _q)
{
	for (Element* current = _q.q.head; current != NULL; current = current->next)
		this->push(current->data);

	if (DEBUG) cout << "Copy constructor\n";
}

template<class T>
Queue<T>::Queue(T _data, int _size)
{
	for (int i = 0; i < _size; i++)
		this->push(_data);

	if (DEBUG) cout << "Constructor by info field value\n";
}

template<class T>
Queue<T>::~Queue()
{
	while (q.head != NULL)
	{
		if (q.head == q.tail) q.tail = NULL;

		Element* temporary = q.head;
		q.head = q.head->next;
		delete temporary;
	}

	if (DEBUG) cout << "Destructor\n";
}

template<class T>
void Queue<T>::push(T _data)
{
	Element* temporary = new Element;

	temporary->data = _data;
	temporary->next = NULL;

	if (q.head == NULL)
	{
		q.head = temporary;
		q.tail = temporary;
	}
	else
	{
		q.tail->next = temporary;
		q.tail = temporary;
	}
}

template<class T>
T Queue<T>::pop()
{
	if (q.head == NULL) return 0;

	T _data = q.head->data;

	if (q.head == q.tail) q.tail = NULL;

	Element* temporary = q.head;

	q.head = q.head->next;

	delete temporary;

	return _data;
}

template<class T>
T Queue<T>::peek()
{
	if (q.head == NULL) return 0;

	return q.head->data;
}

template<class T>
void Queue<T>::print()
{
	if (q.head != NULL)
	{
		for (Element* current = q.head; current != NULL; current = current->next)
			cout << current->data << " ";
		cout << "\n";
	}
}

template<class T>
void Queue<T>::clear()
{
	while (q.head != NULL)
	{
		if (q.head == q.tail) q.tail = NULL;

		Element* temporary = q.head;
		q.head = q.head->next;
		delete temporary;
	}
}

template<class T>
bool Queue<T>::isEmpty()
{
	return q.head == NULL;
}

template<class T>
void Queue<T>::operator+(T _data)
{
	this->push(_data);
}

template<class T>
ostream& operator<<(ostream& _out, Queue<T>& _q)
{
	Queue<T> temporary = _q;

	while (temporary.q.head != NULL)
	{
		_out << temporary.q.head->data << " ";
		temporary.q.head = temporary.q.head->next;
	}

	return  _out;
}

#endif