/*
Lab #4
Christopher Glass
9/17/2019
making a text file that has the line of text printed out by how many times user wants
*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int times;
	std::string word;
	std::string stimes;


	std::ofstream ofile("lab4.txt");

	std::ifstream ifile("lab4.txt");
	
	if (ifile)
	{
		cout << "Enter a number: ";
		std::getline(cin, stimes);
		std::istringstream uin(stimes);
		uin >> times;
		cout << "Enter a line of text:";
		std::getline(cin, word);

		for (int x = 0; x < times; x++)
		{
			ofile << word << endl;
		}

	}
	else
	{
		cout << "Unable to open file try again!\n";
	}
	return 0;
}

