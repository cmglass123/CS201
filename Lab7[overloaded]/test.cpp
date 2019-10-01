#include <iostream>
#include "test.h"

Test::Test():_num(132)
{
	std::cout << "made a test class\n";
}

Test::~Test()
{
	std::cout << "deleted the test class\n";
}

std::ostream & operator<<(std::ostream & output, const Test & t)
{
	output << "the int in test class is: " << t._num << std::endl;
	return output;
}