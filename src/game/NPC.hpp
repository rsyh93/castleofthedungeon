//
//  NPC.h
//  test
//
//  Created by Justin Dagenhart on 7/12/13.
//  Copyright (c) 2013 Justin Dagenhart. All rights reserved.
//

#ifndef __test__NPC__
#define __test__NPC__

#include "actor.hpp"

class NPC : public Actor
{
public:
    NPC();
    virtual ~NPC();
    
    std::string getDialog();
    
private:
    /* data */
    const std::string dialog[2] = {"hello", "Welcome"};
};

#endif /* defined(__test__NPC__) */
