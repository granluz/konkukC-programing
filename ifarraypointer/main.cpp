#include <iostream>

using namespace std;

int main() {

	int select;
	int price = 0;	
	char select2;
	do
	{
		cout << "1) �Ƹ޸�ī��  2) ī���  3) ����  4) ����" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			price += 100;
			break;
		case 2:
			price += 200;
			break;
		case 3:
			cout << "��ü �ݾ��� �հ��  : " << price << " �� �Դϴ�.\n";
			cout << "���� �Ͻðڽ��ϱ�? (y/n)";
			cin >> select2;
			if (select2 == 'y')
			{
				price = 0;
				break;
			}
			else if (select2 == 'n')
			{
				cout << "�ֹ��� �ʱ�ȭ �մϴ�.\n";
				price = 0;
				break;
			}
		}

	} while (select != 4);

	return 0;	
}


