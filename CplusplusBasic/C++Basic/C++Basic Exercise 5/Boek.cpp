#include "pch.h"
#include "Boek.h"

Boek::Boek(std::string _naam) : naam(_naam), uitgeleend(false) {}

Boek::Boek(const Boek& b)
{
	if (this == &b) return;
	naam = b.naam;
	uitgeleend = b.uitgeleend;
	return;
}

void Boek::leenUit()
{
	uitgeleend = true;
}

void Boek::brengTerug()
{
	uitgeleend = false;
}

Boek& Boek::operator=(const Boek & b)
{
	if (this == &b) return *this;
	naam = b.naam;
	uitgeleend = b.uitgeleend;
	return *this;
}

bool Boek::getUitgeleend()
{
	return uitgeleend;
}

std::string Boek::getName()
{
	return naam;
}