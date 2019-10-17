#pragma once
#ifndef MONEY_HPP_
#define MONEY_HPP_

class Money
{
public:
	Money();
	~Money();

	int getDollars() const;
	int getCents() const;

	void setDollars();
	void setCents();

private:
	int _dollars;
	int _cents;
	double _total;
};



#endif // !MONEY_HPP_
