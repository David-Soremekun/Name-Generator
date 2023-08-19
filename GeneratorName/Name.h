#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

class Name {
private:
    int count{ 1 };
    std::string Name;
    int genFirstName = rand() % 20;
    int genSecondName = rand() % 20;
    std::vector<std::string> listName;


    std::string frFirstNameB[20] = {  };
    // Array Containing Male French Given Name

    std::string frFirstNameG[20] = {  };
    // Array Containing Female French Given Name

    std::string frFamilyName[20] = { };
   
    std::string spFirstNameB[20] = {  };
    // Array Containing Male Spanish Given Name

    std::string spFirstNameG[20] = {  };
    // Array Containing Female Spanish Given Name

    std::string spFamilyName[20] = { };

   
    void generateNames();
public:
    void createSpanishNames();
    void createFrenchNames();
};