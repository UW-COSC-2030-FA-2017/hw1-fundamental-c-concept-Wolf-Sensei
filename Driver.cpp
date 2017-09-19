// Driver.cpp
// Robert Randolph
// COSC 2030 Section 01
// Homework 1 Part 3
// September 18, 2017

#include<iostream>
using std::cout;
using std::endl;

#include"Collection.h"

int main()
{
	Collection<int> list;

	list.print();
	cout << "list is empty: " << list.isEmpty() << endl;
	cout << "list is full: " << list.isFull() << endl;
	cout << "list length: " << list.listLength() << endl;
	cout << "does list NOT contain 1: " << list.notContained(1) << endl;

	list.insert(2);
	list.insert(5);
	list.insert(8);
	list.insert(11);

	list.print();
	cout << "list is empty: " << list.isEmpty() << endl;
	cout << "list is full: " << list.isFull() << endl;
	cout << "list length: " << list.listLength() << endl;
	cout << "does list NOT contain 1: " << list.notContained(1) << endl;

	list.remove(5);

	list.print();
	cout << "list is empty: " << list.isEmpty() << endl;
	cout << "list is full: " << list.isFull() << endl;
	cout << "list length: " << list.listLength() << endl;
	cout << "does list NOT contain 1: " << list.notContained(1) << endl;

	list.insert(1);
	list.insert(1);
	list.insert(5);
	list.insert(13);

	list.print();

	list.removeRandom();

	cout << "removed random number" << endl;
	list.print();
	cout << "list is empty: " << list.isEmpty() << endl;
	cout << "list is full: " << list.isFull() << endl;
	cout << "list length: " << list.listLength() << endl;
	cout << "does list NOT contain 1: " << list.notContained(1) << endl;

	list.makeEmpty();

	list.print();
	cout << "list is empty: " << list.isEmpty() << endl;
	cout << "list is full: " << list.isFull() << endl;
	cout << "list length: " << list.listLength() << endl;
	cout << "does list NOT contain 1: " << list.notContained(1) << endl;

	return 0;
}