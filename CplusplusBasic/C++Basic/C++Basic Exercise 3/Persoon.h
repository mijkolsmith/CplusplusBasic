#ifndef PERSOON_H
#define PERSOON_H

#include <string>
#include <iostream>

class Persoon {
private:
	int leeftijd;
	std::string naam;
public:
	Persoon()
	{
	}
	Persoon(int _leeftijd)
	{
		leeftijd = _leeftijd;
	}
	Persoon(std::string _naam)
	{
		naam = _naam;
	}
	Persoon(int _leeftijd, std::string _naam)
	{
		leeftijd = _leeftijd;
		naam = _naam;
	}
	int getAge()
	{
		return leeftijd;
	}
	std::string getName()
	{
		return naam;
	}
};
#endif