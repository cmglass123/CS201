#ifndef WRAPPER_HPP
#define WRAPPER_HPP
#include<iostream>

template <typename T>
class Wrapper
{
	template <typename U>
	friend std::ostream& operator<<(std::ostream&, const Wrapper<U>&);
public:
	Wrapper(const T& one);
private:
	T _num;
};

template <typename T>
Wrapper<T>::Wrapper(const T& one) :_num(one)
{}

template <typename U>
std::ostream& operator<<(std::ostream& os, const Wrapper<U>& to)
{
	return os << to._num;
}

#endif // !WRAPPER_HPP
