// lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int times;
	std::string word;

	std::ofstream ofile("lab4.txt");

	std::ifstream ifile("lab4.txt");
	
	if (ifile)
	{
		cout << "enter a number and a word: ";
		cin >> times;
		std::getline(cin, word);

		for (int x = 0; x <= times; x++)
		{
			ifile >> word;
		}
		ofile << word;
	}
	else
	{
		cout << "unable to open file try again!\n";
	}
	return 0;
}

