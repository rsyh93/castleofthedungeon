#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP

#include <SDL/SDL.h>

class Gamestate
{
public:
    Gamestate();
    virtual ~Gamestate() {}
    void init();
    void events();
    void draw();
    void quit();

private:
};

class Gamestate_GAME : public Gamestate
{
public:
    Gamestate_GAME() : Gamestate() {}
    
    virtual ~Gamestate_GAME() {}

    void init();
    void events();
    void draw();
    void quit();
};

#endif /* end of include guard: GAMESTATE_HPP */
