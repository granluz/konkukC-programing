#include "Player.h"


Player::Player(const string& nname)
    :name(nname), total(0)
{
    cout << "인자 player 호출\n";
}

Player::Player()
    :name(),total(0)
{
    cout << "디폴트 player 생성자\n";
}

Player::~Player()  
{   
    cout << "player 소멸\n";
}

void Player::setName(const string& pname)    
{
    name = pname;    
}

string Player::getName()
{
    return name;
}



void Player::roll(Dice &dice1, Dice &dice2)
{   
   dice1.roll();   
   dice2.roll();
  total = dice1.getFaceValue() + dice2.getFaceValue();
}

int Player::getTotal()
{     
    
    return total;
}
