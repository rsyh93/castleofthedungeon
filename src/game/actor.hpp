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
    
private:
    /* data */
    int x; //where they are
    int y;
};

#endif /* end of include guard: ACTOR_HPP */
