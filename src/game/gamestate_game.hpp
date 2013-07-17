#ifndef GAMESTATE_GAME_HPP
#define GAMESTATE_GAME_HPP

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "../gamestate.hpp"
#include "../globals.hpp"

#include <string>
#include <map>

class Gamestate_GAME : public Gamestate
{
public:
    // constructor???
    virtual ~Gamestate_GAME();

    virtual void init();
    virtual void events();
    virtual void draw();
    virtual void quit();

private:
    SDL_Surface *spritesheet;
    std::map<std::string, SDL_Rect> image_bounds;
};

#endif /* end of include guard: GAMESTATE_GAME_HPP */
