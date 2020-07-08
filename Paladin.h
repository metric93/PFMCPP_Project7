#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(std::string name_, int armor, int hitpoints);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
