#ifndef GLOBALS_HPP
#define GLOBALS_HPP

#include "gamestate.hpp"

enum Statename
{
    GAME
};

extern bool change_state;
extern Statename new_state;
extern Gamestate* gamestate;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

#endif /**/
