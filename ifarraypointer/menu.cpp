#include "menu.h"
/*
- 다음 메뉴를 출력한 후, 종료 메뉴를 선택할 때까지 반복 실행한다.

	1) 아메리카노 2) 카페라떼 3)결제 4)종료
	선택하세요 :

- 선택 메뉴 : 아메리카노 : 100원, 카페라떼 : 200원
→ “주문완료” 출력
- 결제를 선택하면 지금까지 주문한 전체 금액의 합계를 출력한다.
- 결제 후, 새로 주문하면 새로운 주문에 대한 합계를 계산하고 출력해야 한다.
*/
void selectMenu()
{
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
}
