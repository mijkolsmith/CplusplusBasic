#pragma once
#include "Coffee.h"
#include "Coin.h"
#include <iostream>
#include <string>
#include <vector>

class CoffeeMachine
{
private:
	std::vector<std::string> coffeeTypes = {
		{"Standard"},
		{"Latte"},
		{"Choco"}
	};
	Coffee* standard;
	Coffee* latte;
	Coffee* choco;
	Coin* coin;
	int coffeePrice;
public:
	CoffeeMachine() 
	{

	}

	bool ChooseCoffee(std::string _name)
	{
		if (std::find(std::begin(coffeeTypes), std::end(coffeeTypes), _name) != std::end(coffeeTypes))
		{
			if (_name == coffeeTypes[0])
			{
				Coffee* standard = new Coffee("Standard", 50);
				coffeePrice = standard->getPrice();
			}
			else if (_name == coffeeTypes[1])
			{
				Coffee* latte = new Coffee("Latte", 100);
				coffeePrice = latte->getPrice();
			}
			else if (_name == coffeeTypes[2])
			{
				Coffee* choco = new Coffee("Choco", 200);
				coffeePrice = choco->getPrice();
			}
			
			TryPayCoffee();
			
			return true;
		}
		else
		{
			std::cout << "No valid coffee was chosen";
			return false;
		}
	}

	bool ChooseCoffee()
	{
		std::cout << "No valid coffee was chosen";
		return false;
	}

	void CheckCoffee(std::string _name)
	{
		if (ChooseCoffee(_name) == false)
		{
			std::string name;
			std::cout << "What type of coffee would you like?\nStandard for 50 cents,\nLatte for 1 euro,\nChoco for 2 euros.\n\n";
			std::cin >> name;
			CheckCoffee(name);
		}
	}

	void TryPayCoffee()
	{
		int number;
		system("CLS");
		std::cout << "Now please pay appropriately. You can pay with fifty cent, 1 euro or a special coin." <<
			"\nType in the amount of cents. The coins are worth: 50, 100, or 5000\n\n";
		std::cin >> number;

		if (number = 50)
		{
			coin = new Coin(50);
			PayCoffee();
		}
		if (number = 100)
		{
			coin = new Coin(100);
			PayCoffee();
		}
		if (number = 5000)
		{
			coin = new Coin(5000);
			PayCoffee();
		}
	}
	
	void PayCoffee()
	{
		std::cout << coin->getWorth();
		if (coin->getWorth() >= coffeePrice)
		{
			std::cout << "You have succesfully paid for your Coffee";
		}
		else if (coin->getWorth() < coffeePrice)
		{
			coffeePrice -= coin->getWorth();
			std::cout << "You haven't fully paid for your coffee. The remaining price is " << coffeePrice;
			TryPayCoffee();
		}
	}
};