#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include "Classes.h"

void functionC() {
	//your code here
	throw std::runtime_error("Error");
}

void functionB() {
	// your code here
	Stuff C;
	cout << "Starting functionB()" << endl;
	functionC();
	cout << "Ending functionB()" << endl;
}

void functionA() {
	// your code here
	try 
	{
		functionB();
	}
	catch (const std::exception& e)
	{
		cout << "Caught an exception: " << e.what() << endl;
	}
	// your code here
}
int main() {
	cout << "Starting main()" << endl;
	functionA();
	cout << "Ended normally." << endl;
	return 0;
}
