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
    //평균 구하기
    this->averageSales = this->averageSales / this->number;
}

//레퍼런스를 통해 해당 객체의 원본 값을 변경한다.
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
    //이 클래스 자체를 리턴으로 넘겨준다.
    return *this;
    // TODO: 여기에 return 문을 삽입합니다.
}


