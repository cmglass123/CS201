#include "GetID.h"
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <sstream>
using std::ostringstream;
#include <iostream>
using std::istringstream;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::getline;

int getIdfromFile(string fileName, istringstream& is, ostringstream& os)
{
	ifstream input;

	input.open(fileName, ifstream::in);

	if (!input)
	{
		return -1;
	}



}