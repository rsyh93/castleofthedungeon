#include "player.hpp"

Player::Player()
{
    
}

Player::~Player()
{
    
}

int Player::getHP()
{
    return HP;
}

int Player::getMP()
{
    return MP;
}

void Player::changeHP(int add)
{
    HP += add;
}

void Player::changeMP(int add)
{
    MP += add;
}