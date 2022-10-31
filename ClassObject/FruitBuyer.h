#pragma once
#include "FruitSeller.h"

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money);
	
	void BuyApples(FruitSeller& seller, int money);	
			
	void ShowBuyResult();
	
};