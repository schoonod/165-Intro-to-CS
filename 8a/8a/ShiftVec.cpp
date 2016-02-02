//  Project 8a, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8a creates a template class for a vector object, and shifts
 vector elements left and right.
 **********************************************************************************/
#include "ShiftVec.hpp"

/***********************************************************************************
 ** Description: Default constructor
 **********************************************************************************
template <typename T>
ShiftVec<T>::ShiftVec(){
    vect = vector<T> myVec;
}
*/

/***********************************************************************************
 ** Description: Constructor
 ***********************************************************************************/
template <typename T>
ShiftVec<T>::ShiftVec(vector<T> vect){
    this->vect = vect;
}
/***********************************************************************************
 ** Description: Accessor to return vector
 ***********************************************************************************/
template<typename T>
vector<T> ShiftVec<T>::getVec(){
    return vect;
}
/***********************************************************************************
 ** Description: Shift right
 ***********************************************************************************/
template<typename T>
void ShiftVec<T>::shiftRight(int shiftSpec){
    int shiftActual = shiftSpec % vect.size();
    for (int unsigned long i = vect.size() - shiftActual; i > 0; i--){
        vect.push_back(vect[0]);
        vect.erase(vect.begin());
    }
}
/***********************************************************************************
** Description: Shift left
***********************************************************************************/
template<typename T>
void ShiftVec<T>::shiftLeft(int shiftSpec){
    int shiftActual = shiftSpec % vect.size();
    for(int i = shiftActual; i > 0; i--){
        vect.push_back(vect[0]);
        vect.erase(vect.begin());
    }
}
/***********************************************************************************
 ** Description: For testing
 ***********************************************************************************/
/*template<typename T>
void ShiftVec<T>::printVec(){
    for (int i = 0; i < 8; i++){
        cout << vect[i];
    }
}*/

template class ShiftVec<int>;
template class ShiftVec<double>;
template class ShiftVec<bool>;
template class ShiftVec<std::string>;
