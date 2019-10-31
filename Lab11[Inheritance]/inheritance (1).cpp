
#include <iostream>

class Person
{
public:

	Person() : _age(0)
	{
		std::cout << "Made a person with age " << _age << std::endl;
	}

	Person(int age) : _age(age)
	{
		std::cout << "Made a person with age " << _age << std::endl;
	}

	~Person()
	{
		std::cout << "Got rid of a person" << std::endl;
	}

	int getAge()
	{
		return _age;
	}

	void setAge(int age)
	{
		_age = age;
	}


protected:
	int _age;
};

class Derived : public Person
{
	
};


int main()
{
	Person p(20);
}

