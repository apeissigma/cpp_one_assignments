#pragma once

#include<vector>
#include "item.h"

class Cart
{
   public:
    std::vector<Item> items;
    Cart() { this->items = {};
    }

    void add_to_cart(const Item& item)
    {

    }
};