#ifndef TEST_HPP_
#define TEST_HPP_

#include <iostream>

class Test
{

friend std::ostream& operator<<(std::ostream& output, const Test& t);

public:
	Test();

	~Test();

private:
	int _num;
};

#endif // !TEST_HPP_
