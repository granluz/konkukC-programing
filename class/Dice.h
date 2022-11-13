#pragma once
#include "Point.h"

class Dice
{
private:
	//주사위 면
	int faceValue;
	

public:
	//생성자 소멸자
	Dice();
	~Dice();
	//난수 발생 1-6
	void roll();
	//값을 반환해주는 함수
	int getFaceValue();
};

