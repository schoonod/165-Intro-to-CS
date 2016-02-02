/*************************************************************
 ** Author: Brett Irvin
 ** Date: 4/16/15
 ** Description: This is the Point class function implementation
 ** file.
 *************************************************************/

#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;

double xCoord;
double yCoord;

Point p1,
p2;

/*****************************************
 *            Point::Point
 *  This is the default constructor.  It
 *  sets the x- and y-coordinates to zero.
 *****************************************/
Point::Point()
{  xCoord = 0.0;
    yCoord = 0.0;
}


/*****************************************
 *            Point::Point
 *  This is the constructor.  It initializes
 *  the x-coordinate and y-coordinate variables.
 *****************************************/
Point::Point(double x, double y)
{  setXCoord(x);
    setYCoord(y);
}


/*****************************************
 *            Point::setXCoord
 *  This function copies the argument passed
 *  into the parameter to the private member
 *  variable
 ******************************************/
void Point::setXCoord(double x)
{  xCoord = x;
}


/*****************************************
 *            Point::setYCoord
 *  This function copies the argument passed
 *  into the parameter to the private member
 *  variable
 ******************************************/
void Point::setYCoord(double y)
{  yCoord = y;
}


/*****************************************
 *            Point::getXCoord
 *  This function returns the Point's
 *  x-coordinate.
 *****************************************/
double Point::getXCoord() const
{  return xCoord;
}


/*****************************************
 *            Point::getYCoord
 *  This function returns the Point's
 *  y-coordinate.
 *****************************************/
double Point::getYCoord() const
{  return yCoord;
}

/*****************************************
 *            Point::distanceTo
 *  This function calculates the distance
 *  between two Points.
 *****************************************/
double Point::distanceTo(const Point& p)
{   double distanceTo;
    distanceTo = sqrt(pow((p.getXCoord() - xCoord),2) + pow((p.getYCoord() - yCoord),2));
    return distanceTo;
}
