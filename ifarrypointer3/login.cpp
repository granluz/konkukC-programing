#include "login.h"
	
void login()
{
	char userinfo[3][2][10] =
	{
		{"greenjoa1", "1234"},
		{"greenjoa2", "2234"},
		{"greenjoa3", "3234"}
	};
	char id[10];
	char pw[10];
	char select;
	while (true)
	{
		system("cls");
		cout << "�α����Ͻðڽ��ϱ� ? (Y / N)";
		cin >> select;
		if (select == 'Y')
		{
			cout << "���̵� �Է����ּ��� :";
			cin >> id;
			for (int i = 0; i < 3; i++)
			{
				if (strcmp(id, userinfo[i][0]) == 0)
				{
					cout << "��й�ȣ�� �Է����ּ��� :";
					cin >> pw;
					if (strcmp(pw, userinfo[i][1]) == 0)
					{
						cout << "�α��ο� �����Ͽ����ϴ�." << endl;
						break;
					}
					else if (strcmp(pw, userinfo[i][1]) == 1)
					{
						"��й�ȣ�� �ٽ� Ȯ�����ּ���.\n";
						break;
					}
				}
			}
		}
		else if (select == 'N')
		{
			break;
		}
		system("pause");
	}
}
