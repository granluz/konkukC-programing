#include "Point.h"

Point::Point(const int& X, const int& Y)
	:x(X), y(Y)//������ �Լ� �ٵ� �ƴ� �̴ϼȶ����� �κп��� �ʱ�ȭ ����
{
	cout << "�Լ� ������ �� �ѹ� ȣ��Ǵ� ������" << endl;
}
Point::Point()
	:x(0), y(0)
{
	cout << "����Ʈ ������" << endl;
}
Point::~Point()
{
	cout << "�Ҹ��� ȣ��" << endl;
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