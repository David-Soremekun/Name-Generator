#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

class Name {
private:
    int nameCount = 25;

    std::string name;
    std::vector<std::string> listName;


    std::string frFirstNameB[50] = { };  // Array Containing Male French Given Name
    std::string frFirstNameG[100] = { }; // Array Containing Female French Given Name
    std::string frFamilyName[100] = { }; // Array Containing Female French Surname

    std::string spFirstNameB[100] = { }; // Array Containing Male Spanish Given Name
    std::string spFirstNameG[100] = { }; // Array Containing Female Spanish Given Name
    std::string spFamilyName[196] = { };

    std::string rsFirstNameB[63] = { };  // Array Containing Male Russian Given Name
    std::string rsFirstNameG[123] = { }; // Array Containing Female Russian Given Name
    std::string rsFamilyName[99] = { };

    std::string itFirstNameB[383] = { }; // Array Containing Male Italian Given Name
    std::string itFirstNameG[198] = { }; // Array Containing Female Italian Given Name
    std::string itFamilyName[791] = { };

    std::string swFirstNameB[198] = { }; // Array Containing Male Swedish Given Name
    std::string swFirstNameG[178] = { }; // Array Containing Female Swedish Given Name
    std::string swFamilyName[710] = { };

    std::string jpFirstNameB[1398] = { };// Array Containing Male Japanese Given Name
    std::string jpFirstNameG[499] = { }; // Array Containing Female Japanese Given Name
    std::string jpFamilyName[110] = { };

    void readFile(const std::string& filename, std::string* testArray, const int SIZE);
    void printNames();
    void deleteNames();
public:
    Name();
    ~Name();
    void createSpanishNames();
    void createFrenchNames();
    void createRussianNames();
    void createItalianNames();
    void createSwedishNames();
    void createJapaneseNames();

};