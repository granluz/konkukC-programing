#include "Dice.h"




Dice::Dice()	
{
	cout << "Dice ȣ��\n";
}

Dice::~Dice()	
{	
	cout << "Dice �Ҹ��� ȣ��\n";
}
//���� �߻� 1-6
void Dice::roll()
{
	this->faceValue = 0;
	srand((unsigned)time(NULL));
		
	for (int i = 0; i < 10; ++i)
	{
		faceValue = ((rand() & 6) +1);
	}	
}
// �� ����
int Dice::getFaceValue()
{	
	return faceValue;
}
