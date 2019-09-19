/*
Christopher Glass
9/18/2019
box.cpp file for homework #1
*/

#include <iostream>
#include "box.hpp"
using std::cout;

Box::Box()
{
	cout << "the box is being made\n";
}

void Box::theLength(int l)// the int is a lowcase L it just looks like the number 1
{
	length = l;
}

void Box::theWidth(int w)
{
	width = w;
}

int Box::area()
{
	int a;
	a = length * width;
	return a;
}