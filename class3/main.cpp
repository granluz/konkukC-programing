#include <iostream>
#include "Salesman.h"
#include "SalesReport.h"

int main()
{
	//team1 3명의 멤버
	SalesReport team1(3);
	//team1을 team2에 넣고싶다.
	SalesReport team2(team1);
	cout << team1.getTeamInfo() << endl;
	cout << team2.getTeamInfo() << endl;
	return 0;
}