#ifndef STUDENT_H
#define STUDENT_H

#include "Persoon.h"
#include "Punt.h"
#include <iostream>

class Student : public Persoon
{
private:
	Punt puntVoorCPPBasic;
	int slimheid;
public:
	Student(int _leeftijd, std::string _naam, Punt _punt, int _slimheid) : Persoon(_leeftijd, _naam)
	{
		puntVoorCPPBasic = _punt;
		slimheid = _slimheid;
	}
	void becomeSlimmer(int _aantal)
	{
		slimheid += _aantal;
		std::cout << "test " << slimheid << "\n";
	}

	int getSlimheid()
	{
		return slimheid;
	}
	int getPunt()
	{
		return puntVoorCPPBasic;
	}
};
#endif