#include <iostream>
#include "test.h"

Test::Test():_num(13)
{
	std::cout << "made a test thing";
}

Test::~Test()
{
	std::cout << "deleted the test thing";
}

