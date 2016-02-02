//  Project 5b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/29/2015
 ** Description:PROJECT 5b creates a box object of class Box.  It takes parameters
 ** for it's private member variables and calculates box volume and surface area.
 **********************************************************************************/
#ifndef BOX_HPP
#define BOX_HPP

class Box {
    
private:
    double height;
    double width;
    double length;
    
public:
    Box();
    Box(double, double, double);
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    double getVolume();
    double getSurfaceArea();

};

#endif
