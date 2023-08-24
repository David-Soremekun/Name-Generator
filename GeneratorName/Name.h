#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

class Name {
private:
    int nameCount = 20;

    std::string name;
    std::vector<std::string> listName;

    std::string prFirstNameB[219] = { };  // Array Containing Male Portuguese Given Name
    std::string prFirstNameG[90] = { };   // Array Containing Female Portuguese Given Name
    std::string prFamilyName[383] = { };  // Array Containing  Portuguese Surname

    std::string ngFirstNameB[266] = { };  // Array Containing Male Norwegian Given Name
    std::string ngFirstNameG[147] = { };  // Array Containing Female Norwegian Given Name
    std::string ngFamilyName[841] = { };  // Array Containing Norwegian Surname

    std::string enFirstNameB[790] = { };  // Array Containing Male English Given Name
    std::string enFirstNameG[756] = { };  // Array Containing Female English Given Name
    std::string enFamilyName[639] = { };  // Array Containing English Surname

    std::string frFirstNameB[326] = { };  // Array Containing Male French Given Name
    std::string frFirstNameG[100] = { };  // Array Containing Female French Given Name
    std::string frFamilyName[100] = { };  // Array Containing French Surname

    std::string spFirstNameB[100] = { }; // Array Containing Male Spanish Given Name
    std::string spFirstNameG[100] = { }; // Array Containing Female Spanish Given Name
    std::string spFamilyName[196] = { };

    std::string grFirstNameB[332] = { }; // Array Containing Male Spanish Given Name
    std::string grFirstNameG[215] = { }; // Array Containing Female Spanish Given Name
    std::string grFamilyName[906] = { };

    std::string rsFirstNameB[63] = { };  // Array Containing Male Russian Given Name
    std::string rsFirstNameG[123] = { }; // Array Containing Female Russian Given Name
    std::string rsFamilyName[99] = { };

    std::string itFirstNameB[383] = { }; // Array Containing Male Italian Given Name
    std::string itFirstNameG[198] = { }; // Array Containing Female Italian Given Name
    std::string itFamilyName[791] = { };

    std::string plFirstNameB[171] = { };  // Array Containing Male Polish Given Name
    std::string plFirstNameG[112] = { };  // Array Containing Female Polish Given Name
    std::string plFamilyName[1858] = { };  // Array Containing  Polish Surname

    std::string swFirstNameB[198] = { }; // Array Containing Male Swedish Given Name
    std::string swFirstNameG[178] = { }; // Array Containing Female Swedish Given Name
    std::string swFamilyName[710] = { };

    std::string jpFirstNameB[1398] = { };// Array Containing Male Japanese Given Name
    std::string jpFirstNameG[499] = { }; // Array Containing Female Japanese Given Name
    std::string jpFamilyName[110] = { };

    std::string abFirstNameB[684] = { };// Array Containing Male Arabic Given Name
    std::string abFirstNameG[209] = { }; // Array Containing Female Arabic Given Name
    std::string abFamilyName[711] = { };

    inline void readFile(const std::string& filename, std::string* testArray, const int SIZE);
    inline void printNames();
    void deleteNames();

public:

    Name();
    ~Name();
    void createArabicNames();
    void createEnglishNames();
    void createSpanishNames();
    void createFrenchNames();
    void createRussianNames();
    void createItalianNames();
    void createSwedishNames();
    void createPolishNames();
    void createJapaneseNames();
    void createNorwegianNames();
    void createGermanNames();
};