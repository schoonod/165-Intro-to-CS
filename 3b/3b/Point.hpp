//  Project 3b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 4/19/2015
 ** Description:PROJECT 3b creates two classes (Point and LineSegment).  The Point
 class takes a point object, and can peform a distance calculation from one point to
 the next using the coordinates of each point.  LineSegment takes two Point objects
 as arguments and calculates a distance between the two points, as well as their slope.
 **********************************************************************************/

#ifndef POINT_HPP
#define POINT_HPP


class Point {
    
private:
    double xCoord;
    double yCoord;
    
public:
    Point();
    Point(double, double);
    void setXCoord(double);
    void setYCoord(double);
    double getXCoord() const;
    double getYCoord() const;
    double distanceTo(const Point &);    
};

#endif
