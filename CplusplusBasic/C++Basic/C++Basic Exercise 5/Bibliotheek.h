#pragma once
#include "Boek.h"
#include <iostream>
#include <vector>

class Bibliotheek {
private:
	std::vector<Boek*> boeken;
public:
	Bibliotheek();
	Bibliotheek(const Bibliotheek& b);
	void addBoek(Boek* _boek)
	{
		boeken.insert(boeken.end(), _boek);
	}
	void leenBoek(Boek* _boek);
	void returnBoek(Boek* _boek);
	Bibliotheek& operator=(const Bibliotheek& b);
	~Bibliotheek();
};