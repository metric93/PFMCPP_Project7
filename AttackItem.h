#pragma once
#include "Item.h"
#include "Character.h"


struct AttackItem : Item
{
    AttackItem() : Item("helpful item", 2) { }
    void use(Character* character) override;
};
