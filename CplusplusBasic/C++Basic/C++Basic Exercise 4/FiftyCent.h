#pragma once
#include "Coin.h"
class FiftyCent : public Coin
{
private:
	int worth = 50;
public:
	FiftyCent() : Coin(worth) {}
};