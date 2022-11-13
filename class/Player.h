#pragma once
#include "Point.h"
#include "Dice.h"

class Player
{

private:
	Dice dice1, dice2;	
	//�÷��̾��� �̸�
	string name;
	//�ֻ��� �ΰ��� ������.
	int total;
public:
	//������ �Ҹ���
	Player(const string& name);
	Player();
	~Player();
	//�̸��� ������ ����
	void setName(const string& pname);
	//�÷��̾� �̸����� ��ȯ
	string getName();
	//�ֻ��� �ΰ� ������ �Լ�
	void roll();
	//��Ż �� ��ȯ
	int getTotal();
};

