#pragma once
#include <iostream>
#include <string>

class Coffee
{
private:
	std::string name;
	int price;

public: 
	Coffee(std::string _name, int _price)
	{
		name = _name;
		price = _price;
	}

	std::string getName()
	{
		return name;
	}
	int getPrice()
	{
		return price;
	}
	/*Standard = 50,
	Latte = 100,
	Choco = 200*/
};