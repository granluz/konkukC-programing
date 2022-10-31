#pragma once

class Point
{
private:
	int x;
	int y;

public:
	void init(const int& X, const int& Y);
	void setXY(const int& X, const int& Y);
	void showPoint() const;
	int getX() const;
	int getY() const;
	void move(const int& dist);

};

