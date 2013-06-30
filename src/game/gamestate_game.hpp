#ifndef GAMESTATE_GAME_HPP
#define GAMESTATE_GAME_HPP

#include "../gamestate.hpp"

class Gamestate_GAME : public Gamestate
{
public:
    // constructor???
    virtual ~Gamestate_GAME();

    void init();
    void events();
    void draw();
    void quit();
};

#endif /* end of include guard: GAMESTATE_GAME_HPP */
