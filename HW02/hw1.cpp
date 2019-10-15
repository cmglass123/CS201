#include "hw1.h"
#include <iomanip>
#include <ios>
#include <iostream>
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

int getIdfromFile(const string & fileName , istringstream & is, ostringstream & os)
{
	ifstream input;

	input.open(fileName, ifstream::in);

	if (!input)
	{
		return -1;
	}

	string line;
	string name;
	string getsName;

	while (getline(input, line))
	{
		istringstream rows(line);
		is >> getsName;

		int numbers;
		getline(rows, name, ' ');

		if (name == getsName)
		{
			rows >> numbers;
			os << numbers << endl;
			break;
		}

	} 

	if (getsName != name)
	{
		os << "error" << endl;
	}

	return 0;
}

void numberChase(const std::string& filename, std::ostringstream& os)
{
	ifstream input(filename, std::ios::in | std::ios::binary);

	int a = 0;

	while (1 == 1)
	{
		input.read(reinterpret_cast<char*>(&a), sizeof(int));

		os << a << endl;

		if (a < 0)
		{
			break;
		}

		input.seekg(a * sizeof(int));
	}

}