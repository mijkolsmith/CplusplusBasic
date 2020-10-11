#pragma once
#include "Coin.h"

class SpecialCoin : public Coin
{
private:
	int worth = 5000;
public:
	SpecialCoin() : Coin(worth) {}
};