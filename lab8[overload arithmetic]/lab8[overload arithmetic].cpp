/*
christopher Glass
10/03/2019
Lab #8 [overloaded arithmetic operator]
*/

#include <iostream>
#include "complex.h"
using std::cout;
using std::endl;

int main()
{
	Complex a{ 2,13 };
	Complex b{ 13,2 };

	cout << a + b << endl;
	cout << 5 + a << endl;

	cout << 1 + Complex(2,3) << endl;
}
