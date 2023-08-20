
#include <iostream>
#include <sstream>
#include <string>
#include "Name.h"

int main() 
{
    Name names;
    int numInt;
    std::string numStr;
    std::string response;
    bool playAgain = true;


    while (playAgain) 
    {
        std::cout << "***********************" << std::endl;
        std::cout << "   Name Generator 2.0" << std::endl;
        std::cout << "***********************" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "List:" << std::endl;
        std::cout << "1. French" << std::endl;
        std::cout << "2. Spanish" << std::endl;
        //std::cout << "3. Farwish" << std::endl;
        //std::cout << "4. Sabiri" << std::endl;
        std::cout << "Choose the culture of Names? ";
        std::getline(std::cin, numStr);
        std::istringstream(numStr) >> numInt;

        switch (numInt) {
        case 1:
            names.createFrenchNames();
            std::cout << "\n";
            break;
        case 2:
            names.createSpanishNames();
            std::cout << "\n";
            break;
        /*case 3:

            break;
        case 4:

            break;*/
        default:
            std::cout << "" << std::endl;
            break;
        }

        std::cout << "Do you want to go again? (Yes/No) \n";
        std::cin >> response;
        if (response=="Yes" || response == "yes" || response == "Y" || response == "y") 
        {
            playAgain = true;
        }
        else if (response == "No" || response == "no" || response == "N" || response == "n") 
        {
            playAgain = false;
        }
        else 
        {
            std::cout << "ERROR ~ INVALID INPUT\n";
        }
    }
    

    return 0;
}