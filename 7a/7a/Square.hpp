//  Project 7a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 7a....
 **********************************************************************************/
#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

// Square inherits Rectangle
class Square: public Rectangle {

public:
    Square(double, double);
    void setLength(double);
    void setWidth(double);

};

#endif