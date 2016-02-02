//  Project 8b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8b
 **********************************************************************************/
#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP

#include "CustomerProject.hpp"

// Inherits CustomerProject
class RegularProject : public CustomerProject{

public:
   
    RegularProject(double, double, double);
    
    // override billAmount()
    virtual double billAmount();
};

#endif