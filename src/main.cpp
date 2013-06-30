//#ifdef __APPLE__
// something else
//#else
#include <SDL/SDL.h>
#include <GL/glew.h>
//#endif

#include "gamestate.hpp"
#include "globals.hpp"
#include "game/gamestate_game.hpp"
#include <stdio.h>
#include <stdlib.h>

bool change_state;
Statename new_state;
Gamestate *gamestate;
bool quit = false;

SDL_Surface *Surf_Display;

void error(char const *error_msg)
{
    fprintf(stderr, "%s", error_msg);
}

void switch_state()
{
    gamestate->quit();
    delete gamestate;
    switch (new_state)
    {
    case GAME:
        gamestate = new Gamestate_GAME;
        break;
    default:
        error("New gamestate unknown");
    }
    gamestate->init();

    change_state = false;
}

bool init()
{
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        return false;
    }

    Surf_Display = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    if(Surf_Display == NULL)
    {
        return false;
    }
    
    return true;
}

bool make_resources()
{
    return true;
}

int main(int argc, char** argv)
{
    if (!init())
    {
        error("Failed to init...");
        error(SDL_GetError());
        return 1;
    }
    if (!make_resources())
    {
        error("Failed to load resources...");
        return 1;
    }

    gamestate = new Gamestate_GAME;
    
    while (!quit)
    {
        gamestate->events();
        gamestate->draw();
        if (change_state)
        {
            switch_state();
        }
    }

    gamestate->quit();
    delete gamestate;
    return EXIT_SUCCESS;
}
