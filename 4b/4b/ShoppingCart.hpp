//  Project 4b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description: PROJECT 4b creates two classes (ShoppingCart and Item).  The Item
 class takes objects with data members for name, price, and quantity, while the
 Shoppingcart class takes Item objects, adds them to a array of pointer to class.
 After items are added to the shopping cart, a function calculates the total price.
 **********************************************************************************/
#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

#include "Item.hpp"


class ShoppingCart {

private:
    // Array sCart points to an Item and is of size 100
    Item *sCart[100];
    
    // arrayEnd keeps track of the next empty spot in the array
    int arrayEnd;
    
public:
    ShoppingCart();         // default constructor
    void addItem(Item*);    
    double totalPrice();
};

#endif
