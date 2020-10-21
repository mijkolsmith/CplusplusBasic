#include "pch.h"
#include "Caravan.h"
#include <iostream>

int main()
{
	Caravan* caravan = new Caravan("Blauw" );
	Koffer* koffer = new Koffer("Rood");
	Sok* sok1 = new Sok("Groen");
	Sok* sok2 = new Sok("Groen");
	koffer->addSokken(sok1, sok2);
	caravan->addKoffer(koffer);

	std::cout << "Kleur van de koffer: " << caravan->getKoffer()->getColor() << "\nIn de koffer zitten 2 sokken van de kleur " << caravan->getKoffer()->getSok(1)->getColor() << " en " << caravan->getKoffer()->getSok(2)->getColor() << std::endl;
	system("pause");

	Caravan* gestolenCaravan = new Caravan(*caravan);
	//gestolenCaravan = caravan;
	delete caravan;
	std::cout << "Kleur van de koffer: " << gestolenCaravan->getKoffer()->getColor() << std::endl;
	std::cout << "In de koffer zitten 2 sokken van de kleur " << gestolenCaravan->getKoffer()->getSok(1)->getColor();
	std::cout << " en " << gestolenCaravan->getKoffer()->getSok(2)->getColor() << std::endl;
	system("pause");

	return 0;
}