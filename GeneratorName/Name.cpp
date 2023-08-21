
#include "Name.h"
#include <random>
#include <string>
#include <iostream>
#include <fstream>

Name::Name()
{
    srand(time(NULL));
    
    const std::string& frenchLastName = "List\\French\\lastNames.txt";
    const std::string& frFemaleName = "List\\French\\femaleNames.txt";
    const std::string& frMaleName = "List\\French\\maleNames.txt";

    const std::string& spLastName = "List\\Spanish\\lastNames.txt";
    const std::string& spFemaleName = "List\\Spanish\\femaleNames.txt";
    const std::string& spMaleName = "List\\Spanish\\maleNames.txt";
    
    const std::string& rsLastName = "List\\Russian\\lastNames.txt";
    const std::string& rsFemaleName = "List\\Russian\\femaleNames.txt";
    const std::string& rsMaleName = "List\\Russian\\maleNames.txt";

    const std::string&itLastName = "List\\Italian\\lastNames.txt";
    const std::string& itFemaleName = "List\\Italian\\femaleNames.txt";
    const std::string& itMaleName = "List\\Italian\\maleNames.txt";

    const std::string& swLastName = "List\\Swedish\\lastNames.txt";
    const std::string& swFemaleName = "List\\Swedish\\femaleNames.txt";
    const std::string& swMaleName = "List\\Swedish\\maleNames.txt";

    readFile(frMaleName, frFirstNameB, 50);
    readFile(frFemaleName, frFirstNameG, 100);
    readFile(frenchLastName, frFamilyName, 100);

    readFile(spMaleName, spFirstNameB, 100);
    readFile(spFemaleName, spFirstNameG, 100);
    readFile(spLastName, spFamilyName, 196);

    readFile(rsMaleName, rsFirstNameB, 63);
    readFile(rsFemaleName, rsFirstNameG, 123);
    readFile(rsLastName, rsFamilyName, 99);

    readFile(itMaleName, itFirstNameB, 383);
    readFile(itFemaleName, itFirstNameG, 198);
    readFile(itLastName, itFamilyName, 791);

    readFile(swMaleName, swFirstNameB, 198);
    readFile(swFemaleName, swFirstNameG, 178);
    readFile(swLastName, swFamilyName, 710);

}

void Name::deleteNames()
{
    for (int i = 0; i < listName.size(); i++) {
        listName[i].erase();
    }
}
void Name::createSpanishNames() 
{
    int genderChoice;

    int amountRandfirstName;
    int amountRandSecondName;
    for (int i = 0; i < nameCount; i++)
    {
        genderChoice = rand() % 2 + 1;
        amountRandfirstName = rand() % 100;
        amountRandSecondName = rand() % 196;

        if (genderChoice == 1) 
        {
            name = spFirstNameB[amountRandfirstName] + " " + spFamilyName[amountRandSecondName] + " [M]";
            listName.push_back(name);
        }
        else 
        {
            name = spFirstNameG[amountRandfirstName] + " " + spFamilyName[amountRandSecondName] + " [F]";
            listName.push_back(name);
        }
    }
    printNames();
}

void Name::readFile(const std::string &filename, std::string *testArray, const int SIZE)
{
    std::string inFileName = filename;
    std::ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())
    {
        for (int i = 0; i < SIZE; i++)
        {
            inFile >> testArray[i];
            //std::cout << testArray[i] << "\n"; //Test To Ouput Values
        }

        inFile.close(); // CLose input file
    }
}

void Name::printNames()
{
    for (int i = 0; i < listName.size(); ++i)
        std::cout << listName[i] << std::endl;

    listName.clear();
    deleteNames();
    
}

void Name::createFrenchNames() 
{
    srand(time(NULL));
    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;


    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2+1;
        maleFirstNameGen = rand() % 50;
        genFirstName = rand() % 100;
        genSecondName = rand() % 100;
        switch (genderChoice) {
        case 1:
            name = frFirstNameB[maleFirstNameGen] + " " + frFamilyName[genSecondName]+ " [M]";;
            listName.push_back(name);
            
            break;
        case 2:
            name = frFirstNameG[genFirstName] + " " + frFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            
            break;
        default:
            break;
        }
    }
    printNames();
}

void Name::createRussianNames()
{
    srand(time(NULL));
    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;


    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 63;
        genFirstName = rand() % 123;
        genSecondName = rand() % 99;
        
        switch (genderChoice) {
        case 1:
            name = rsFirstNameB[maleFirstNameGen] + " " + rsFamilyName[genSecondName] + " [M]";;
            listName.push_back(name);
            
            break;
        case 2:
            name = rsFirstNameG[genFirstName] + " " + rsFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            
            break;
        default:
            break;
        }
    }
    printNames();
}

void Name::createItalianNames()
{
    srand(time(NULL));
    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;


    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 383;
        genFirstName = rand() % 198;
        genSecondName = rand() % 791;

        switch (genderChoice) {
        case 1:
            name = itFirstNameB[maleFirstNameGen] + " " + itFamilyName[genSecondName] + " [M]";;
            listName.push_back(name);
            break;
        case 2:
            name = itFirstNameG[genFirstName] + " " + itFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            break;
        default:
            break;
        }
    }
    printNames();
}

void Name::createSwedishNames()
{
    srand(time(NULL));
    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;


    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 198;
        genFirstName = rand() % 178;
        genSecondName = rand() % 710;

        switch (genderChoice) {
        case 1:
            name = swFirstNameB[maleFirstNameGen] + " " + swFamilyName[genSecondName] + " [M]";;
            listName.push_back(name);
            break;
        case 2:
            name = swFirstNameG[genFirstName] + " " + swFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            break;
        default:
            break;
        }
    }
    printNames();
}
