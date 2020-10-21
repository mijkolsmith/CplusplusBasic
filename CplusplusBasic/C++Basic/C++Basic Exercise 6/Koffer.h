#pragma once
#include "Sok.h"
#include <iostream>
#include <string>
#include <vector>

class Koffer {
private:
	std::string color;
	Sok* sok1;
	Sok* sok2;
public:
	Koffer() : color("Grijs") {};
	Koffer(std::string _color) : color(_color) {};
	Koffer(const Koffer& c);
	Koffer& operator=(const Koffer& c);
	void addSokken(Sok* _sok1, Sok* sok2);
	std::string getColor();
	Sok* getSok(int i);
	~Koffer();
};