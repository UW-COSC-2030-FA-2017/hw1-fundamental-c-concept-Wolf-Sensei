// Collection.h
// Robert Randolph
// COSC 2030 Section 01
// Homework 1 Part 3
// September 18, 2017

#ifndef COLLECTION_H
#define COLLECTION_H

#include<stdlib.h>
#include<time.h>
#include<iostream>
using std::cout;
using std::endl;

#define MAX_SIZE 50

template <typename objType>
class Collection
{
public:
	Collection();
	~Collection();

	void makeEmpty();
	bool insert(objType obj);
	bool remove(objType obj);
	bool removeRandom();
	bool notContained(objType obj);

	bool isFull();
	bool isEmpty();
	int listLength();
	void print();

private:
	int head;
	objType objList[MAX_SIZE];
};

#endif // !COLLECTION_H

// Default Constructor.
template <typename objType>
Collection<objType>::Collection()
{
	head = -1;
}

// Default Destructor.
template <typename objType>
Collection<objType>::~Collection()
{
	// Nothing to do.
}

// Removes all objects.
template <typename objType>
void Collection<objType>::makeEmpty()
{
	head = -1;
	return;

}

// Add an object.
template <typename objType>
bool Collection<objType>::insert(objType obj)
{
	if (isFull())
		return false;

	head++;

	objList[head] = obj;
	return true;
}

// Remove an object.
template <typename objType>
bool Collection<objType>::remove(objType obj)
{
	int d(0);

	if (isEmpty())
		return false;

	while ((d <= head) && (obj != objList[d]))
	{
		d++;
	}

	if (d > head)
		return false;

	for (int i(d); i < head; i++)
	{
		objList[i] = objList[i + 1];
	}
	head--;

	return true;
}

// Remove a random object.
template <typename objType>
bool Collection<objType>::removeRandom()
{
	int randomInt;

	if (isEmpty())
		return false;

	srand(time(NULL));
	randomInt = (rand() % (listLength()) + 1) - 1;

	for (int i(randomInt); i < head; i++)
	{
		objList[i] = objList[i + 1];
	}
	head--;

	return true;
}

// Check to see if an object is NOT in the list, and if it's not then return true.
template <typename objType>
bool Collection<objType>::notContained(objType obj)
{
	bool notFound(true);

	if (!isEmpty())
	{
		for (int i(0); i <= head; i++)
		{
			if (obj == objList[i])
			{
				notFound = false;
				i = head + 1;
			}
		}
	}

	return notFound;
}

// Check to see if the array is empty.
template <typename objType>
bool Collection<objType>::isEmpty()
{
	return (head == -1);
}

// Check to see if the array is full.
template <typename objType>
bool Collection<objType>::isFull()
{
	return (head == (MAX_SIZE - 1));
}

// Returns the length of the list;
template <typename objType>
int Collection<objType>::listLength()
{
	return (head + 1);
}

// Prints out the list of objects.
template <typename objType>
void Collection<objType>::print()
{
	if (isEmpty())
	{
		cout << "Nothing to print." << endl;
	}
	else
	{
		for (int i(0); i <= head; i++)
		{
			cout << objList[i] << endl;
		}
	}
	return;
}