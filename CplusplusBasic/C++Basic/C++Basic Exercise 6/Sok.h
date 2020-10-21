#pragma once
#include <iostream>
#include <string>

class Sok {
private:
	std::string color;
public:
	Sok() : color("Grijs") {};
	Sok(std::string _color) : color(_color) {};
	Sok(const Sok& c);
	Sok& operator=(const Sok& c);
	std::string getColor();
};