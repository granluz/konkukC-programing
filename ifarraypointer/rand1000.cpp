#include "rand1000.h"

void rand1000()
{
	srand((unsigned)time(NULL));

	int num[10] = { 0, };
	int sum = 0;
	for (int i = 0; i < 1000; i++)
	{
		num[rand() % 10]++;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << i << '\t' << num[i] << endl;
		sum += num[i];
	}
	cout << sum;
}
