
#include <iostream>
#include <sstream>
#include <string>
#include "Name.h"
int main() {
    std::string numStr;
    int numInt;
    Name names;

    std::cout << "***********************" << std::endl;
    std::cout << "   Name Generator 1.0" << std::endl;
    std::cout << "***********************" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "List:" << std::endl;
    std::cout << "1. Stormborn" << std::endl;
    std::cout << "2. Andrian" << std::endl;
    std::cout << "3. Farwish" << std::endl;
    std::cout << "4. Sabiri" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Choose the culture of Names? ";
    std::getline(std::cin, numStr);
    std::istringstream(numStr) >> numInt;

    switch (numInt) {
    case 1:
        names.createSBNames();

        break;
    case 2:
        names.createADNames();

        break;
    case 3:


        break;
    case 4:


        break;
    default:
        std::cout << "" << std::endl;

        break;
    }


    return 0;
}