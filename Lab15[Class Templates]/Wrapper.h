#ifndef WRAPPER_HPP
#define WRAPPER_HPP
#include<iostream>

template <typename Wrap>
class Wrapper
{
	template <typename U>
	friend std::ostream& operator<<(std::ostream&, const Wrapper<U>&);
public:
	Wrapper(const Wrap& one, const Wrap& two);
private:
	Wrap _num;
	Wrap _word;
};

template <typename Wrap>
Wrapper<Wrap>::Wrapper(const Wrap& one, const Wrap& two) :_num(one), _word(two)
{}

template <typename U>
std::ostream& operator<<(std::ostream& os, const Wrapper<U>& to)
{
	os << to._num << " " << to._word;
	return os;
}

#endif // !WRAPPER_HPP
