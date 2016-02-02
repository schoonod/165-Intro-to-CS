//  Project 7b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 7b
 **********************************************************************************/
#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger
{
private:
    int *pInteger;
    
public:
    MyInteger();
    MyInteger(int);
    MyInteger(const MyInteger &);
    MyInteger operator=(const MyInteger &);
    void setMyInt(int);
    int getMyInt();
    ~MyInteger();
    
};

#endif 
