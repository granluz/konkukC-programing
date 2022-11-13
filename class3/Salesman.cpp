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
	cout << "이름과 판매액을 입력 하세요 : ";
	cin >> name >> sales;
}

string Salesman::getSalesmanInfo()
{
	//to_string()함수를 사용하여 string으로 변환
	return "이름 : " + this->name + ", 판매액 : " + to_string(this->sales);
}
