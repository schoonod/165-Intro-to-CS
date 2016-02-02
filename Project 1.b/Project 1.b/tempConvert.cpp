//  Project 1.b_Schoonover_165_400
/*********************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 3/31/2015
 ** Description: PROJECT 1.B converts an input of Celcius to Fahrenheit
 *********************************************************************/

#include <iostream>

int main() {
   
    int cTemp;
    float fTemp;
    
    std::cout << "To convert Celcius to Fahrenheit, enter a Celcius temp." << std::endl;
    
    std::cin >> cTemp;
    
    fTemp = 9.0 / 5 * cTemp + 32;
    
    std::cout << fTemp << std::endl;
    
    return 0;
}
