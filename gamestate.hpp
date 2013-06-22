#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP

class Gamestate {
public:
    Gamestate();
    virtual ~Gamestate();
    virtual void init() = 0;
    virtual void events() = 0;
    virtual void draw() = 0;
    virtual void quit() = 0;

private:
};

#endif /* end of include guard: GAMESTATE_HPP */
