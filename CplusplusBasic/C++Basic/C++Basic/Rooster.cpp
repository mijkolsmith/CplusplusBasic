#include "pch.h"
#include "Rooster.h"
#include "Student.h"

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
	Student student1(GDEV);
	Student student2(GDES);
	Student student3(GART);
	Student student4(IDES);
	Rooster rooster;

	rooster.DisplayRooster(rooster.GetRooster(student1.GetStudentType));
}

void Rooster::DisplayRooster(Rooster rooster)
{
	//display rooster
}