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

int getIdfromFile(string fileName, istringstream & is, ostringstream & os)
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
		is >> name;

		int numbers;
		getline(rows, getsName, ' ');

		if (getsName == name)
		{
			rows >> numbers;
			os << numbers;
			break;
		}

	}

	if (getsName != name)
	{
		os << "There is an Error\n";
	}

	return 0;
}

void numberChase(std::string filename, std::ostringstream & os)
{
	ifstream input(string filename, std::ios::in | std::ios::binary);

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