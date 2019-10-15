#include "box.h"

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

int Box::getHight() const
{
	return _hight;
}

int Box::getWidth() const
{
	return _width;
}
