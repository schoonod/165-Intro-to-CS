//  Project 7a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 7a....
 **********************************************************************************/
#include "Rectangle.hpp"

/***********************************************************************************
 ** Description: Rectangle class default constructor.
 ***********************************************************************************/
Rectangle::Rectangle(){
    length = 0.0;
    width = 0.0;
}
/***********************************************************************************
 ** Description: Rectangle class constructor, takes two doubles as parameters.
 ***********************************************************************************/
Rectangle::Rectangle(double length, double width){
    setLength(length);
    setWidth(width);
}
/***********************************************************************************
 ** Description: Sets length of Rectangle object.
 ***********************************************************************************/
void Rectangle::setLength(double length){
    this->length = length;
}
/***********************************************************************************
 ** Description: Sets width of Rectangle object.
 ***********************************************************************************/
void Rectangle::setWidth(double width){
    this->width = width;
}
/***********************************************************************************
 ** Description: Returns area length of Rectangle object.
 ***********************************************************************************/
double Rectangle::area(){
    return this->length * this->width;
}
/***********************************************************************************
 ** Description: Returns perimeter of Rectangle object.
 ***********************************************************************************/
double Rectangle::perimeter(){
    return 2 * this->length + 2 * this->width;
}

