#pragma once
#include "Point.h"

class Dice
{
private:
	//�ֻ��� ��
	int faceValue;
	

public:
	//������ �Ҹ���
	Dice();
	~Dice();
	//���� �߻� 1-6
	void roll();
	//���� ��ȯ���ִ� �Լ�
	int getFaceValue();
};

