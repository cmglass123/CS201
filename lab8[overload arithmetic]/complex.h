#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <iostream>

class Complex
{
public:
	Complex();
	~Complex();
	void getDouble(double);

private:
	double _firVal;
	double _secVal;
};

std::ostream & operator<<(std::ostream &, const Complex &);



#endif // !COMPLEX_HPP_
