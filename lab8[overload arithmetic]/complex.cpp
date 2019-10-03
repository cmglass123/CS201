#include <iostream>
#include "complex.h"

Complex::Complex() :_real(), _imag()
{}

Complex::Complex(double real) : _real(real), _imag(0)
{

}

Complex::Complex(double real, double imag) : _real(real), _imag(imag)
{

}

Complex::~Complex()
{}

double Complex::getReal() const
{
	return _real;
}

double Complex::getImag() const
{
	return _imag;
}

std::ostream & operator<<(std::ostream & output, const Complex & c)
{
	output << c.getReal();
	output << "+";
	output << c.getImag();
	output << "i";
	return output;
}

Complex operator+(const Complex& lhs, const Complex& rhs)
{
	Complex temp{ lhs };
	temp += rhs;
	return temp;
}

Complex & Complex::operator+=(const Complex& rhs)
{
	_real += rhs._real;
	_imag += rhs._imag;
	return *this;
}