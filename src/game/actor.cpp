#include "actor.hpp"

/*Actor::Actor()
{
    
}*/

Actor::~Actor()
{
    
}

void Actor::move()
{
    
}

int Actor::getPositionX()
{
    return x;
}

int Actor::getPositionY()
{
    return y;
}

int Actor::getSpeed()
{
    return speed;
}

void Actor::setPositionX(int nX)
{
    x += nX;
}

void Actor::setPositionY(int nY)
{
    y += nY;
}