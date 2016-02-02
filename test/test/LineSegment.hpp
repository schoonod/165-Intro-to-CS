/*************************************************************
 ** Author: Brett Irvin
 ** Date: 4/16/15
 ** Description:  This is the interface/header file for the
 ** LineSegment class.
 *************************************************************/
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment
{ private:
    Point point1;
    Point point2;
    
public:
    //Prototypes for the member functions
    LineSegment();
    LineSegment(Point, Point);
    void setEnd1(Point);
    void setEnd2(Point);
    Point getEnd1();
    Point getEnd2();
    double length(Point, Point);
    double slope(Point, Point);
    
};

#endif
