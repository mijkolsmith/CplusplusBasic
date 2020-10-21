#include "pch.h"
#include "Sok.h"

Sok::Sok(const Sok& c)
{
	if (this == &c) return;
	color = c.color;
	return;
}

Sok& Sok::operator=(const Sok& c)
{
	if (this == &c) return *this;
	color = c.color;
	return *this;
}

std::string Sok::getColor()
{
	return color;
}