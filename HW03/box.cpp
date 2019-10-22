#include "box.h"
#include<iomanip>
#include <iostream>
using std::cout;

Box::Box() {}

Box::Box(int w, int h)
{
	w = _width;
	h = _hight;
	_isFilled;
}

Box::Box(int w, int h, bool filled)
{
	w = _width;
	h = _hight;
	filled = _isFilled;
}

int Box::getHeight() const
{
	return _hight;
}

int Box::getWidth() const
{
	return _width;
}

std::string Box::type() const
{
	if (_isFilled)
	{
		return "Filled";
	}
	else
	{
		return "Hollow";
	}
}

void Box::setHeight(int h)
{
	_hight = h;
}

void Box::setWidth(int w)
{
	_width = w;
}

void Box::print(std::ostringstream& os) const
{
	if (_isFilled)
	{
		for (int rows = 1; rows <= _hight; rows++)
		{
			for (int column = 1; column <= _width; column++)
			{
				os << "x";
			}
			os << std::endl;
		}
	}
	else
	{
		for (int rows = 1; rows <= _hight; rows++)
		{
			for (int column = 1; column <= _width; column++)
			{
				if (rows == 1 | column == 1 | column == _width | rows == _hight)
				{
					os << "x";
				}
				else
				{
					os << " ";
				}
			}
			os << std::endl;
		}
	}
}

void Box::print()
{
	if (_isFilled)
	{
		for (int rows = 1; rows <= _hight; rows++)
		{
			for (int column = 1; column <= _width; column++)
			{
				std::cout << "x";
			}
			std::cout <<std::endl;
		}
	}
	else
	{
		for (int rows = 1; rows <= _hight; rows++)
		{
			for (int column = 1; column <= _width; column++)
			{
				if (rows == 1 | column == 1 | column == _width | rows == _hight)
				{
					std::cout << "x";
				}
				else
				{
					std::cout << " ";
				}
			}
			std::cout << std::endl;
		}
	}
}
