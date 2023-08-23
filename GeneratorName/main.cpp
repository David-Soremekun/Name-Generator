
#include <iostream>
#include <sstream>
#include <locale>
#include <exception>
#include <string>
#include "Name.h"

int main() {

    std::locale::global(std::locale{ ".utf-8" });
    auto streamLocale = std::locale{ "" };
    std::cout.imbue(streamLocale);
    std::cin.imbue(streamLocale);

    Name *names = new Name();

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
        std::cout << "1. English" << std::endl;
        std::cout << "2. French" << std::endl;
        std::cout << "3. Spanish" << std::endl;
        std::cout << "4. Italian" << std::endl;
        std::cout << "5. German" << std::endl;
        std::cout << "6. Polish" << std::endl;
        std::cout << "7. Russian" << std::endl;
        std::cout << "8. Swedish" << std::endl;
        std::cout << "9. Norweigan" << std::endl;
        std::cout << "10. Japanese" << std::endl;
        std::cout << "Choose the nationality of names? ";
        //std::cout << "\n" << std::endl;
        std::getline(std::cin, numStr);
        std::istringstream(numStr) >> numInt;

        switch (numInt)
        {
        case 1:
            names->createEnglishNames();
            std::cout << "\n";
            break;
        case 2:
            names->createFrenchNames();
            std::cout << "\n";
            break;
        case 3:
            names->createSpanishNames();
            std::cout << "\n";
            break;
        case 4: 
            names->createItalianNames();
            std::cout << "\n";
            break;
        case 5:
            names->createGermanNames();
            //std::cout << "\n";
            break;
        case 6:
            names->createPolishNames();
            std::cout << "\n";
            break;
        case 7:
            names->createRussianNames();
            std::cout << "\n";
            break;
        case 8: 
            names->createSwedishNames();
            std::cout << "\n";
            break;
        case 9:
            names->createNorwegianNames();
            std::cout << "\n";
            break;
        case 10:
            names->createJapaneseNames();
            std::cout << "\n";
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