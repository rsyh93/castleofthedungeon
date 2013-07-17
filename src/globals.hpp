#ifndef GLOBALS_HPP
#define GLOBALS_HPP

#include <SDL/SDL.h>
#include "gamestate.hpp"

enum Statename
{
    GAME
};

extern SDL_Surface *Surf_Display;

extern bool change_state;
extern Statename new_state;
extern Gamestate* gamestate;
extern bool quit;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

#endif /**/
