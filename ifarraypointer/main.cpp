#include <iostream>

using namespace std;


/*
int arr[5];
�ǹ� :
1. �޸𸮿� int�� �� 5���� ��´�.
2. ��򰡿� �޸𸮰� �����ְ� �� �޸��� �ּҰ��� �迭�� �̸��� ����Ų��. 
3. �� ���� �Ϲ� �����̴�. arr[0], arr[1], arr[2] ... 
	>> �� ���� �����̹Ƿ� arr[0] = 5; �� ������ �����ϴ�.
	>> &num[0]�� �ּҰ��� ��Ÿ �� �� �ִ�.
4. &num[0]�� �迭�� ù��° ���� �ּҰ��̹Ƿ� &num�� �ּҰ��� ����.
5. �ּҰ��� ��°��� ���������� �迭�� �̸��� �ּ� ����̴�.
   >>����̹Ƿ� ���� �� �� ����. ex) 101ȣ �����ڴ� ���� �����ϳ� 101ȣ ��ü�� ������ �ʴ´�.
6. ������ �迭 int num[3][4] �� ��4���� 3��¥�� �ǹ��̴�.
   >> �ּҴ� �� ���� ù��° ��
*/
/*
int* pnum = num;
1. ��� ������ Ÿ���� 4byte
2. 100������ �ش��ϴ� ���� �־��ش�.
3. �����ʹ� �ּҸ� ����Ű�� ����
4. int* pnum = num;
   >> const int* num = �ּ�
5. �����ʹ� �迭ó�� ��� �����ϴ�.
	>> num + 0 == num[0] -> num + 1 == num[1]
*/

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


