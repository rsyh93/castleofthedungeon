#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "actor.hpp"

class Player : public Actor
{
public:
    Player();
    virtual ~Player();
    
    int getHP();
    int getMP();
    
    void changeHP(int add); //to change HP, add will be added to HP (if we want to subtract make add negative)
    void changeMP(int add);
    
private:
    /* data */
    int HP;
    int MP;
};


#endif /* end of include guard: PLAYER_HPP */
