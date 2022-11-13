#pragma once
#include <iostream>
#include <string>
#include "time.h"

using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	Point(const int& X, const int& Y);
	Point();
	~Point();
	void init(const int& X, const int& Y);
	void setXY(const int& X, const int& Y);
	void showPoint() const;
	int getX() const;
	int getY() const;
	void move(const int& dist);

};

