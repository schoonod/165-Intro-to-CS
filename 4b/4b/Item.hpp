//  Project 4b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description: PROJECT 4b creates two classes (ShoppingCart and Item).  The Item
 class takes objects with data members for name, price, and quantity, while the
 Shoppingcart class takes Item objects, adds them to a array of pointer to class.
 After items are added to the shopping cart, a function calculates the total price.
 **********************************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using namespace std;

class Item {
    
private:
    string name;
    double price;
    int quantity;

public:
    Item();                     // Default constructor
    Item(string, double, int);
    void setName(string);       // Mutators
    void setPrice(double);
    void setQuantity(int);
    string getName();           // Accessors
    double getPrice();
    int getQuantity();
};

#endif