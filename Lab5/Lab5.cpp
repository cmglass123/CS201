/*
Christopher Glass
9/24/2019
Lab #5 {Binary Files}
write a program thats able to open,read,and print a data file
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <fstream>
using std::ifstream;
//seekg
//tellg
//read
//write

int main()
{
	ifstream opFile("data.dat", std::ios::out | std::ios::binary);

	if (opFile)
	{
		opFile.seekg(0, opFile.end);
		int fileLength = opFile.tellg();
		opFile.seekg(0, opFile.beg);

		char * length = new char[fileLength];

		opFile.read(length,fileLength);

		cout.write(reinterpret_cast<const char*>(&fileLength), sizeof(fileLength));

	}
	return 0;
}
