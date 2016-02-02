//
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description:PROJECT 3b creates two classes (Point and LineSegment).  The Point
 class takes a point object, and can peform a distance calculation from one point to
 the next using the coordinates of each point.  LineSegment takes two Point objects
 as arguments and calculates a distance between the two points, as well as their slope.
 **********************************************************************************/

#include "Point.hpp"
#include "LineSegment.hpp"

/***********************************************************************************
 ** Description: default constructor function
 ***********************************************************************************/
LineSegment::LineSegment (){
    
    Point endPoint1 (0.0,0.0);
    Point endPoint2 (0.0,0.0);
}

/***********************************************************************************
 ** Description: Constructor function that initializes private member variables
 ***********************************************************************************/
LineSegment::LineSegment (Point p1In, Point p2In){
    
    setEnd1(p1In);
    setEnd2(p2In);
}

/***********************************************************************************
 ** Description: mutator function that sets the first Point object in LineSegment
 ***********************************************************************************/
void LineSegment::setEnd1(Point p1In){
    
    endPoint1 = p1In;
}

/***********************************************************************************
 ** Description: mutator function that sets the second Point object in LineSegment
 ***********************************************************************************/
void LineSegment::setEnd2(Point p2In){
    
    endPoint2 = p2In;
}

/***********************************************************************************
 ** Description: accessor function that returns Point1
 ***********************************************************************************/
Point LineSegment::getEnd1(){
    
    return endPoint1;
}

/***********************************************************************************
 ** Description: accessor function that returns a Point
 ***********************************************************************************/
Point LineSegment::getEnd2(){
    
    return endPoint2;
}

/***********************************************************************************
 ** Description: returns length from two Point object arguments
 ***********************************************************************************/
double LineSegment::length(){
    
    return endPoint1.distanceTo(endPoint2);
}

/***********************************************************************************
 ** Description: returns slope from two Point object arguments
 ***********************************************************************************/
double LineSegment::slope(){

    return ((endPoint1.getYCoord() - endPoint2.getYCoord()) / (endPoint1.getXCoord() - endPoint2.getXCoord()));
}






