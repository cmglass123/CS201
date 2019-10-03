/*

*/

#include <iostream>
#include "complex.h"
using std::cout;

int main()
{
	Complex a[2];
	Complex b[65];

	cout << a + b;

	cout << 1 + Complex(2,3) << std::endl;
}
