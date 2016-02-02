//  Project 8a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8a creates a template class for a vector object, and shifts 
 vector elements left and right.
 **********************************************************************************/
#ifndef SHIFTVEC_HPP
#define SHIFTVEC_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Create template class
template <typename T>
class ShiftVec {

private:
    // template data member
    vector<T> vect;
public:
    ShiftVec();
    ShiftVec(vector<T>);
    vector<T> getVec();
    
    void shiftRight(int);
    void shiftLeft(int);

    //for testing
    //void printVec();
};
#endif






