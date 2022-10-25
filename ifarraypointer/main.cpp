#include <iostream>

using namespace std;

int main() {

	int select;
	int price = 0;	
	char select2;
	do
	{
		cout << "1) 아메리카노  2) 카페라떼  3) 결제  4) 종료" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			price += 100;
			break;
		case 2:
			price += 200;
			break;
		case 3:
			cout << "전체 금액의 합계는  : " << price << " 원 입니다.\n";
			cout << "결제 하시겠습니까? (y/n)";
			cin >> select2;
			if (select2 == 'y')
			{
				price = 0;
				break;
			}
			else if (select2 == 'n')
			{
				cout << "주문을 초기화 합니다.\n";
				price = 0;
				break;
			}
		}

	} while (select != 4);

	return 0;	
}


