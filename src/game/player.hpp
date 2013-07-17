#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "actor.hpp"

#define NORTH 1
#define NORTHWEST 2
#define WEST 3
#define SOUTHWEST 4
#define SOUTH 5
#define SOUTHEAST 6
#define EAST 7
#define NORTHEAST 8

class Player : public Actor
{
public:
    Player();
    virtual ~Player();

    virtual void move();

private:
};


#endif /* end of include guard: PLAYER_HPP */
