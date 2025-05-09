#ifndef CAFE_H_
#define CAFE_H_

#include <ctype.h>

#include <stdexcept>
#include <vector>

#include "item.h"
#include "utils.h"
#include <iostream>

// stock inventory
// choose specific items
// checkout

class Cafe {
   private:
    std::vector<Item> *items;

   public:
    Cafe() { this->items = new std::vector<Item>(); };

    ~Cafe() { delete this->items; };

    void stock_item(const Item &item) 
    { 
        for (Item i : *this->item)
        {
            if (i == item)
            {
                return;
            }
            this->items->push_back(item);
            //ensure there is only one item 
        }
    };

    //item lookup
    Item get_item(ItemType type)
    {
        // dereference pntr to access
        for (Item i : *this->items)
        {
            if (i.type == type) { return i; }
        }
    }

    Item get_item(const std::string &name) {
        std::string search_text = Utils::to_lower(name);
        std::cout << search_text << std::endl;
        for (Item i : *this->items) {
            if (i.description == search_text) {
                return i;
            }
        }
        throw std::runtime_error("No Item Found");
    }
};

#endif  // CAFE_H_
