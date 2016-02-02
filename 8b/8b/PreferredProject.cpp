//  Project 8b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8b
 **********************************************************************************/
#include "PreferredProject.hpp"

/***********************************************************************************
 ** Description: RegularProject constructor invokes CustomerProject constructor.
 ***********************************************************************************/
PreferredProject::PreferredProject(double hours, double materials, double transportation) :
CustomerProject(hours, materials, transportation){}

/***********************************************************************************
 ** Description: Override billAmount from CustomerProject
 ***********************************************************************************/
double PreferredProject::billAmount(){
    
    if (hours < 100)
        return ((.85 * materials) + (.90 * transportation) + (80.00 * hours));
    else
        return ((.85 * materials) + (.90 * transportation) + (80.00 * 100.00));
}
