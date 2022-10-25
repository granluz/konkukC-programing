#pragma once
#include "map.h"

#define ROW 10
#define COL 10
//10x10의 맵을 생성하고, 3종류의 아이템을 랜덤하게 생성한 후, 맵에 위치 시킨 후 출력하시오.
void createMap()
{
	int map[ROW][COL] = { 0, };
	string item[4] = { "□", "★", "＠", "●" };
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

	for (int i = 0; i < 10; i++)//열
	{
		for (int j = 0; j < 10; j++)//행
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
