#pragma once
#include "Item.h"
#include "Character.h"


struct AttackItem : public Item
{
    AttackItem() : Item("helpful item", 2) { }
    void use(Character* character) override;
};
