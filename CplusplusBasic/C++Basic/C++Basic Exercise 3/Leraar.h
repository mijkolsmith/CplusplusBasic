#ifndef LERAAR_H
#define LERAAR_H

#include "Persoon.h"
#include "Student.h"
#include "Punt.h"

class Leraar : public Persoon
{
private:
	int coolheid;
public:
	Leraar(int _leeftijd, std::string _naam, int _coolheid)
	{
		Persoon meTemp(_leeftijd, _naam);
		coolheid = _coolheid;
	}

	void geefLes(Student* _student, int _aantal)
	{
		_student->becomeSlimmer(_aantal * rand() % rand());
	}
	void minderCool()
	{
		coolheid--;
	}

	int getCoolheid()
	{
		return coolheid;
	}
};

#endif