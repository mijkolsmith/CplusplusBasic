#include <iostream>

class SimonSays
{
public:
	void init();
	void update();

private:
	int allNumbers = 0;
	void printNumbers()
	{
		std::cout << allNumbers;
	}
	void addNumber();
};