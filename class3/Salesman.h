#pragma once
#include <string>
#include <iostream>

using namespace std;

class Salesman
{
private:
	string name;
	double sales;
public:
	Salesman();
	~Salesman();
	Salesman(string name, double sales);
	void setName(string name);
	void readInput();
	string getSalesmanInfo();
	double getSales()
	{
		return sales;
	}
};

