
#include "Name.h"
#include <random>
#include <string>
#include <iostream>
#include <fstream>

Name::Name()
{
       
}

Name::~Name()
{

    delete[] swFirstNameB;
    delete[] swFirstNameG;
    delete[] swFamilyName;
    
    delete[] jpFirstNameB;
    delete[] jpFirstNameG;
    delete[] jpFamilyName;

    delete[] frFirstNameB;
    delete[] frFirstNameG;
    delete[] frFamilyName;

    delete[] spFirstNameB;
    delete[] spFirstNameG;
    delete[] spFamilyName;

    delete[] itFirstNameB;
    delete[] itFirstNameG;
    delete[] itFamilyName;

    delete[] rsFirstNameB;
    delete[] rsFirstNameG;
    delete[] rsFamilyName;

}

void Name::readFile(const std::string &filename, std::string *testArray, const int SIZE)
{
    std::string inFileName = filename;
    std::ifstream inFile;
    inFile.open(inFileName.c_str());
    //char* fname[18];
    if (inFile.is_open())
    {
        for (int i = 0; i < SIZE; i++)
        {
            
            inFile>>testArray[i];
            
        }

        inFile.close(); // CLose input file
    }
    //free(testArray);
}

void Name::printNames()
{
    for (int i = 0; i < listName.size(); ++i)
        std::cout << listName[i] << std::endl;

    //listName.clear();
    deleteNames();
    
}

void Name::deleteNames()
{
    for (int i = 0; i < listName.size(); i++) {
        listName[i].erase();
    }
}

void Name::createSpanishNames() 
{
    const std::string& spLastName = "List\\Spanish\\lastNames.txt";
    const std::string& spFemaleName = "List\\Spanish\\femaleNames.txt";
    const std::string& spMaleName = "List\\Spanish\\maleNames.txt";
    
    readFile(spMaleName, spFirstNameB, 100);
    readFile(spFemaleName, spFirstNameG, 100);
    readFile(spLastName, spFamilyName, 196);


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

void Name::createFrenchNames() 
{
    const std::string& frenchLastName = "List\\French\\lastNames.txt";
    const std::string& frFemaleName = "List\\French\\femaleNames.txt";
    const std::string& frMaleName = "List\\French\\maleNames.txt";


    readFile(frMaleName, frFirstNameB, 50);
    readFile(frFemaleName, frFirstNameG, 100);
    readFile(frenchLastName, frFamilyName, 100);


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
    const std::string& rsLastName = "List\\Russian\\lastNames.txt";
    const std::string& rsFemaleName = "List\\Russian\\femaleNames.txt";
    const std::string& rsMaleName = "List\\Russian\\maleNames.txt";
     
    readFile(rsMaleName, rsFirstNameB, 63);
    readFile(rsFemaleName, rsFirstNameG, 123);
    readFile(rsLastName, rsFamilyName, 99);


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

    const std::string& itLastName = "List\\Italian\\lastNames.txt";
    const std::string& itFemaleName = "List\\Italian\\femaleNames.txt";
    const std::string& itMaleName = "List\\Italian\\maleNames.txt";

    readFile(itMaleName, itFirstNameB, 383);
    readFile(itFemaleName, itFirstNameG, 198);
    readFile(itLastName, itFamilyName, 791);

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

    const std::string& swLastName = "List\\Swedish\\lastNames.txt";
    const std::string& swFemaleName = "List\\Swedish\\femaleNames.txt";
    const std::string& swMaleName = "List\\Swedish\\maleNames.txt";

    readFile(swMaleName, swFirstNameB, 198);
    readFile(swFemaleName, swFirstNameG, 178);
    readFile(swLastName, swFamilyName, 710);

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

void Name::createJapaneseNames()
{
    srand(time(NULL));
    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;

    const std::string& jpLastName = "List\\Japanese\\lastNames.txt";
    const std::string& jpFemaleName = "List\\Japanese\\femaleNames.txt";
    const std::string& jpMaleName = "List\\Japanese\\maleNames.txt";

    readFile(jpMaleName, jpFirstNameB, 1398);
    readFile(jpFemaleName, jpFirstNameG, 499);
    readFile(jpLastName, jpFamilyName, 110);

    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 1398;
        genFirstName = rand() % 499;
        genSecondName = rand() % 110;

        switch (genderChoice) {
        case 1:
            name = jpFamilyName[genSecondName] + " " + jpFirstNameB[maleFirstNameGen] + " [M]";
            listName.push_back(name);
            break;
        case 2:
            name = jpFamilyName[genSecondName] + " " + jpFirstNameG[genFirstName] + " [F]";
            listName.push_back(name);
            break;
        default:
            break;
        }
    }
    printNames();

}
