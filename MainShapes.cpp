// MainShapes.cpp
// Author: Robert Randolph
// Last Updated: September 7th, 2017
// C++ concept code example for Interface and Implementation Separation

#include<iostream>
using std::cout;
using std::endl;

#include"Square.h"

int main()
{
	square shape;

	cout << "Number of sides on a square is: " << shape.getSides() << endl;

	return 0;
}