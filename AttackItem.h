#pragma once
#include "Item.h"
#include "Character.h"


struct AttackItem : Item
{
    AttackItem() : Item("attack item", 10) { } //Boost of 10
    void use(Character* character) override;
};
