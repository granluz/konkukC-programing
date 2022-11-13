#include "Point.h"

Point::Point(const int& X, const int& Y)
	:x(X), y(Y)//생성자 함수 바디가 아닌 이니셜라이저 부분에서 초기화 가능
{
	cout << "함수 생성시 딱 한번 호출되는 생성자" << endl;
}
Point::Point()
	:x(0), y(0)
{
	cout << "디폴트 생성자" << endl;
}
Point::~Point()
{
	cout << "소멸자 호출" << endl;
}
void Point::init(const int& X, const int& Y)
{
	x = X;
	y = Y;
}
void Point::setXY(const int& X, const int& Y)
{
	x = X;
	y = Y;
}
void Point::showPoint() const
{
	cout << x << ", " << y << endl;
}
int Point::getX() const
{
	return x;
}
int Point::getY() const
{
	return y;
}

void Point::move(const int& dist)
{
	x += dist;
	y += dist;
}