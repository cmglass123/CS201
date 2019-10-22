#include <iostream>
#include "Classes.h"
using std::cout;
using std::cin;
using std::endl;

Stuff::Stuff() {
	cout << "made\n";
}

Stuff::~Stuff() {
	cout << "done\n";
}

void Stuff::setID(int classID) {
	_classID = classID;
}


int Stuff::getID() const{
	return _classID;
}
