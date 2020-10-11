#include "pch.h"
#include "CoffeeMachine.h"
#include <iostream>
#include <string>
#include <vector>

int main()
{
	CoffeeMachine cm;

	std::string name;
    std::cout << "What type of coffee would you like?\nStandard for 50 cents,\nLatte for 1 euro,\nChoco for 2 euros.\n\n";
	std::cin >> name;
	cm.CheckCoffee(name);
	return 0;
}