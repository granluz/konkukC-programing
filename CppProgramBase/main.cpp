#include<iostream>

using namespace std;

int main() {


	int num1, num2;
	cout << "�������� ������ �Է� �Ͻʽÿ�. :";
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
		cout << "�� ��° �Է� ���ڰ� �� Ŀ�� �մϴ�";
	}
	return 0;
}