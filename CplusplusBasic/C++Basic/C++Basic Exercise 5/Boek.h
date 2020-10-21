#pragma once
#include <iostream>
#include <string>
class Boek {
private:
	std::string naam;
	bool uitgeleend;
public:
	Boek(std::string _naam);
	Boek(const Boek& b);
	void leenUit();
	void brengTerug();
	Boek& operator=(const Boek& b);

	bool getUitgeleend();
	std::string getName();
};