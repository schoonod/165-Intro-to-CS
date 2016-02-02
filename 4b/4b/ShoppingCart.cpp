//  Project 4b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description: PROJECT 4b creates two classes (ShoppingCart and Item).  The Item
 class takes objects with data members for name, price, and quantity, while the
 Shoppingcart class takes Item objects, adds them to a array of pointer to class.
 After items are added to the shopping cart, a function calculates the total price.
 **********************************************************************************/
#include "ShoppingCart.hpp"

/***********************************************************************************
 ** Description: default constructor function; initializes array elements to NULL
 ***********************************************************************************/
ShoppingCart::ShoppingCart(){
   
    // Array End initialized to 0 prior to addItem mutator function
    // Goes here to initialize to 0 no more than once
    arrayEnd = 0;
    
    for (int count = 0; count < 100; count++){

        sCart[count] = NULL;
    }
}
/***********************************************************************************
 ** Description: mutator that adds items to the pointer-to-class array, and 
 increments the arrayEnd position
 ***********************************************************************************/
void ShoppingCart::addItem(Item* anItem){
    
    sCart[arrayEnd] = anItem;

    arrayEnd++;
}
/***********************************************************************************
 ** Description: accessor that calculates the total price of all items in the cart
 ***********************************************************************************/
double ShoppingCart::totalPrice(){

    double cartTotal = 0.0;
    
    for (int i = 0; i < 100; i++){

        // Check for a good address
        if (sCart[i]!=0){
            cartTotal = cartTotal + ((sCart[i]->getPrice()) * (sCart[i]->getQuantity()));
        }
    }
    
    return cartTotal;
}