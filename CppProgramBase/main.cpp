#include<iostream>

using namespace std;

int main() {

	int num1, num2;
	cout << "구구단의 범위를 입력 하십시오. :";
	cin >> num1 >> num2;
	
	if (num1 > num2)
	{
		cout << "첫 번째 입력 숫자가 더 크므로, 시작과 끝의 값을 바꿔서 출력할까요(y/n)?";
		char a;
		cin >> a;
		if (a == 'y')
		{
			int temp = num1;
			num1 = num2;
			num2 = temp;
			for (int i = 1; i <= 9; i++)
			{
				for (int j = num1; j <= num2; j++)
				{
					cout << j << " * " << i << " = " << i * j << '\t';
				}
				cout << endl;
			}
		}
		else if(a != 'y')
		{
			return 0;
		}
	}
	else
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int j = num1; j <= num2; j++)
			{
				cout << j << " * " << i << " = " << i * j << '\t';
			}
			cout << endl;
		}
	}
	return 0;
}