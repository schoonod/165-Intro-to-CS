/*************************************************************
 ** Author: Brett Irvin
 ** Date: 4/16/15
 ** Description: This is the LineSegment class function
 ** implementation file.
 *************************************************************/

#include <iostream>
#include <cmath>
#include "LineSegment.hpp"
#include "Point.hpp"

using namespace std;


/*****************************************
 *        LineSegment::LineSegment
 *  This is the constructor.  It passes two
 *  Point parameters to the set methods to
 ** initialize their variables.
 *****************************************/
LineSegment::LineSegment(Point endOne, Point endTwo)
{  setEnd1(endOne);
    setEnd2(endTwo);
}


/*****************************************
 *         LineSegment::setEnd1
 *  This function sets the first endpoint.
 ******************************************/
void LineSegment::setEnd1(Point endOne)
{  point1 = endOne;
}


/*****************************************
 *         LineSegment::setEnd2
 *  This function sets the second endpoint.
 ******************************************/
void LineSegment::setEnd2(Point endTwo)
{  point2 = endTwo;
}


/*****************************************
 *         LineSegment::getEnd1
 *  This function gets the first endpoint.
 ******************************************/
Point LineSegment::getEnd1()
{  return point1;
}


/*****************************************
 *         LineSegment::getEnd2
 *  This function gets the second endpoint.
 ******************************************/
Point LineSegment::getEnd2()
{  return point2;
}


/*****************************************
 *         LineSegment::length
 *  This function calculates the length of
 *  the line segment.
 ******************************************/
double LineSegment::length(Point point1, Point point2)            //this
{  return point1.distanceTo(point2);
}

/*****************************************
 *         LineSegment:: slope
 *  This function calculate the slope of the
 *  line segment.
 ******************************************/
double LineSegment::slope(Point point1, Point point2)
// double LineSegment::slope(double p1, double p2)
{  double slope;
    slope = (point1.getYCoord() - point2.getYCoord()) / (point1.getXCoord() - point2.getXCoord());
    return slope;
}
//if slope is vertical, return infinity value
