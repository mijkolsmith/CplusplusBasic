#include "pch.h"
#include "Student.h"
#include "Leraar.h"
#include "Punt.h"

#include <ctime>
#include <iostream>

int main()
{
	srand(time(NULL));

	Student* michael = new Student(21, "Michael", G, 1);
	Leraar* edwin = new Leraar(30, "Edwin", 9999999);
	
	while (true)
	{
		int x;
		std::cout << "Hoeveel les wil je aan Michael geven?\n";
		std::cin >> x;
		if (x < 100)
		{
			edwin->geefLes(michael, x);
			system("CLS");
			std::cout << "Michael's slimheid: " << michael->getSlimheid() << "\n";
			std::cout << "Edwin's coolheid: " << edwin->getCoolheid() << "\n";
		}
		else if (x >= 100)
		{
			system("CLS");
			std::cout << "Dat is echt veel te veel les, niet cool van je.\n";
			edwin->minderCool();
			std::cout << "Edwin's coolheid: " << edwin->getCoolheid() << "\n";
		}
	}
	return 0;
}