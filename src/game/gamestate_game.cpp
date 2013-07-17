#include "gamestate_game.hpp"

Gamestate_GAME::~Gamestate_GAME()
{
}

void Gamestate_GAME::init()
{
    SDL_Surface* tmp = IMG_Load("../isometricTileset_2.png");
    if (tmp == NULL)
    {
        printf("Unable to load tilesheet.");
        exit(1);
    }

    spritesheet = SDL_DisplayFormatAlpha(tmp);
    if (spritesheet == NULL)
    {
        printf("Unable to optimize tilesheet.");
        exit(1);
    }
    SDL_FreeSurface(tmp);

    image_bounds["dirt"] = (SDL_Rect) { 0, 470, 253, 291 };
    image_bounds["water"] = (SDL_Rect) { 303, 470, 253, 291 };
    image_bounds["grass"] = (SDL_Rect) { 606, 470, 253, 291 };
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
    if (keyboard_state[SDLK_LEFT] != keyboard_state[SDLK_RIGHT])
    {
        if (keyboard_state[SDLK_LEFT])
        {
        }
        else // (keyboard_state[SDLK_RIGHT])
        {
        }
    }
    if (keyboard_state[SDLK_UP] != keyboard_state[SDLK_DOWN])
    {
        if (keyboard_state[SDLK_UP])
        {
        }
        else // (keyboard_state[SDLK_RIGHT])
        {
        }
    }

}

void Gamestate_GAME::draw()
{
    SDL_BlitSurface(spritesheet, &(image_bounds["water"]), Surf_Display, NULL);
    SDL_Rect thing = (SDL_Rect) { 126, 73, 0, 0 };
    SDL_BlitSurface(spritesheet, &(image_bounds["grass"]), Surf_Display, &thing);
}

void Gamestate_GAME::quit()
{
//  for (std::map<std::string, SDL_Rect>::iterator it = image_bounds.begin(); it != image_bounds.end(); ++it)
//  {
//      delete (it->second);
//  }
    SDL_FreeSurface(spritesheet);
}

