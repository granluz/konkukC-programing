#pragma once
#include "Point.h"
#include "Dice.h"

class Player
{

private:
	Dice dice1, dice2;	
	//플레이어의 이름
	string name;
	//주사위 두개를 던진다.
	int total;
public:
	//생성자 소멸자
	Player(const string& name);
	Player();
	~Player();
	//이름의 정보값 세팅
	void setName(const string& pname);
	//플레이어 이름정보 반환
	string getName();
	//주사위 두개 던지는 함수
	void roll();
	//토탈 값 반환
	int getTotal();
};

