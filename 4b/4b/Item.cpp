//  Project 4b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description: PROJECT 4b creates two classes (ShoppingCart and Item).  The Item
 class takes objects with data members for name, price, and quantity, while the
 Shoppingcart class takes Item objects, adds them to a array of pointer to class.
 After items are added to the shopping cart, a function calculates the total price.
 **********************************************************************************/

#include "Item.hpp"

/***********************************************************************************
 ** Description: default constructor function
 ***********************************************************************************/
Item::Item(){

    setName("");
    setPrice(0.0);
    setQuantity(0);
}
/***********************************************************************************
 ** Description: constructor for initializing Item class member variables
 ***********************************************************************************/
Item::Item(string n, double p, int q){

    setName(n);
   
    setPrice(p);
    
    setQuantity(q);
}
/***********************************************************************************
 ** Description: mutator that sets the name member variable in Item
 ***********************************************************************************/
void Item::setName(string n){

    name = n;
}
/***********************************************************************************
 ** Description: mutator that sets the price member variable in Item
 ***********************************************************************************/

void Item::setPrice(double p){
  
    price = p;
}
/***********************************************************************************
 ** Description: mutator that sets the quantity member variable in Item
 ***********************************************************************************/
void Item::setQuantity(int q){
   
    quantity = q;
}
/***********************************************************************************
 ** Description: accessor that returns the name member variable in Item
 ***********************************************************************************/
string Item::getName(){
   
    return name;
}
/***********************************************************************************
 ** Description: accessor that returns the price member variable in Item
 ***********************************************************************************/
double Item::getPrice(){
    
    return price;
}
/***********************************************************************************
 ** Description: accessor that returns the quantity member variable in Item
 ***********************************************************************************/
int Item::getQuantity(){
   
    return quantity;
}


