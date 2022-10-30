#include <iostream>
#include <fstream>

using namespace std;

int** readMap(const char* fileName, int &r, int &c)
{
	ifstream fin(fileName);
	int** map = NULL;
	if (fin.is_open())
	{
		int row, col;
		fin >> row >> col;//맵 텍스트파일에 입려한 순서대로 들어간다.
		r = row;
		c = col;
		map = new int* [row];//층이 만들어진다.
		for (int i = 0; i < row; i++)
		{
			map[i] = new int[col];//방만든다
			for (int j = 0; j < col; j++)//각 방에 값을 넣어준다.
			{
				fin >> map[i][j];
			}
		}
	}
	else
	{
		cout << "파일 오픈 오류" << endl;
	}
	return map;
}

void showMap(int** (&map), const int& row, const int& col)
{
	string chair[2] = { "○", "●" };

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			switch (map[i][j])
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
}


int main()
{
	int row, col;
	int** map = readMap("Map1.txt", row, col);
	if (map != NULL)
	{
		showMap(map, row, col);
	}
	
	if (map != NULL)
	{
		for (int i = 0; i < row; i++)
			delete[] map[i];//방 삭제
	}
	delete[] map;//층 삭제
	
	return 0;
}