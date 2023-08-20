#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

class Name {
private:
    int nameCountFr = 50;

    int count{ 1 };
    std::string name;
    int genFirstName = rand() % 50;
    int genSecondName = rand() % 100;
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

    void readFile(const std::string& filename, std::string* testArray, const int SIZE);
    void generateNames();
public:
    Name();
    void createSpanishNames();
    void createFrenchNames();
};