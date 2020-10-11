#pragma once
#include "Boek.h"
#include <iostream>
#include <vector>

class Bibliotheek {
private:
	std::vector<Boek*> boeken;
public:
	Bibliotheek();
	void addBoek(Boek* _boek);
	void leenBoek(Boek* _boek);
	void returnBoek(Boek* _boek);
};