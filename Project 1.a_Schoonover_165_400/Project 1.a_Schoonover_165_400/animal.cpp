//  Project 1.a_Schoonover_165_400
/*********************************************************************
 ** Author: DANE SCHOONOVER
 ** Date: 3/31/2015
 ** Description: PROJECT 1.A demonstrates input/output
 *********************************************************************/


#include <iostream>
#include <string>

// a simple example program
int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;
    
    return 0;
}