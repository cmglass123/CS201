#include <iostream>
#include "complex.h"

Complex::Complex() :_real(12.56), _imag(23.50)
{}

Complex::~Complex()
{}

double Complex::getDouble() const
{
	return _real;
	return _imag;
}

std::ostream & operator<<(std::ostream & output, const Complex & c)
{
	output << c.getDouble();
	return output;
}