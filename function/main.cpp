#include <iostream>

using namespace std;


//일반적인 배열
//bool checkID(char a[][2][10], char b[])
//포인터 방식
//bool checkID(char(*a)[2][10], char* b, int &c)//포인터변수 선언시 제일 고차원은 스킵 생략
//레퍼런스 참조 타입
bool checkID(char(&a)[3][2][10], char(&b)[10], int &c)//레퍼런스 변수로 선언할때는 크기 정보를 다 줘야한다.
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
			cout << "로그인 성공";
		}
		else
		{
			cout << "비밀번호가 틀렸습니다.";
		}		
	}
	else
	{
		cout << "아이디가 없습니다.";
	}
	
	return 0;
}