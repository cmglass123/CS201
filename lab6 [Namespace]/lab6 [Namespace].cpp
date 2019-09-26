/*
Christopher Glass
9/26/2019
lab #6 [Namespaces]
testing out how to make our own namespaces
*/


#include <iostream>
#include "names.h"

void foo()
{
	std::cout << "7";
}


int main()
{
	test::foo();
	std::cout << std::endl;
	foo();
	return 0;
}
