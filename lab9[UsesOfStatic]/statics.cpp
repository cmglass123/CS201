#include "statics.h"


Foo::Foo() {}

Foo::~Foo() {}

int Foo::x = 13;

int Foo::getNumber()
{
	return x;
}