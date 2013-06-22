#ifdef __APPLE__
// something else
#else
#include <SDL/SDL.h>
#include <GL/glew.h>
#endif

#include "globals.hpp"

void error(char* const error_msg)
{
    fprintf(stderr, error_msg);
}

bool switch_state()
{
    g->quit();
    delete g;
    switch (new_state)
    {
    case GAME:
        g = new Gamestate_GAME();
        break;
    default:
        error("New gamestate unknown");
    }
    g->init();

    change_state = false;
    new_state = NULL;
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

    g = new Gamestate_GAME;
    bool done = false;
    while (!done)
    {
        g->events()
        g->draw()
        if (change_state)
        {
            switch_state();
        }
    }
    return EXIT_SUCCESS;
}

//hopefully this works
