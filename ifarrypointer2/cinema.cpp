#pragma once
#include "cinema.h"


//���� �¼� �����ϴ� ���α׷��� �ۼ��ϰ��� �Ѵ�.
//�¼� ���� 6x4�� �� ���, �� �¼��� �Է� ������
//����Ϸ�, ����� �¼��� ������ ���, ���� �Ұ���� ����Ѵ�.

void reservation()
{
	const int a = 6;
	const int b = 4;
	int cinema1[a][b] = { 0, };
	string chair[2] = {"��", "��"};
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
		cout << '\n' << "���Ÿ� �����Ͻðڽ��ϱ�? (Y/N) :";
		cin >> select;
		if (select == 'Y')
		{
			cout << "������ �¼��� �Է� ���ּ���. ex)A1 -> :";
			char x;
			char y;
			cin >> x >> y;			
			if (cinema1[x - 'A'][y - '1'] == 0)
				//�ƽ�Ű�ڵ�� ��������. ex B 2 == 98 50 �� ���� �� 'B' - 'A'�� 98 - 97 
			{
				cinema1[x - 'A'][y - '1'] = 1;
				cout << "����Ǿ����ϴ�." << endl;
				price = price + 12000;
			}
			else if (cinema1[x - 'A'][y - '1'] == 1)
			{
				cout << "�̹� ����� �ڸ��Դϴ�." << endl;
				cout << "������ ����Ͻðڽ��ϱ�? (Y/N) :";
				cin >> select;
				if (select == 'Y')
				{
					cinema1[x - 'A'][y - '1'] = 0;
					cout << "������ ����Ͽ����ϴ�." << endl;
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
			cout << '\n' << "���� �Ͻ� �ݾ��� :" << price << "�� �Դϴ�.\n";
			break;
		}
	}	
}
