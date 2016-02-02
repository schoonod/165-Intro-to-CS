//
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description:PROJECT 3b creates two classes (Point and LineSegment).  The Point
 class takes a point object, and can peform a distance calculation from one point to
 the next using the coordinates of each point.  LineSegment takes two Point objects
 as arguments and calculates a distance between the two points, as well as their slope.
 **********************************************************************************/

#include <iostream>
#include <cmath>
#include "Point.hpp"

/***********************************************************************************
 ** Description: default constructor function
 ***********************************************************************************/
Point::Point(){
    
    xCoord = 0.0;
    yCoord = 0.0;
}

/***********************************************************************************
 ** Description: Constructor function that initializes private member variables
 ***********************************************************************************/
Point::Point(double xCoordIn, double yCoordIn){
   
    setXCoord(xCoordIn);
    setYCoord(yCoordIn);
}

/***********************************************************************************
 ** Description: mutator function that sets the x-coordinate data member in Point
 ***********************************************************************************/
void Point::setXCoord(double xCoordIn){
    
    xCoord = xCoordIn;
}

/***********************************************************************************
 ** Description: mutator function that sets the y-coordinate data member in Point
 ***********************************************************************************/
void Point::setYCoord(double yCoordIn){
    
    yCoord = yCoordIn;
}

/***********************************************************************************
 ** Description: accessor function that returns the Point x-coordnate
 ***********************************************************************************/
double Point::getXCoord() const {
    
    return xCoord;
}

/***********************************************************************************
 ** Description: accessor function that returns the Point y-coordnate
 ***********************************************************************************/
double Point::getYCoord() const {
    
    return yCoord;
}

/***********************************************************************************
 ** Description: returns distance between Point object calling function and Point 
 argument
 ***********************************************************************************/
double Point::distanceTo(const Point &p){
    
    return sqrt(pow((p.getXCoord() - xCoord) , 2) + pow((p.getYCoord() - yCoord), 2));
}

