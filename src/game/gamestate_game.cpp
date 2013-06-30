#include "gamestate_game.hpp"

Gamestate_GAME::~Gamestate_GAME() 
{
}

void Gamestate_GAME::init() 
{
}

void Gamestate_GAME::events() 
{
    SDL_PumpEvents();
    Uint8 *keyboard_state = SDL_GetKeyState(NULL);

    if (keyboard_state[SDLK_q] || keyboard_state[SDLK_ESCAPE])
    {
        extern bool quit;
        quit = true;
    }
}

void Gamestate_GAME::draw() 
{
}

void Gamestate_GAME::quit() 
{
}

