#include "pch.h"
#include "Caravan.h"
#include <iostream>

Caravan::Caravan(const Caravan& c)
{
	if (this == &c) return;
	color = c.color;
	addKoffer(new Koffer(*c.koffer));
	return;
}

Caravan& Caravan::operator=(const Caravan& c)
{
	if (this == &c) return *this;
	delete koffer;
	addKoffer(new Koffer(*c.koffer));
	return *this;
}

void Caravan::addKoffer(Koffer* _koffer)
{
	koffer = _koffer;
}

Koffer* Caravan::getKoffer()
{
	return koffer;
}

Caravan::~Caravan()
{
	delete koffer;
}