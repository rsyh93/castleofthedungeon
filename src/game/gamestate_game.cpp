#include "gamestate_game.hpp"

Gamestate_GAME::~Gamestate_GAME() 
{
}

void Gamestate_GAME::init() 
{
    if((bg = SDL_LoadBMP("/Users/penderrin909/Desktop/Programs/OpenGL/SDLTestRPG/test/images/BG.bmp")) == NULL)
    {
        extern bool quit;
        quit = true;
    }/*initializes the background image (not sure what this will be yet. 
      we will need to have collision detection obviously. maybe have that in here too?*/
    
    if((charSprite = SDL_LoadBMP("/Users/penderrin909/Desktop/Programs/OpenGL/SDLTestRPG/test/images/Char.bmp")) == NULL)
    {
        extern bool quit;
        quit = true;
    }//initializes the Char sprite
    
    hero = new Player;
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
            hero->setPositionX(-(hero->getSpeed()));
        }
        else
        {
            hero->setPositionX((hero->getSpeed()));
        }
    }
    if (keyboard_state[SDLK_UP] != keyboard_state[SDLK_DOWN])
    {
        if (keyboard_state[SDLK_UP])
        {
            hero->setPositionY(-(hero->getSpeed()));
        }
        else
        {
            hero->setPositionY(hero->getSpeed());
        }
    }

}

void Gamestate_GAME::draw() 
{
    SDL_BlitSurface( bg, NULL, Surf_Display, NULL);
    
    charRect.x = hero->getPositionX();
    charRect.y = hero->getPositionY();
    
    SDL_BlitSurface( charSprite, NULL, Surf_Display, &charRect);
    
    if( SDL_Flip(Surf_Display) == -1 )
    {
        extern bool quit;
        quit= true;
    }
}

void Gamestate_GAME::quit() 
{
    SDL_FreeSurface(bg);
    SDL_FreeSurface(charSprite);
    delete hero;
}

