#include "FruitSeller.h"

int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;   // ����� ���� 1000���̶�� ����
	numOfApples -= num; //����� ���� �پ���,
	myMoney += money; // �Ǹ� ������ �߻��Ѵ�.
	return num; // ���� ���Ű� �߻��� ����� ���� ��ȯ
}

void FruitSeller::ShowSalesResult()
{
	cout << "���� ��� : " << numOfApples << endl;
	cout << "�Ǹ� ���� : " << myMoney << endl;
}

void FruitSeller::InitMembers(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}