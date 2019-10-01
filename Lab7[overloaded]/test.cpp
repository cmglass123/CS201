#include <iostream>
#include "test.h"

Test::Test():_num(13)
{
	std::cout << "made a test thing\n";
}

Test::~Test()
{
	std::cout << "deleted the test thing\n";
}

std::ostream & operator<<(std::ostream & output, const Test & t)
{
	output << "the int in test is: " << t._num << std::endl;
	return output;
}