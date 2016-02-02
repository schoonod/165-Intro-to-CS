//  Project 8a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8a creates a template class for a vector object, and shifts
 vector elements left and right.
 **********************************************************************************/
#include "ShiftVec.hpp"

int main() {
    
    vector<int> myVec;
    
    cout << "Values before rotation: ";
    for (int i = 0; i < 8; i++){
        myVec.push_back(i);
        cout << myVec[i];
    }
    
    cout << endl;
    
    ShiftVec<int> sv1(myVec);
    sv1.shiftRight(14);
    
    cout << "Values after right rotation: " << endl;
    //sv1.printVec();
    cout << endl;
     
     return 0;
}
