#include "Dice.h"




Dice::Dice()	
{
	cout << "Dice 호출\n";
}

Dice::~Dice()	
{	
	cout << "Dice 소멸자 호출\n";
}
//난수 발생 1-6
void Dice::roll()
{
	this->faceValue = 0;
	srand((unsigned)time(NULL));
		
	for (int i = 0; i < 10; ++i)
	{
		faceValue = ((rand() & 6) +1);
	}	
}
// 값 리턴
int Dice::getFaceValue()
{	
	return faceValue;
}
