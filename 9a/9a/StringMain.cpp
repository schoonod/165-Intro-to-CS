//  Project 9a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/28/2015
 ** Description:PROJECT 9a
 **********************************************************************************/
#include "StringList.hpp"

int main() {
  
    StringList s1;
    s1.add("string 1");
    s1.add("string 2");
    s1.add("string 3");
    s1.add("string 4");
    
    s1.positionOf("string 3");
    s1.positionOf("DoesNotExist");
    s1.display();
    cout << endl;
    s1.setNodeVal(2, "string 5");
    s1.setNodeVal(8, "string 8");

    s1.display();
    cout << endl;
    s1.getAsVector();
    s1.printVect(s1.getAsVector());
    
    StringList s2 = s1;
    s2.display();
    cout << endl;
    s1.add("string 4");
    s2.display();
    cout << endl;
    s1.display();
    cout << endl;
    s2.getAsVector();
    s2.printVect(s2.getAsVector());
    
    
    return 0;
}