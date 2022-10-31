#pragma once
#include "FruitSeller.h"

class Lamp
{
private:
	bool isOn;
	int illuminance;
	//Ÿ���� �ʱⰪ�� ������ ���� �ʰ� ����°� ����.
public:

	void init();
	
	void powerOnOff();

	void changeLight();

	void showStatus();

};