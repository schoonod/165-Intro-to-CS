//  Project 7a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 7a....
 **********************************************************************************/
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {

protected:
    double length;
    double width;
    
public:
    Rectangle();
    Rectangle(double, double);
    void setLength(double);
    void setWidth(double);
    double area();
    double perimeter();
    
    
};

#endif 