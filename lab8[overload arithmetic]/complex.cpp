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

Complex operator+(const Complex& lhs, const Complex& rhs)
{
	Complex temp{ lhs };
	temp += rhs;
	return temp;
}

Complex& Complex::operator+=(const Complex& rhs)
{
	_real += rhs._real;
	_imag += rhs._imag;
	return *this;
}