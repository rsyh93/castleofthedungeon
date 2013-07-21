#ifndef ACTOR_HPP
#define ACTOR_HPP

#include <string>

class Actor {
public:
    //Actor (); should we only add constructors to classes inheriting from Actor?
    virtual ~Actor ();

    virtual void move();

    int getPositionX(); //for collision detection with our Actors
    int getPositionY();
    int getSpeed();
    
    void setPositionX(int nX);
    void setPositionY(int nY);
    
private:
    /* data */
    int x = 50; //where they are
    int y = 50;
    int speed = 2;
};

#endif /* end of include guard: ACTOR_HPP */
