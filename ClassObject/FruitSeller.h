#pragma once
#include <iostream>
#include <string>

using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;	// ���� ���� ������ �ʴ´ٰ� ������ �� const ������ �ϴ� ���� ����.
	int ORANGE_PRICE;
	int numOfApples;
	int numOfOrange;
	int myMoney;

public:
	int SaleApples(int money);
	
	void ShowSalesResult();
	
	void InitMembers(int price, int num, int money);

};