#include <iostream>

using namespace std;

int main()
{
	int col, row;
	cin >> col >> row;
	int** parr = new int*[row];
	for (int i = 0; i < row; i++)
	{
		parr[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			parr[i][j] = j;
		}
	}
	
	for (int i = 0; i < row; i++)
		delete[] parr[i];//�� ����
	delete[] parr;//�� ����
	
	return 0;
}