#ifndef TEST_HPP_
#define TEST_HPP_

#include <iostream>

class Test
{
public:
	Test();

	~Test();

private:
	int _num;
};

std::ostream & operator<<(std::ostream & as, const Test & t);
#endif // !TEST_HPP_
