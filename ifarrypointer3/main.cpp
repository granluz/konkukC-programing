#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	//10���� ���� �����͸� �����ϰ� ������ ��, ���� �������� ������ �����Ű�� ����, �����͸� �����Ͽ� ����ϼ���.

	int num[10] = { 1,5,6,2,9,3,4,8,10,7 };

	cout << "���� �� : ";
	for (int i = 0; i < 10; i++)
	{		
		cout << num[i] << " ";
	}
	cout << endl;

	sort(num, num + 10, greater<>());
	cout << "�������� : ";
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
	//���� ����...
	return 0;
}