//  Project 7a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 7a demonstrates inherited classes by calculating the area
 and perimeter of a derived class, using base class methods.  Some key points of 
 learning on this project are overriding functions and invoking a base class
 constructor thru the derived class constructor.
 **********************************************************************************/
#include <iostream>
#include "Square.hpp"
using namespace std;

int main(){
    
    Rectangle r1(5,10);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    Square s1(10,10);
    cout << s1.area() << endl;
    cout << s1.perimeter() << endl;
    s1.setLength(5);
    cout << s1.area() << endl;
    cout << s1.perimeter() << endl;
    s1.setWidth(10);
    cout << s1.area() << endl;
    cout << s1.perimeter() << endl;
    
    return 0;
}