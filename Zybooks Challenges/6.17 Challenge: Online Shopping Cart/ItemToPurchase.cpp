// You are to include the following in this submission
// Default constructor
// Public class functions (mutators & accessors)
        // SetName() & GetName()
        // SetPrice() & GetPrice()
        // SetQuantity() & GetQuantity()
// Private data members
        // string itemName - Initialized in default constructor to "none"
        // int itemPrice - Initialized in defalt constructor to 0
        // int itemQuantity - Initialized in default constructor to 0
//
// Your code below
#include <iostream>
#include <string>
#include "ItemToPurchase.h" // Include the header file

using namespace std;

// Default constructor
ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

// Public member function SetName()
void ItemToPurchase::SetName(string name) {
    itemName = name;
}

// Public member function GetName()
string ItemToPurchase::GetName() const {
    return itemName;
}

// Public member function SetPrice()
void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

// Public member function GetPrice()
int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

// Public member function SetQuantity()
void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

// Public member function GetQuantity()
int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}