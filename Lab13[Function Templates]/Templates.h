#pragma once
template <class T>
void twice(const T &t)
{

	std::cout << t + t << std::endl;
	
}

void twice(const char* w)
{
	std::string word(w);
	std::cout << word + word;
}