# include "menu.h"
#include "average.h"
//�л� 5���� ������ �Է� �ް�, ����� ����Ͻÿ�
#define SIZE 5
void average()
{
	int arr[SIZE];
	int sum = 0;
	int avr;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������ �Է� ���ּ���. :";
		cin >> arr[i];
		sum = sum + arr[i];
		cout << endl;
		cout << i + 1 << "�� �л��� ������ : " << arr[i] << "�� �Դϴ�.\n";
	}
	avr = sum / SIZE;
	cout << "��� �л��� ����� ?\n" << avr << "���Դϴ�." << endl;
}
