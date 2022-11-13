#include "SalesReport.h"

SalesReport::SalesReport()
    :number(0), team(NULL)
{
}

SalesReport::~SalesReport()
{
    if(team != NULL)
    delete[] team;
}

SalesReport::SalesReport(int number)
    :number(number)
{
    team = new Salesman[number];
    for (int i = 0; i < number; i++)
    {
        team[i].readInput();
    }
}

void SalesReport::computeStats()
{
    this->highestSalesindex = 0;
    this->highestSales = team[0].getSales();
    this->averageSales = team[0].getSales();
    for (int i = 1; i < number; i++)
    {
        averageSales += team[i].getSales();
        //Max Value
        if (this->highestSales < team[i].getSales())
        {
            this->highestSales = team[i].getSales();
            this->highestSalesindex = i;
        }
    }
    //��� ���ϱ�
    this->averageSales = this->averageSales / this->number;
}

//���۷����� ���� �ش� ��ü�� ���� ���� �����Ѵ�.
Salesman& SalesReport::getBestClerk()
{
    return team[this->highestSalesindex];
}

string SalesReport::getTeamInfo()
{
    return to_string(this->number);
}

SalesReport& SalesReport::getTeam()
{
    //�� Ŭ���� ��ü�� �������� �Ѱ��ش�.
    return *this;
    // TODO: ���⿡ return ���� �����մϴ�.
}


