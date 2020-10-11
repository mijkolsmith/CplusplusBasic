#pragma once

class Coin
{
private:
	int worth;
public:
	Coin(int _worth) : worth(_worth) {}
	int getWorth();
};