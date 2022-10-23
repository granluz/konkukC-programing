#include "test.h"
#include <iomanip>
int main(){

	A::showName();
	B::showName();

	/*
	출력 포맷팅
	*/
	//setw : 오른쪽 정렬된 출력 폭(width) 지정
	for (int i = 1; i <= 1000; i *= 10)
		cout << setw(6) << i << endl;
	//setw는 그 효과가 1회에 그친다
	cout << setw(6);
	for (int i = 1; i <= 1000; i *= 10)
		cout << i << endl;
	
		
	cout << "구구단의 출력을 원하는 범위를 입력하세요(시작, 끝) : ";
	int first, second;
	cin >> first >> second;
	

	for (int j = 1; j <= 9; j++)
	{		
		cout << setw(2);
		for (int i= first; i <= second; i++)
		{
			cout << i << " * " << j << " = " << i * j << '\t';
		}
		cout << endl;				
	}		
	
	return 0;
}