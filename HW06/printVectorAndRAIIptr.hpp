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

template<typename T>
class RAIIPtr
{
public:
	RAIIPtr(const T* val);
	RAIIPtr* operator -> ()const
	{
		return RAIIPtr;
	}
private:
	T* _val;
};


#endif // !PRINTVECTORANDRAIIPTR_HPP_
