#include "FruitSeller.h"

int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;   // 사과가 개당 1000원이라고 가정
	numOfApples -= num; //사과의 수가 줄어들고,
	myMoney += money; // 판매 수익이 발생한다.
	return num; // 실제 구매가 발생한 사과의 수를 반환
}

void FruitSeller::ShowSalesResult()
{
	cout << "남은 사과 : " << numOfApples << endl;
	cout << "판매 수익 : " << myMoney << endl;
}

void FruitSeller::InitMembers(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}