#include "Lamp.h"

void Lamp::init()
{
	isOn = false;
	illuminance = 1;
}


void Lamp::powerOnOff()
{
	isOn = !isOn; // ! == 반대로
}

void Lamp::changeLight()
{
	if (isOn)
	{
		if (illuminance < 3)
		{
			illuminance++;
		}
		else
		illuminance = 1;		
	}
}

void Lamp::showStatus()
{
	if (isOn)
	{
		cout << "powerOnOff : " << isOn << endl;
		cout << "illumenance : " << illuminance << endl;
	}
	else
	cout << "전원이 꺼져 있습니다." << endl;	
}
