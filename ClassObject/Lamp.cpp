#include "Lamp.h"

void Lamp::init()
{
	isOn = false;
	illuminance = 1;
}


void Lamp::powerOnOff()
{
	isOn = !isOn; // ! == �ݴ��
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
	cout << "������ ���� �ֽ��ϴ�." << endl;	
}
