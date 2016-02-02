//  Project 5b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/29/2015
 ** Description:PROJECT 5b creates a box object of class Box.  It takes parameters
 ** for it's private member variables and calculates box volume and surface area.
 **********************************************************************************/
#include "Box.hpp"

/***********************************************************************************
 ** Description: default constructor function
 ***********************************************************************************/
Box::Box(){
   
    height = 1.0;
    width = 1.0;
    length = 1.0;
}

/***********************************************************************************
 ** Description: Constructor function that initializes private member variables
 ***********************************************************************************/
Box::Box(double heightIn, double widthIn, double lengthIn){
  
    setHeight(heightIn);
    setWidth(widthIn);
    setLength(lengthIn);
}

/***********************************************************************************
 ** Description: mutator function that changes box height
 ***********************************************************************************/
void Box::setHeight(double heightIn){
    
    height = heightIn;
}

/***********************************************************************************
 ** Description: mutator function that changes box width
 ***********************************************************************************/
void Box::setWidth(double widthIn){
    
    width = widthIn;
}

/***********************************************************************************
 ** Description: mutator function that changes box length
 ***********************************************************************************/
void Box::setLength(double lengthIn){
    
    length = lengthIn;
}

/***********************************************************************************
 ** Description: Calculates box object volume
 ***********************************************************************************/
double Box::getVolume() {
    
    return (length * width * height);
}

/***********************************************************************************
 ** Description: Calculates box object surface area
 ***********************************************************************************/
double Box::getSurfaceArea(){
    return (2 * ((length * width) + (length * height) + (width * height)));
}
