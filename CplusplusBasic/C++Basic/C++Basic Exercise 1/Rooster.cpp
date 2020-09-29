#include "pch.h"
#include "Rooster.h"
#include "StudentWithType.h"

#include <iostream>
enum StudentType
{
	GDEV = 1,
	GART = 2,
	GDES = 3,
	IDES = 4
};

int main()
{
	StudentWithType student1(GDEV);
	StudentWithType student2(GDES);
	StudentWithType student3(GART);
	StudentWithType student4(IDES);
	Rooster rooster;

	rooster.displayRooster(rooster.getRooster(student1.getStudentType));
	return 0;
}

void Rooster::displayRooster(Rooster rooster)
{
	//display rooster
}