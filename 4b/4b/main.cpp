//  Project 4b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description: PROJECT 4b creates two classes (ShoppingCart and Item).  The Item
 class takes objects with data members for name, price, and quantity, while the 
 Shoppingcart class takes Item objects, adds them to a array of pointer to class. 
 After items are added to the shopping cart, a function calculates the total price.
 **********************************************************************************/

#include <iostream>
#include "ShoppingCart.hpp"

int main()
{

    ShoppingCart cart1;

    Item grapes("grapes", 1.28, 42);
    cart1.addItem(&grapes);
    
    Item apples("apples", 1.28, 42);
    cart1.addItem(&apples);
    
    cout << cart1.totalPrice() << endl;

    return 0;
}
