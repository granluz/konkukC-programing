#include<iostream>

using namespace std;

int main() {

	int num1, num2;
	cout << "�������� ������ �Է� �Ͻʽÿ�. :";
	cin >> num1 >> num2;
	
	if (num1 > num2)
	{
		cout << "ù ��° �Է� ���ڰ� �� ũ�Ƿ�, ���۰� ���� ���� �ٲ㼭 ����ұ��(y/n)?";
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