
#include <iostream>
#include <sstream>
#include <string>
#include "Name.h"

int main() {
    Name names;
    int numInt;
    std::string numStr;
    std::string response;
    bool playAgain = true;


    do
    {
        std::cout << "***********************" << std::endl;
        std::cout << "   Name Generator 2.0" << std::endl;
        std::cout << "***********************" << std::endl;
        std::cout << "\n" << std::endl;
        std::cout << "List:" << std::endl;
        std::cout << "1. French" << std::endl;
        std::cout << "2. Spanish" << std::endl;
        std::cout << "3. Italian" << std::endl;
        std::cout << "4. Russian" << std::endl;
        std::cout << "5. Swedish" << std::endl;
        std::cout << "Choose the culture of Names? ";
        std::getline(std::cin, numStr);
        std::istringstream(numStr) >> numInt;
        std::cout << "\n";

        switch (numInt)
        {
        case 1:
            names.createFrenchNames();
            std::cout << "\n";
            break;
        case 2:
            names.createSpanishNames();
            std::cout << "\n";
            break;
        case 3: 
            names.createItalianNames();
            std::cout << "\n";
            break;
        case 4:
            names.createRussianNames();
            std::cout << "\n";
            break;
        case 5: 
            names.createSwedishNames();
            std::cout << "\n";
            break;
        default:
            break;
        }

        std::cout << "Do you want to go again? (Yes/No) \n";
        std::cin >> response;
        if (response=="Yes" || response == "yes" || response == "Y" || response == "y") 
        {
            
            playAgain = true;
            //break;

        }
        else if (response == "No" || response == "no" || response == "N" || response == "n") 
        {
            playAgain = false;
        }
        else 
        {
            std::cout << "ERROR ~ INVALID INPUT\n";
        } 
    } while (playAgain);
    

    return 0;
}