#include "Rectangle.h"

void Rectangle::init(const int& x1, const int& y1, const int& x2, const int& y2) {
	LT.init(x1, y1);
	RB.init(x2, y2);
}
void Rectangle::showRectangle() const {
	LT.showPoint();
	RB.showPoint();
}
Point Rectangle::getLT() const {
	return LT;
}
Point Rectangle::getRB() const {
	return RB;
}

int Rectangle::getArea() const
{
	return (RB.getX() - LT.getX()) * (RB.getY() - LT.getY());
}

Point Rectangle::move(const int& dist)
{
	LT.move(dist);
	return LT;
}