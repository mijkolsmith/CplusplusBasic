#include "pch.h"
#include "Bibliotheek.h"

Bibliotheek::Bibliotheek()
{
}

void Bibliotheek::addBoek(Boek* _boek)
{
	boeken.insert(boeken.end(), _boek);
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
