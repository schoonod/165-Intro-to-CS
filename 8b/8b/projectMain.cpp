//  Project 8b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8b creates two derived classes and uses a pure virtual
 function to calculate different bill amounts from each derived class.
 **********************************************************************************/
#include "CustomerProject.hpp"
#include "RegularProject.hpp"
#include "PreferredProject.hpp"
#include <iostream>
using namespace std;


int main() {

    RegularProject r1(30, 20, 10);
    PreferredProject p1(30, 20, 10);
    PreferredProject p2(100, 20, 10);
    PreferredProject p3(1000, 20, 10);
    
    cout << "r1 billed amount is: " << r1.billAmount() << endl;
    cout << "p1 billed amount is: " << p1.billAmount() << endl;
    cout << "p2 billed amount is: " << p2.billAmount() << endl;
    cout << "p3 billed amount is: " << p3.billAmount() << endl;
    
    return 0;
}