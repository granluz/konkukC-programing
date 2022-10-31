#include "Point.h"
#include <iostream>
using namespace std;

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