#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <iostream>

class Complex
{
public:
	Complex();
	~Complex();
	double getDouble() const;
	Complex & operator+=(const Complex& rhs);

private:
	double _real;
	double _imag;
};

std::ostream & operator<<(std::ostream &, const Complex &);

Complex operator+(const Complex &, const Complex &);

#endif // !COMPLEX_HPP_
