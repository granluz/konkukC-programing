#include "sort.h"
#include "algo.h"

void printArr(int* num) {
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
}

void sort()
{
	int num[10] = { 1,5,6,2,9,3,4,8,10,7 };
	cout << "������ : ";
	printArr(num);
	int* num2[10];
	for (int i = 0; i < 10; i++)
	{
		num2[i] = &num[i];
		//cout << num2[i] << " " << &num[i] << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (*num2[i] > *num2[j])
			{
				int* temp = num2[i];
				num2[i] = num2[j];
				num2[j] = temp;
			}

		}
	}
	cout << "���� �� : ";
	printArr(num);
	cout << endl;
	cout << "���� �� : ";
	for (int* i : num2)
	{
		cout << *i << " ";
	}
}



