#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
    // Default constructor
    ItemToPurchase();

    // Public member function SetName()
    void SetName(string name);

    // Public member function GetName()
    string GetName() const;

    // Public member function SetPrice()
    void SetPrice(int price);

    // Public member function GetPrice()
    int GetPrice() const;

    // Public member function SetQuantity()
    void SetQuantity(int quantity);

    // Public member function GetQuantity()
    int GetQuantity() const;

    // Function to print item information
    void Print() const;

private:
    // Private data members
    string itemName;
    int itemPrice;
    int itemQuantity;
};

#endif