#pragma once
#include "Salesman.h"

class SalesReport
{
private:
	Salesman* team;
	double highestSales;
	double averageSales;
	int highestSalesindex;
	int number;

public:
	SalesReport();
	~SalesReport();
	SalesReport(int number);
	void computeStats();
	Salesman& getBestClerk();
	string getTeamInfo();
	SalesReport& getTeam();
	
};

