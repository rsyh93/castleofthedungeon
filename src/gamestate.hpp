#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP

class Gamestate
{
public:
    virtual ~Gamestate() = 0;
    virtual void init() = 0;
    virtual void events() = 0;
    virtual void draw() = 0;
    virtual void quit() = 0;
};


#endif /* end of include guard: GAMESTATE_HPP */
