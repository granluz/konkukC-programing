#include "Salesman.h"

Salesman::Salesman()
	:name("noname"), sales(0)
{
}

Salesman::~Salesman()
{
}

Salesman::Salesman(string name, double sales)
	:name(name), sales(sales)
{
}

void Salesman::setName(string name)
{
	this->name = name;	
}

void Salesman::readInput()
{
	cout << "�̸��� �Ǹž��� �Է� �ϼ��� : ";
	cin >> name >> sales;
}

string Salesman::getSalesmanInfo()
{
	//to_string()�Լ��� ����Ͽ� string���� ��ȯ
	return "�̸� : " + this->name + ", �Ǹž� : " + to_string(this->sales);
}
