//  Project 7b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 7b....
 **********************************************************************************/
#include "MyInteger.hpp"

/***********************************************************************************
 ** Description: MyInteger default constructor.
 ***********************************************************************************/
MyInteger::MyInteger(){
    this->pInteger = new int;
    *this->pInteger = 0;
}
/***********************************************************************************
 ** Description: MyInteger constructor.
 ***********************************************************************************/
MyInteger::MyInteger(int pInteger){
    this->pInteger = new int;
    *this->pInteger = pInteger;
}
/***********************************************************************************
 ** Description: MyInteger copy constructor, copies object values into a new address.
 ***********************************************************************************/
MyInteger::MyInteger(const MyInteger &obj){
    this->pInteger = new int;
    *this->pInteger = *obj.pInteger;
}
/***********************************************************************************
 ** Description: MyInteger overloaded assignment operator.  Allocates new
 memory for a new object when assigning.
 ***********************************************************************************/
MyInteger MyInteger::operator=(const MyInteger &obj){
    *this->pInteger = *obj.pInteger;
    return *this->pInteger;
}
/***********************************************************************************
 ** Description: Mutator function sets the value at the calling object's address.
 ***********************************************************************************/
void MyInteger::setMyInt(int pInt){
    *this->pInteger = pInt;
}
/***********************************************************************************
 ** Description: Accessor function gets value of the calling object's address.
 ***********************************************************************************/
int MyInteger::getMyInt(){
    return *this->pInteger;
}
/***********************************************************************************
 ** Description: Destructor.
 ***********************************************************************************/
MyInteger::~MyInteger(){
    delete this->pInteger;
}

