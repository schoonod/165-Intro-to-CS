//  Project 8b, 165/400
/***********************************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 5/14/2015
 ** Description:PROJECT 8b
 **********************************************************************************/
#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP

class CustomerProject {

protected:
    double hours;
    double materials;
    double transportation;
    
public:
    CustomerProject();
    CustomerProject(double, double, double);
    
    void setHours(double);
    double getHours();
    
    void setMaterials(double);
    double getMaterials();
    
    void setTransportation(double);
    double getTransportation();
    
    // pure virtual function
    virtual double billAmount() = 0;
};


#endif