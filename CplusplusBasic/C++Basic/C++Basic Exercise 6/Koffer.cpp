#include "pch.h"
#include "Koffer.h"

Koffer::Koffer(const Koffer& c)
{
	if (this == &c) return;
	color = c.color;
	addSokken(new Sok(*c.sok1), new Sok(*c.sok2));
	return;
}

Koffer& Koffer::operator=(const Koffer& c)
{
	if (this == &c) return *this;
	delete sok1;
	delete sok2;
	addSokken(new Sok(*c.sok1), new Sok(*c.sok2));
	return *this;
}

void Koffer::addSokken(Sok* _sok1, Sok* _sok2)
{
	sok1 = _sok1;
	sok2 = _sok2;
}

std::string Koffer::getColor()
{
	return color;
}

Sok* Koffer::getSok(int i)
{
	if (i == 1)
	{
		return sok1;
	}
	if (i == 2)
	{
		return sok2;
	}
}

Koffer::~Koffer()
{
	delete sok1;
	delete sok2;
}