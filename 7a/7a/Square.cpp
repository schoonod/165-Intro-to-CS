//  Project 7a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 7a....
 **********************************************************************************/
#include "Square.hpp"

/***********************************************************************************
 ** Description: Square constructor invokes Rectangle constructor.
 ***********************************************************************************/
Square::Square(double length, double width) : Rectangle(length, width){}

/***********************************************************************************
 ** Description: Override function to set side length of square.
 ***********************************************************************************/
void Square::setLength(double length){
    Rectangle::setLength(length);
    Rectangle::setWidth(length);
}
/***********************************************************************************
 ** Description: Override function to set side width of square.
 ***********************************************************************************/
void Square::setWidth(double width){
    Rectangle::setLength(width);
    Rectangle::setWidth(width);
}