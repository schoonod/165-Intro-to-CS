//
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description:PROJECT 3b creates two classes (Point and LineSegment).  The Point
 class takes a point object, and can peform a distance calculation from one point to
 the next using the coordinates of each point.  LineSegment takes two Point objects
 as arguments and calculates a distance between the two points, as well as their slope.
 **********************************************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"


class LineSegment {

private:
    Point endPoint1;
    Point endPoint2;
    
public:
    LineSegment();
    LineSegment(Point, Point);
    void setEnd1(Point);
    void setEnd2(Point);
    Point getEnd1();
    Point getEnd2();
    double length();
    double slope();
};

#endif
