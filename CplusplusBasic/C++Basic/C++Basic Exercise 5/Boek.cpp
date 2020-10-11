#include "pch.h"
#include "Boek.h"

Boek::Boek(std::string _naam) : naam(_naam), uitgeleend(false) {}

void Boek::leenUit()
{
	uitgeleend = true;
}

void Boek::brengTerug()
{
	uitgeleend = false;
}

bool Boek::getUitgeleend()
{
	return uitgeleend;
}

std::string Boek::getName()
{
	return naam;
}
