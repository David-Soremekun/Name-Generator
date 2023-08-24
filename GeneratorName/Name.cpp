
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

    delete[] grFirstNameB;
    delete[] grFirstNameG;
    delete[] grFamilyName;

    delete[] abFirstNameB;
    delete[] abFirstNameG;
    delete[] abFamilyName;

    delete[] enFirstNameB;
    delete[] enFirstNameG;
    delete[] enFamilyName;

    delete[] ngFirstNameB;
    delete[] ngFirstNameG;
    delete[] ngFamilyName;

    delete[] plFirstNameB;
    delete[] plFirstNameG;
    delete[] plFamilyName;

    delete[] prFirstNameB;
    delete[] prFirstNameG;
    delete[] prFamilyName;
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
        std::cout << listName[i] << "\n";

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
    random_shuffle(std::begin(spFirstNameB), std::end(spFirstNameB));
    random_shuffle(std::begin(spFirstNameG), std::end(spFirstNameG));
    random_shuffle(std::begin(spFamilyName), std::end(spFamilyName));
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


    readFile(frMaleName, frFirstNameB, 326);
    readFile(frFemaleName, frFirstNameG, 100);
    readFile(frenchLastName, frFamilyName, 100);


    srand(time(NULL));
    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;


    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2+1;
        maleFirstNameGen = rand() % 326;
        genFirstName = rand() % 100;
        genSecondName = rand() % 100;

        random_shuffle(std::begin(frFirstNameB), std::end(frFirstNameB));
        random_shuffle(std::begin(frFirstNameG), std::end(frFirstNameG));
        random_shuffle(std::begin(frFamilyName), std::end(frFamilyName));
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
        
        random_shuffle(std::begin(rsFirstNameB), std::end(rsFirstNameB));
        random_shuffle(std::begin(rsFirstNameG), std::end(rsFirstNameG));
        random_shuffle(std::begin(rsFamilyName), std::end(rsFamilyName));

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

        random_shuffle(std::begin(itFirstNameB), std::end(itFirstNameB));
        random_shuffle(std::begin(itFirstNameG), std::end(itFirstNameG));
        random_shuffle(std::begin(itFamilyName), std::end(itFamilyName));

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

        random_shuffle(std::begin(swFirstNameB), std::end(swFirstNameB));
        random_shuffle(std::begin(swFirstNameG), std::end(swFirstNameG));
        random_shuffle(std::begin(swFamilyName), std::end(swFamilyName));

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

        random_shuffle(std::begin(jpFirstNameB), std::end(jpFirstNameB));
        random_shuffle(std::begin(jpFirstNameG), std::end(jpFirstNameG));
        random_shuffle(std::begin(jpFamilyName), std::end(jpFamilyName));

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

void Name::createGermanNames()
{
    const std::string& grLastName = "List\\German\\lastNames.txt";
    const std::string& grFemaleName = "List\\German\\femaleNames.txt";
    const std::string& grMaleName = "List\\German\\maleNames.txt";

    readFile(grMaleName, grFirstNameB, 332);
    readFile(grFemaleName, grFirstNameG, 215);
    readFile(grLastName, grFamilyName, 906);


    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;

    

    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 332;
        genFirstName = rand() % 215;
        genSecondName = rand() % 906;

        random_shuffle(std::begin(grFirstNameB), std::end(grFirstNameB));
        random_shuffle(std::begin(grFirstNameG), std::end(grFirstNameG));
        random_shuffle(std::begin(grFamilyName), std::end(grFamilyName));

        switch (genderChoice) {
        case 1:
            name = grFirstNameB[maleFirstNameGen] + " " + grFamilyName[genSecondName] + " [M]";
            listName.push_back(name);
            break;
        case 2:
            name = grFirstNameG[genFirstName] + " " + grFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            break;
        default:
            break;
        }
    }
    printNames();
}

void Name::createEnglishNames() 
{
    const std::string& enLastName = "List\\English\\lastNames.txt";
    const std::string& enFemaleName = "List\\English\\femaleNames.txt";
    const std::string& enMaleName = "List\\English\\maleNames.txt";

    readFile(enMaleName, enFirstNameB, 790);
    readFile(enFemaleName, enFirstNameG, 756);
    readFile(enLastName, enFamilyName, 639);


    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;

    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 790;
        genFirstName = rand() % 756;
        genSecondName = rand() % 639;

        random_shuffle(std::begin(enFirstNameB), std::end(enFirstNameB));
        random_shuffle(std::begin(enFirstNameG), std::end(enFirstNameG));
        random_shuffle(std::begin(enFamilyName), std::end(enFamilyName));

        switch (genderChoice) {
        case 1:
            name = enFirstNameB[maleFirstNameGen] + " " + enFamilyName[genSecondName] + " [M]";
            listName.push_back(name);
            break;
        case 2:
            name = enFirstNameG[genFirstName] + " " + enFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            break;
        default:
            break;
        }
    }
    printNames();
}

