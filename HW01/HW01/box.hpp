#pragma once
#ifndef BOX_HPP_
#define BOX_HPP_

#include <string>
#include <sstream>

class Box
{
public:
	Box();
	Box(int w, int h);
	Box(int w, int h, bool filled);

	int getHeight() const;
	int getWidth() const;

	std::string type() const;

	void setHeight(int h);
	void setWidth(int w);

	void print(std::ostringstream& os) const;
	void print();

private:
	int _hight;
	int _width;
	bool _isFilled = true;
};


#endif // !BOX_HPP_