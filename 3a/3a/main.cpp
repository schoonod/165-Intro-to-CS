//

#include <iostream>
#include "Box.hpp"

int main() {
    
    Box box1;
    Box box2(3, 5, 9);
    
    std::cout << box1.getVolume() << std::endl;
    std::cout << box2.getVolume() << std::endl;
    std::cout << box2.getSurfaceArea() << std::endl;

    return 0;
}
