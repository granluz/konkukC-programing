#include "Point.h"
#include "Player.h"
#include "Dice.h"

using namespace std;

int main()
{
	/*
	Point pt;
	Point pt2(10, 20);
	Point* p = new Point();
	//new = Heap���� �Ҹ��ڰ� ȣ��x
	//>>delete�Ҷ� �Ҹ��ڰ� ȣ��ȴ�.
	delete p;
	*/
	//Rectangle rect(100, 100, 100, 100);

	Player player1("dumbo");
	Dice dice1;
	Dice dice2;
	player1.roll();
	cout << player1.getTotal();
	
	
	//player1.roll(dice1, dice2);
	//cout << player1.getTotal();
	//dice2.roll();
	//cout << dice2.getFaceValue();
			
	
	return 0;
}