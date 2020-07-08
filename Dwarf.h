#pragma once

#include "Character.h"

struct Dwarf : Character
{
    //Constructor for Dwarf Class
    Dwarf(std::string name_, int hitPoints, int armor);

    //Implementation of Virtual Methods from Character Class
    const std::string& getName() override;
    virtual std::string getStats() override;

private:
    const std::string name;
};
