//  Project 8b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8b
 **********************************************************************************/
#include "CustomerProject.hpp"

/***********************************************************************************
 ** Description: Default constructor.
 ***********************************************************************************/
CustomerProject::CustomerProject(){
    hours = 0.0;
    materials = 0.0;
    transportation = 0.0;
}

/***********************************************************************************
 ** Description: Constructor that takes three doubles.
 ***********************************************************************************/
CustomerProject::CustomerProject(double hours, double materials, double transportation){
    setHours(hours);
    setMaterials(materials);
    setTransportation(transportation);
}

/***********************************************************************************
 ** Description: Mutator sets hours.
 ***********************************************************************************/
void CustomerProject::setHours(double hours){
    this->hours = hours;
}

/***********************************************************************************
 ** Description: Mutator sets materials.
 ***********************************************************************************/
void CustomerProject::setMaterials(double materials){
    this->materials = materials;
}

/***********************************************************************************
 ** Description: Mutator sets transportation.
 ***********************************************************************************/
void CustomerProject::setTransportation(double transportation){
    this->transportation = transportation;
}

/***********************************************************************************
 ** Description: Accessor returns hours.
 ***********************************************************************************/
double CustomerProject::getHours(){
    return hours;
}

/***********************************************************************************
 ** Description: Accessor returns materials.
 ***********************************************************************************/
double CustomerProject::getMaterials(){
    return materials;
}

/***********************************************************************************
 ** Description: Accessor returns transportation.
 ***********************************************************************************/
double CustomerProject::getTransportation(){
    return transportation;
}
