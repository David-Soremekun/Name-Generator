
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

    readFile(frMaleName, frFirstNameB, 50);
    readFile(frFemaleName, frFirstNameG, 100);
    readFile(frenchLastName, frFamilyName, 100);

    readFile(spMaleName, spFirstNameB, 100);
    readFile(spFemaleName, spFirstNameG, 100);
    readFile(spLastName, spFamilyName, 196);
}

void Name::createSpanishNames() 
{
    int genderChoice;

    int amountRandfirstName;
    int amountRandSecondName;
    for (int i = 0; i < 20; i++) 
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
    generateNames();
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

void Name::generateNames() 
{
    for (int i = 0; i < listName.size(); ++i)
        std::cout << listName[i] << std::endl;

    listName.clear();
}

void Name::createFrenchNames() 
{
    srand(time(NULL));

    int genderChoice;
    for (int i = 0; i < 20; i++) {
        genderChoice = rand() % 2+1;
        switch (genderChoice) {
        case 1:
            name = frFirstNameB[genFirstName] + " " + frFamilyName[genSecondName]+ " [M]";;
            listName.push_back(name);
            genFirstName = rand() % 50;
            genSecondName = rand() % 100;
            break;
        case 2:
            name = frFirstNameG[genFirstName] + " " + frFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            genFirstName = rand() % 50;
            genSecondName = rand() % 100;
            break;
        default:
            break;
        }
    }
    generateNames();
}
