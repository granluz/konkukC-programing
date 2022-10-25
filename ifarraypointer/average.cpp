# include "menu.h"
#include "average.h"
//학생 5명의 성적을 입력 받고, 평균을 출력하시오
#define SIZE 5
void average()
{
	int arr[SIZE];
	int sum = 0;
	int avr;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "성적을 입력 해주세요. :";
		cin >> arr[i];
		sum = sum + arr[i];
		cout << endl;
		cout << i + 1 << "번 학생의 성적은 : " << arr[i] << "점 입니다.\n";
	}
	avr = sum / SIZE;
	cout << "모든 학생의 평균은 ?\n" << avr << "점입니다." << endl;
}
