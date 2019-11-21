
#include <iostream>
#include "Wrapper.h"
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
	Wrapper<int> w (2);
	Wrapper<string>  s ("Hello world!");

	cout << w << " " << s << endl;
}
