#pragma once
#include "Koffer.h"
#include <iostream>
#include <string>
#include <vector>

class Caravan {
private:
	std::string color;
	Koffer* koffer;
public:
	Caravan() : color("Grijs") {};
	Caravan(std::string _color) : color(_color) {};
	Caravan(const Caravan& c);
	Caravan& operator=(const Caravan& c);
	void addKoffer(Koffer* _koffer);
	Koffer* getKoffer();
	~Caravan();
};