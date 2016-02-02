//
#include <cmath>
#include <iostream>
#include "LineSegment.hpp"



int main() {
    
    Point p1 (5.0, 10.0);
    Point p2 (3.0, 11.0);
    
    Point p3;
    std::cout << p3.getXCoord() << std::endl;

    LineSegment line1(p1,p2);
    
    std::cout << p1.distanceTo(p2) << std::endl;
    std::cout << line1.length() << std::endl;
    std::cout << line1.slope() << std::endl;
    
    return 0;
}
