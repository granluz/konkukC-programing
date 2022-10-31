#pragma once
#include <iostream>
#include <string>

using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;	// 과일 값은 변하지 않는다고 가정할 때 const 선언을 하는 것이 좋다.
	int ORANGE_PRICE;
	int numOfApples;
	int numOfOrange;
	int myMoney;

public:
	int SaleApples(int money);
	
	void ShowSalesResult();
	
	void InitMembers(int price, int num, int money);

};