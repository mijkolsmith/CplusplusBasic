#pragma once
#include "Coin.h"
class Euro : public Coin
{
private:
	int worth = 100;
public:
	Euro() : Coin(worth) {}
};