#pragma once
#include "cinema.h"


//극장 좌석 예약하는 프로그램을 작성하고자 한다.
//좌석 수를 6x4로 할 경우, 빈 좌석을 입력 받으면
//예약완료, 예약된 좌석을 선택한 경우, 예약 불가라고 출력한다.

void reservation()
{
	const int a = 6;
	const int b = 4;
	int cinema1[a][b] = { 0, };
	string chair[2] = {"○", "●"};
	string alpha[6] = { "A", "B", "C", "D", "E", "F" };
	char select;	
	int price= 0;
	while (true)
	{
		system("cls");
		for (int i = 0; i < a; i++)
		{
			cout << alpha[i] << " ";
			for (int j = 0; j < b; j++)
			{
				switch (cinema1[i][j])
				{
				case 0:
					cout << chair[0];
					break;
				case 1:
					cout << chair[1];
					break;
				}
			}
			cout << endl;
		}
		cout << '\n' << "예매를 진행하시겠습니까? (Y/N) :";
		cin >> select;
		if (select == 'Y')
		{
			cout << "예매할 좌석을 입력 해주세요. ex)A1 -> :";
			char x;
			char y;
			cin >> x >> y;			
			if (cinema1[x - 'A'][y - '1'] == 0)
				//아스키코드로 생각하자. ex B 2 == 98 50 과 같다 즉 'B' - 'A'는 98 - 97 
			{
				cinema1[x - 'A'][y - '1'] = 1;
				cout << "예약되었습니다." << endl;
				price = price + 12000;
			}
			else if (cinema1[x - 'A'][y - '1'] == 1)
			{
				cout << "이미 예약된 자리입니다." << endl;
				cout << "예약을 취소하시겠습니까? (Y/N) :";
				cin >> select;
				if (select == 'Y')
				{
					cinema1[x - 'A'][y - '1'] = 0;
					cout << "예약을 취소하였습니다." << endl;
				}
				else if (select == 'N')
				{
					continue;
				}				
			}			
			system("pause");
		}
		else if(select == 'N')
		{			
			cout << '\n' << "결제 하실 금액은 :" << price << "원 입니다.\n";
			break;
		}
	}	
}
