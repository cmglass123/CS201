#ifndef CLASSES__HPP_
#define CLASSES__HPP_

#include <iostream>
using std::string;

class Stuff
{
public:
	Stuff();
	~Stuff();

	void setID(int classID);
	int getID() const;

	/*void setDate(int classDate);
	int getDate();*/

private:
	int _classID;
	//int _classDate;
	
};
#endif // !CLASSES__HPP_
