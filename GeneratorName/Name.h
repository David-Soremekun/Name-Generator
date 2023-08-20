#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

class Name {
private:
    int nameCount = 25;

    int count{ 1 };
    std::string name;
    

    std::vector<std::string> listName;


    std::string frFirstNameB[50] = {  };
    // Array Containing Male French Given Name
    std::string frFirstNameG[100] = {  };
    // Array Containing Female French Given Name
    std::string frFamilyName[100] = { };
    // Array Containing Female French Surname

    std::string spFirstNameB[100] = {  };
    // Array Containing Male Spanish Given Name
    std::string spFirstNameG[100] = {  };
    // Array Containing Female Spanish Given Name
    std::string spFamilyName[196] = { };

    std::string rsFirstNameB[63] = {  };
    // Array Containing Male Russian Given Name
    std::string rsFirstNameG[123] = {  };
    // Array Containing Female Russian Given Name
    std::string rsFamilyName[99] = { };

    void readFile(const std::string& filename, std::string* testArray, const int SIZE);
    void printNames();
    void deleteNames();
public:
    Name();
    void createSpanishNames();
    void createFrenchNames();
    void createRussianNames();
    void createItalianNames();
};