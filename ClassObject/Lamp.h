#pragma once
#include "FruitSeller.h"

class Lamp
{
private:
	bool isOn;
	int illuminance;
	//타입이 초기값을 가지고 있지 않게 만드는게 좋다.
public:

	void init();
	
	void powerOnOff();

	void changeLight();

	void showStatus();

};