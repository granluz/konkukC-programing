#include <iostream>

using namespace std;


//�Ϲ����� �迭
//bool checkID(char a[][2][10], char b[])
//������ ���
//bool checkID(char(*a)[2][10], char* b, int &c)//�����ͺ��� ����� ���� �������� ��ŵ ����
//���۷��� ���� Ÿ��
bool checkID(char(&a)[3][2][10], char(&b)[10], int &c)//���۷��� ������ �����Ҷ��� ũ�� ������ �� ����Ѵ�.
{
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(b, a[i][0]) == 0)
		{
			c = i;
			return true;
		}
		else
		{
			return false;
		}
	}
}

bool checkPW(char(&a)[3][2][10], char (&b)[10], int& c)
{	
	if (strcmp(b, a[c][1]) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main() {
	
	char userinfo[3][2][10] =
	{
		{"greenjoa1", "1234"},
		{"greenjoa2", "2234"},
		{"greenjoa3", "3234"}
	};
	char id[10];
	char pw[10];
	cin >> id >> pw;
	int index;
	if (checkID(userinfo, id, index))
	{		
		if (checkPW(userinfo, pw, index))
		{
			cout << "�α��� ����";
		}
		else
		{
			cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�.";
		}		
	}
	else
	{
		cout << "���̵� �����ϴ�.";
	}
	
	return 0;
}