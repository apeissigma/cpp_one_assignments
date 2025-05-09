#ifndef ITEM_H_
#define ITEM_H_

#include <utils.h>

#include <string>


enum ItemType { COFEEE = 0, BAGEL = 1, CHIPS = 2, YOGURT = 3, JUICE = 4, APPLE = 5 };

class Item {
   public:
    float price;
    std::string description;

    
    Item(ItemType type, const float &price, const std::string &description) {
        this->type = type; 
        this->price = price;
        this->description = Utils::to_lower(description);
    };

    //overrides the == operator 
    bool operator==(const Item &item) { return this->type == item.type; }
};

#endif  // ITEM_H_
