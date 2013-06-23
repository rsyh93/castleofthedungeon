#include "gamestate.hpp"

enum Statename
{
    GAME
};

//extern bool change_state;
bool change_state;
//extern Statename new_state;
Statename new_state;
extern Gamestate* gamestate;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

SDL_Surface* Surf_Display;



bool init()
{
    
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        return false;
    }
    
    if((Surf_Display = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL)
    {
        return false;
    }
    
    return true;
}

bool make_resources()
{
    return true;
}
