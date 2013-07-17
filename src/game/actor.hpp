#ifndef ACTOR_HPP
#define ACTOR_HPP

class Actor {
public:
    Actor();
    virtual ~Actor();

    virtual void move();

private:
    int x, y;
    unsigned facing;
};

#endif /* end of include guard: ACTOR_HPP */
