#include<iostream>

using namespace std;

int main() {


	int num1, num2;
	cout << "구구단의 범위를 입력 하십시오. :";
	cin >> num1 >> num2;
	if (num1 < num2)
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
	else
	{
		cout << "두 번째 입력 숫자가 더 커야 합니다";
	}
	return 0;
}