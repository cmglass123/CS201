// lab9[UsesOfStatic].cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "statics.h"
#include <iostream>
using std::cout;
using std::endl;

void first()
{
	static int first = 13;
	cout << "number 1 before incrementing: " << first << endl;
	cout << "number 1 after incrementing: " << ++first << endl;
}


int main()
{
	first();
	first();
	cout << endl;
	cout <<"for number 3 & 4: " << Foo::getNumber();
	cout << endl;
}
