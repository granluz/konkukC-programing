#pragma once
#include "FruitSeller.h"
#include "Lamp.h"
#include "Tv.h"

class User
{
private:
	string name;

public:

	void init();

	void turnOnOff(Lamp &lamp);
	
	void changeLight(Lamp &lamp);

	void tvturnOnOff(TV& tv);

	void tvSetChannel(TV& tv);

	void tvSetVolume(TV& tv);
	
};