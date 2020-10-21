#include "pch.h"
#include "Bibliotheek.h"

Bibliotheek::Bibliotheek() {}

Bibliotheek::Bibliotheek(const Bibliotheek& b)
{
	if (this == &b) return;
	boeken[0] = new Boek(*b.boeken[0]);
	return;
}

void Bibliotheek::leenBoek(Boek* _boek)
{
	if (std::find(boeken.begin(), boeken.end(), _boek) != boeken.end() && _boek->getUitgeleend() == false)
	{
		_boek->leenUit();
	}
	else if (_boek->getUitgeleend() == true)
	{
		std::cout << _boek->getName() << " is al uitgeleend.\n";
		system("pause");
	}
}

void Bibliotheek::returnBoek(Boek * _boek)
{
	if (std::find(boeken.begin(), boeken.end(), _boek) != boeken.end() && _boek->getUitgeleend() == true)
	{
		_boek->brengTerug();
	}
	else if (_boek->getUitgeleend() == false)
	{
		std::cout << _boek->getName() << " is al teruggebracht.\n";
		system("pause");
	}
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek & b)
{
	if (this == &b) return *this;
	delete boeken[0];
	boeken[0] = new Boek(*b.boeken[0]);
	return *this;
}

Bibliotheek::~Bibliotheek()
{
	delete boeken[0];
}