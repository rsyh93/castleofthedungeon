#ifndef GAMESTATE_GAME_HPP
#define GAMESTATE_GAME_HPP

#include <SDL.h>
#include "../gamestate.hpp"
#include "../globals.hpp"
#include "player.hpp"

class Gamestate_GAME : public Gamestate
{
public:
    // constructor???
    virtual ~Gamestate_GAME();

    virtual void init();
    virtual void events();
    virtual void draw();
    virtual void quit();
};

#endif /* end of include guard: GAMESTATE_GAME_HPP */
