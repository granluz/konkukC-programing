#include "Player.h"


Player::Player(const string& nname)
    :name(nname), total(0)
{
    cout << "���� player ȣ��\n";
}

Player::Player()
    :name(),total(0)
{
    cout << "����Ʈ player ������\n";
}

Player::~Player()  
{   
    cout << "player �Ҹ�\n";
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
