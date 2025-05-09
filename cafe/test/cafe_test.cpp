#include "../src/cafe.h"

#include <gtest/gtest.h>

#include "../src/item.h"
#include "../src/utils.h"

TEST(CAFE_INVENTORY_ADD_ITEM_TEST, BasicAssertion) {
    Item apple = Item(ItemType::APPLE, 1.50, "Apple");

    Cafe c = Cafe();

    c.stock_item(apple);

    Item returned = c.get_item("Apple");

    ASSERT_EQ(returned.description, apple.description);
}

TEST(CAFE_INVENTORY_ADD_ITEM_UNIQUE_TEST, BasicAssertion){
    Item apple = Item(ItemType::APPLE, 1.50, "Apple");
}

TEST(TO_LOWER_TEST, BasicAssertions) {
    std::string s = "TEST";

    std::string s2 = Utils::to_lower(s);
    ASSERT_EQ("test", s2);
}

TEST(CAFE_INVENTORY_ITEM_CASE_SENSITVE_TEST, BasicAssertions) {
    Item apple = Item(ItemType::APPLE, 1.50, "Apple");

    Cafe c = Cafe();

    c.stock_item(apple);
    Item returned = c.get_item("apple");

    ASSERT_EQ(returned.description, apple.description);
}

TEST(CART_TEST_ADD, BasicAssertions) { 
    Item apple = Item(ItemType::APPLE, 1.50, "Apple"); 
    Cart c = {};
    c.add_to_cart(apple);
    ASSERT_EQ(c.items.size(), 1);
}