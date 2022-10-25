#pragma once
#include "map.h"

#define ROW 10
#define COL 10
//10x10�� ���� �����ϰ�, 3������ �������� �����ϰ� ������ ��, �ʿ� ��ġ ��Ų �� ����Ͻÿ�.
void createMap()
{
	int map[ROW][COL] = { 0, };
	string item[4] = { "��", "��", "��", "��" };
	srand(time(NULL));
	for (int i = 1; i < 4; i++)
	{
		int x = rand() % 10;
		int y = rand() % 10;
		if (map[x][y] == 0)
		{
			map[x][y] = i;
		}
		else
		{
			i--;
		}
	}

	for (int i = 0; i < 10; i++)//��
	{
		for (int j = 0; j < 10; j++)//��
		{
			switch (map[i][j])
			{
			case 0:
				cout << item[0];
				break;
			case 1:
				cout << item[1];
				break;
			case 2:
				cout << item[2];
				break;
			case 3:
				cout << item[3];
				break;
			}
		}
		cout << endl;
	}
}
