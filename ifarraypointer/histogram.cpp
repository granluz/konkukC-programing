#include "histogram.h"

void his()
{
	//�ټ����� ������ ����� �迭 ������ ������� ������׷��� �׸��ÿ�
	//10�� ����
	int count[SIZE] = {0,};
	for (int i = 0; i < SIZE; i++)
	{
		cin >> count[i];		
	}
		
	for (int i = 0; i < SIZE; i++)
	{		
		cout << "��ȣ " << i + 1 << " :";
		for (int j = 0; j < count[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}
