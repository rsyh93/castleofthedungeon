#ifndef GLOBALS_HPP
#define GLOBALS_HPP

//#include "gamestate.hpp"

enum Statename
{
    GAME
};

extern bool change_state;
extern Statename new_state;
extern Gamestate* gamestate;
extern bool quit;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

extern SDL_Surface *Surf_Display;

#endif /**/
