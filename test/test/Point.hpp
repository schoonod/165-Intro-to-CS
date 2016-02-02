/*************************************************************
 ** Author: Brett Irvin
 ** Date: 4/16/15
 ** Description: This is the interface/header file for the Point
 ** class.
 *************************************************************/
#ifndef POINT_HPP
#define POINT_HPP

class Point
{
public:
    double xCoord;
    double yCoord;
    
    //Prototypes for the member functions
    Point();
    Point(double xCoord, double yCoord);
    void setXCoord(double);
    void setYCoord(double);
    double getXCoord() const;
    double getYCoord() const;
    double distanceTo(const Point &);
};

#endif
