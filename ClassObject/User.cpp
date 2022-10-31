#include "User.h"

void User::init()
{
	name = "dumbo";
	cout << "유저의 이름은 : " << name << "입니다." << endl;
}

void User::turnOnOff(Lamp& lamp)
{
	lamp.powerOnOff();	
}

void User::changeLight(Lamp& lamp)
{
	lamp.changeLight();
}

void User::tvturnOnOff(TV(&tv))
{
	tv.turnOnOff();
}

void User::tvSetChannel(TV (&tv))
{
	tv.setChannel(tv.getChannel());
}

void User::tvSetVolume(TV& tv)
{
	tv.setVolume(tv.getVolume());
}


