#include "rand1000.h"

void rand1000(){
	/*
	rand() 함수를 이용하여 0부터 9까지의 난수 1000개를 만들어
	각 수가 몇번 생성되었는지 카운트하고 출력하시오.
	srand((unsigned)time(NULL));
	*/
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
