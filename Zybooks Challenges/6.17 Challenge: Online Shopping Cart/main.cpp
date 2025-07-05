#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
    // Create two objects of the ItemToPurchase class
    ItemToPurchase item1;
    ItemToPurchase item2;

    // Prompt the user and set the name, price, and quantity for the first item
    cout << "Item 1" << endl;
    string name1;
    cout << "Enter the item name:" << endl;
    getline(cin, name1);
    item1.SetName(name1);

    int price1;
    cout << "Enter the item price:" << endl;
    cin >> price1;
    item1.SetPrice(price1);

    int quantity1;
    cout << "Enter the item quantity:" << endl;
    cin >> quantity1;
    item1.SetQuantity(quantity1);

    // Clear the input buffer
    cin.ignore();

    // Empty line before "Item 2"
    cout << endl;

    // Prompt the user and set the name, price, and quantity for the second item
    cout << "Item 2" << endl;
    string name2;
    cout << "Enter the item name:" << endl;
    getline(cin, name2);
    item2.SetName(name2);

    int price2;
    cout << "Enter the item price:" << endl;
    cin >> price2;
    item2.SetPrice(price2);

    int quantity2;
    cout << "Enter the item quantity:" << endl;
    cin >> quantity2;
    item2.SetQuantity(quantity2);

    // Empty line before "TOTAL COST"
    cout << endl;

    // Output the items and total cost
    cout << "TOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl;

    // Empty line before "TOTAL"
    cout << endl;

    cout << "Total: $" << (item1.GetPrice() * item1.GetQuantity() + item2.GetPrice() * item2.GetQuantity()) << endl;
   
    return 0;
}