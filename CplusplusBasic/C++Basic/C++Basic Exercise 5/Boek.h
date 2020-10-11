#pragma once
#include <iostream>
#include <string>
class Boek {
private:
	std::string naam;
	bool uitgeleend;
public:
	Boek(std::string _naam);
	void leenUit();
	void brengTerug();

	bool getUitgeleend();
	std::string getName();
};