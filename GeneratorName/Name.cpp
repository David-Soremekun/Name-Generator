
#include "Name.h"
#include <random>

void Name::createSpanishNames() {

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {


        int NumRand = rand() % 3 + 1;
        if (NumRand == 1) {
            Name = spFirstNameB[genFirstName] + " " + spFamilyName[genSecondName];
            listName.push_back(Name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
        }
        else if (NumRand == 2) {
            Name = spFirstNameB[genFirstName] + " " + spFamilyName[genSecondName];
            listName.push_back(Name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
        }
        else if (NumRand == 3) {
            Name = spFirstNameG[genFirstName] + " " + spFamilyName[genSecondName];
            listName.push_back(Name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
        }
        else {
            Name = spFirstNameG[genFirstName] + " " + spFamilyName[genSecondName];
            listName.push_back(Name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
        }

    }
    generateNames();

}

void Name::generateNames() {

    for (int i = 0; i < listName.size(); ++i)
        std::cout << listName[i] << std::endl;

    listName.clear();
}
void Name::createFrenchNames() {
    int NumRand = rand() % 2;
    for (int i = 0; i < 20; i++) {
        switch (NumRand) {
        case 1:
            Name = frFirstNameB[genFirstName] + " " + frFamilyName[genSecondName];
            listName.push_back(Name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
            break;
        case 2:
            Name = frFirstNameG[genFirstName] + " " + frFamilyName[genSecondName];
            listName.push_back(Name);
            genFirstName = rand() % 20;
            genSecondName = rand() % 20;
            break;
        default:
            break;
        }
    }
    generateNames();
}
