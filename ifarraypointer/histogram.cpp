#include "histogram.h"

void his()
{
	//다섯명의 성적이 저장된 배열 정보를 기반으로 히스토그램을 그리시오
	//10점 만점
	int count[SIZE] = {0,};
	for (int i = 0; i < SIZE; i++)
	{
		cin >> count[i];		
	}
		
	for (int i = 0; i < SIZE; i++)
	{		
		cout << "번호 " << i + 1 << " :";
		for (int j = 0; j < count[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}
