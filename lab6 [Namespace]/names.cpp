#include <iostream>
#include "names.h"

namespace test
{
	int age = 56;
	void test::foo()
	{
		std::cout <<test::age;
	}

}
