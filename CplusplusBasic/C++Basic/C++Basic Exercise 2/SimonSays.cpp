#include "pch.h"
#include "SimonSays.h"

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

int main()
{
	SimonSays ss;
	//ss = SimonSays();
	ss.init();
	while (true)
	{
		ss.update();
	}
	return 0;
}

void SimonSays::init()
{
	allNumbers = 0;
	srand(time(NULL));
	addNumber();
	addNumber();
}

void SimonSays::update()
{
	addNumber();
	printNumbers();
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	system("CLS");

	int x;
	std::cin >> x;
	system("CLS");

	if (x != allNumbers)
	{
		init();
	}
}

void SimonSays::addNumber()
{
	int testNumbers = allNumbers;
	testNumbers *= 10;
	if (testNumbers < 0)
	{
		std::cout << "You win! (underflow error)";
		init();
		return;
	}
	else
	{
		allNumbers *= 10;
		allNumbers += rand() % 10;
	}
}