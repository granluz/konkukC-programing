#include "test.h"
#include <iomanip>
int main(){

	A::showName();
	B::showName();

	/*
	��� ������
	*/
	//setw : ������ ���ĵ� ��� ��(width) ����
	for (int i = 1; i <= 1000; i *= 10)
		cout << setw(6) << i << endl;
	//setw�� �� ȿ���� 1ȸ�� ��ģ��
	cout << setw(6);
	for (int i = 1; i <= 1000; i *= 10)
		cout << i << endl;
	
		
	cout << "�������� ����� ���ϴ� ������ �Է��ϼ���(����, ��) : ";
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