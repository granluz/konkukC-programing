#include "dan.h"
#include <string>
#include <sstream>


int main() {
	//dan();
	cout << "�̸� ����� ����� ���м����� �Է� ���ּ��� : ";
	string str1;
	getline(cin, str1);
	
	//��� ���ڿ� ������ �����ϰ�ʹ�
	stringstream ss;
	ss.str(str1);
	string name;
	ss >> name;
	int score = 0;
	int sum = 0;
	while (ss >> score)
	{
		sum += score;			
	}
	cout << name << " : " << sum;
	
	return 0;
}