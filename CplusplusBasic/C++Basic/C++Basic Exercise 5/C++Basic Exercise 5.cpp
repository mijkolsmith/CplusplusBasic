#include "pch.h"
#include "Boek.h"
#include "Bibliotheek.h"
#include <iostream>

Bibliotheek* bt;
Boek* bk;
bool restartLoop = true;

void bookLoop()
{
	std::string x;
	std::cout << "Wil je het boek \"A Study In Scarlet\" lenen?\nJa of nee:\n";
	std::cin >> x;
	if (x == "Ja" || x == "ja")
	{
		bt->leenBoek(bk);
	}
	system("CLS");
	
	std::cout << "Wil je het boek \"A Study In Scarlet\" terugbrengen?\nJa of nee:\n";
	std::cin >> x;
	if (x == "Ja" || x == "ja")
	{
		bt->returnBoek(bk);
	}
	system("CLS");

	restartLoop = true;
}

int main()
{
	bt = new Bibliotheek();
	bk = new Boek("A Study In Scarlet");
	bt->addBoek(bk);

	while(restartLoop)
	{
		restartLoop = false;
		bookLoop();
	}
}