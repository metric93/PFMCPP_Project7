#pragma once

#include "Character.h"

struct Dragon : public Character
{
    Dragon(std::string name_, int hp_, int armor_);   //name, hit points, armor. 
    void attack(Character& other) override;
    
    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};

