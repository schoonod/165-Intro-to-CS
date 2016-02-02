//  Project 8b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8b
 **********************************************************************************/
#include "RegularProject.hpp"

/***********************************************************************************
 ** Description: RegularProject constructor invokes CustomerProject constructor.
 ***********************************************************************************/
RegularProject::RegularProject(double hours, double materials, double transportation) :
CustomerProject(hours, materials, transportation){}

/***********************************************************************************
 ** Description: Override billAmount from CustomerProject
 ***********************************************************************************/
double RegularProject::billAmount(){
   
    return (materials + transportation + (80.00 * hours));
}