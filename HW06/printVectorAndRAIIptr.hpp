#pragma once
#ifndef PRINTVECTORANDRAIIPTR_HPP_
#define PRINTVECTORANDRAIIPTR_HPP_

#include<iostream>
using std::endl;
#include<vector>
using std::vector;
#include <sstream>
using std::ostringstream;


template<typename pV>
void printVector(ostringstream& os, vector<pV> t)
{
	for (auto i : t)
	{
		os << t << endl;
	}
}



#endif // !PRINTVECTORANDRAIIPTR_HPP_