void Name::createNorwegianNames()
{
    const std::string& ngLastName = "List\\Norwegian\\lastNames.txt";
    const std::string& ngFemaleName = "List\\Norwegian\\femaleNames.txt";
    const std::string& ngMaleName = "List\\Norwegian\\maleNames.txt";

    readFile(ngMaleName, ngFirstNameB, 266);
    readFile(ngFemaleName, ngFirstNameG, 147);
    readFile(ngLastName, ngFamilyName, 841);


    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;

    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 266;
        genFirstName = rand() % 147;
        genSecondName = rand() % 841;

        random_shuffle(std::begin(ngFirstNameB), std::end(ngFirstNameB));
        random_shuffle(std::begin(ngFirstNameG), std::end(ngFirstNameG));
        random_shuffle(std::begin(ngFamilyName), std::end(ngFamilyName));

        switch (genderChoice) {
        case 1:
            name = ngFirstNameB[maleFirstNameGen] + " " + ngFamilyName[genSecondName] + " [M]";
            listName.push_back(name);
            break;
        case 2:
            name = ngFirstNameG[genFirstName] + " " + ngFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            break;
        default:
            break;
        }
    }
    printNames();

}

void Name::createPolishNames()
{
    const std::string& plLastName = "List\\Polish\\lastNames.txt";
    const std::string& plFemaleName = "List\\Polish\\femaleNames.txt";
    const std::string& plMaleName = "List\\Polish\\maleNames.txt";

    readFile(plMaleName, plFirstNameB, 171);
    readFile(plFemaleName, plFirstNameG, 112);
    readFile(plLastName, plFamilyName, 1858);


    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;

    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 171;
        genFirstName = rand() % 112;
        genSecondName = rand() % 1858;

        random_shuffle(std::begin(plFirstNameB), std::end(plFirstNameB));
        random_shuffle(std::begin(plFirstNameG), std::end(plFirstNameG));
        random_shuffle(std::begin(plFamilyName), std::end(plFamilyName));

        switch (genderChoice) {
        case 1:
            name = plFirstNameB[maleFirstNameGen] + " " + plFamilyName[genSecondName] + " [M]";
            listName.push_back(name);
            break;
        case 2:
            name = plFirstNameG[genFirstName] + " " + plFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            break;
        default:
            break;
        }
    }
    printNames();

}

void Name::createArabicNames()
{
    const std::string& abLastName = "List\\Arabic\\lastNames.txt";
    const std::string& abFemaleName = "List\\Arabic\\femaleNames.txt";
    const std::string& abMaleName = "List\\Arabic\\maleNames.txt";

    readFile(abMaleName, abFirstNameB, 684);
    readFile(abFemaleName, abFirstNameG, 209);
    readFile(abLastName, abFamilyName, 711);


    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;

    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 684;
        genFirstName = rand() % 209;
        genSecondName = rand() % 711;

        random_shuffle(std::begin(abFirstNameB), std::end(abFirstNameB));
        random_shuffle(std::begin(abFirstNameG), std::end(abFirstNameG));
        random_shuffle(std::begin(abFamilyName), std::end(abFamilyName));

        switch (genderChoice) {
        case 1:
            name = abFirstNameB[maleFirstNameGen] + " " + abFamilyName[genSecondName] + " [M]";
            listName.push_back(name);
            break;
        case 2:
            name = abFirstNameG[genFirstName] + " " + abFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            break;
        default:
            break;
        }
    }
    printNames();

}
void Name::createPortugueseNames()
{
    const std::string& prLastName = "List\\Portuguese\\lastNames.txt";
    const std::string& prFemaleName = "List\\Portuguese\\femaleNames.txt";
    const std::string& prMaleName = "List\\Portuguese\\maleNames.txt";

    readFile(prMaleName, prFirstNameB, 218);
    readFile(prFemaleName, prFirstNameG, 90);
    readFile(prLastName, prFamilyName, 383);


    int maleFirstNameGen;
    int genFirstName;
    int genSecondName;
    int genderChoice;

    for (int i = 0; i < nameCount; i++) {
        genderChoice = rand() % 2 + 1;

        maleFirstNameGen = rand() % 218;
        genFirstName = rand() % 90;
        genSecondName = rand() % 383;

        random_shuffle(std::begin(prFirstNameB), std::end(prFirstNameB));
        random_shuffle(std::begin(prFirstNameG), std::end(prFirstNameG));
        random_shuffle(std::begin(prFamilyName), std::end(prFamilyName));

        switch (genderChoice) {
        case 1:
            name = prFirstNameB[maleFirstNameGen] + " " + prFamilyName[genSecondName] + " [M]";
            listName.push_back(name);
            break;
        case 2:
            name = prFirstNameG[genFirstName] + " " + prFamilyName[genSecondName] + " [F]";
            listName.push_back(name);
            break;
        default:
            break;
        }
    }
    printNames();

}
