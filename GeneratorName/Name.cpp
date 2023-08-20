
#include "Name.h"
#include <random>
#include <string>
#include <iostream>
#include <fstream>

Name::Name()
{
    srand(time(NULL));
    
    const std::string& frenchLastName = "List\\lastNames.txt";
    const std::string& frFemaleName = "List\\femaleNames.txt";
    const std::string& frMaleName = "List\\maleNames.txt";

    readFile(frenchLastName, frFamilyName, 100);
    readFile(frFemaleName, frFirstNameG, 100);
    readFile(frMaleName, frFirstNameB, 50);

}

void Name::createSpanishNames() 
{
    for (int i = 0; i < 20; i++) 
    {

        int NumRand = rand() % 3 + 1;
        if (NumRand == 1) {
            name = spFirstNameB[genFirstName] + " " + spFamilyName[genSecondName];
            listName.push_back(name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
        }
        else if (NumRand == 2) {
            name = spFirstNameB[genFirstName] + " " + spFamilyName[genSecondName];
            listName.push_back(name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
        }
        else if (NumRand == 3) {
            name = spFirstNameG[genFirstName] + " " + spFamilyName[genSecondName];
            listName.push_back(name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
        }
        else {
            name = spFirstNameG[genFirstName] + " " + spFamilyName[genSecondName];
            listName.push_back(name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
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
            //std::cout << testArray[i] << " ";
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

void Name::createFrenchNames() {
    int NumRand = rand() % 2;
    for (int i = 0; i < 20; i++) {
        switch (NumRand) {
        case 1:
            name = frFirstNameB[genFirstName] + " " + frFamilyName[genSecondName];
            listName.push_back(name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
            break;
        case 2:
            name = frFirstNameG[genFirstName] + " " + frFamilyName[genSecondName];
            listName.push_back(name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
            break;
        default:
            break;
        }
    }
    generateNames();
}
