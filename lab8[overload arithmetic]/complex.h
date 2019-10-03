#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <iostream>

class Complex
{
public:

	Complex(double);
	Complex(double, double);
	Complex();
	~Complex();
	double getReal() const;
	double getImag() const;
	Complex & operator+=(const Complex & rhs);

private:
	double _real;
	double _imag;
};

std::ostream & operator<<(std::ostream &, const Complex &);

Complex operator+(const Complex &, const Complex &);

#endif // !COMPLEX_HPP_
