/*
Christopher Glass
9/18/2019
box.hpp for homework #1
*/

#ifndef BOX_HPP_
#define BOX_HPP_

class Box
{
public:
	Box();
	int area();
	void theWidth(int width);
	void theLength(int length);

private:
	int width;
	int length;
};

#endif // !BOX_HPP_
