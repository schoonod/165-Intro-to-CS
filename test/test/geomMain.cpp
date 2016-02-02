/*************************************************************
 ** Author: Brett Irvin
 ** Date: 4/16/15
 ** Description: This is the main function to test the methods
 ** of the Point and LineSegment classes.
 *************************************************************/


#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"


using namespace std;

int main()
{
    
    //Define two Point objects
    Point p1 (3.0, 4.0);
    Point p2 (6.0, 8.0);
    
    LineSegment line1 (p1, p2);
    
    
    cout << "The distance from Point 1 to Point 2 is " << p1.distanceTo(p2) << endl;
    
    cout << "The length of Point 1 to Point 2 is "  << line1.length(p1, p2) << endl;
    cout << "The slope of Point 1 to Point 2 is "  << line1.slope(p1, p2) << endl;
    
    return 0;
}
