#pragma once
#include "FruitSeller.h"

class TV
{
private:
	bool m_isOn;
	int m_volume;
	int m_channel;

public:

	void init();
	void setVolume(int volume);
	void setChannel(int channel);
	int getVolume();
	int getChannel();
	void showTV();
	void turnOnOff();

};