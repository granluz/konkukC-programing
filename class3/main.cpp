#include <iostream>
#include "Salesman.h"
#include "SalesReport.h"

int main()
{
	//team1 3���� ���
	SalesReport team1(3);
	//team1�� team2�� �ְ�ʹ�.
	SalesReport team2(team1);
	cout << team1.getTeamInfo() << endl;
	cout << team2.getTeamInfo() << endl;
	return 0;
}