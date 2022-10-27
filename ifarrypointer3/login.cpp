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
		cout << "로그인하시겠습니까 ? (Y / N)";
		cin >> select;
		if (select == 'Y')
		{
			cout << "아이디를 입력해주세요 :";
			cin >> id;
			for (int i = 0; i < 3; i++)
			{
				if (strcmp(id, userinfo[i][0]) == 0)
				{
					cout << "비밀번호를 입력해주세요 :";
					cin >> pw;
					if (strcmp(pw, userinfo[i][1]) == 0)
					{
						cout << "로그인에 성공하였습니다." << endl;
						break;
					}
					else if (strcmp(pw, userinfo[i][1]) == 1)
					{
						"비밀번호를 다시 확인해주세요.\n";
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
