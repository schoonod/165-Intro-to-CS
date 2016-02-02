//  Project 8b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8b
 **********************************************************************************/
#ifndef PREFERREDROJECT_HPP
#define PREFERREDROJECT_HPP

#include "CustomerProject.hpp"

class PreferredProject : public CustomerProject{

public:
   
    PreferredProject(double, double, double);
    
    // override billAmount()
    virtual double billAmount();
};

#endif