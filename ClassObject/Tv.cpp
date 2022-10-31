#include "Tv.h"


void TV::init()
{
	m_isOn = false;
	m_volume = 1;
	m_channel = 11;
}

void TV::setVolume(int volume)
{
	if (m_isOn)
	{
		if (m_volume < 10)
		{
			m_volume++;
		}
		else
		{
			m_volume = 1;
		}
	}
}
void TV::setChannel(int channel)
{
	if (m_isOn)
	{
		if (m_channel < 50)
		{
			m_channel++;
		}
		else
		{
			m_channel = 1;
		}
	}
}
int TV::getVolume()
{
	return m_volume;
}
int TV::getChannel()
{
	return m_channel;
}
void TV::showTV()
{
	if (m_isOn)
	{
		cout << "Volume : " << m_volume << endl;
		cout << "Channel : " << m_channel << endl;
	}
	else
		cout << "전원이 꺼져 있습니다." << endl;
}
void TV::turnOnOff()
{
	m_isOn = !m_isOn;
}