//
//  NameBase.cpp
//  GeneratorName
//
//  Created by David S on 29/06/2022.
//

#include "NameBase.hpp"
#include <random>
void NameBase::createSBNames(){
    srand(time(0));
    
    for (int i=0; i<20; i++) {
        
        
        int NumRand=rand()%3+1;
        if (NumRand==1) {
            Name=SbFirstNameB[genFirstName]+" "+SbClanName[genSecondName];
            listName.push_back(Name);
            genFirstName=rand()%20;
            genSecondName=rand()%20;
        }else if (NumRand==2){
            Name=SbFirstNameB[genFirstName]+" "+nameMonikers[rand()%5];
            listName.push_back(Name);
            genFirstName=rand()%20;
            genSecondName=rand()%20;
        }else if (NumRand==3){
            Name=SbFirstNameG[genFirstName]+" "+SbClanName[genSecondName];
            listName.push_back(Name);
            genFirstName=rand()%20;
            genSecondName=rand()%20;
        }else {
            Name=SbFirstNameG[genFirstName]+" "+nameMonikers[rand()%5];
            listName.push_back(Name);
            genFirstName=rand()%20;
            genSecondName=rand()%20;
        }
        
    }
    generateNames();
    
}

void NameBase::generateNames(){
    
    for (int i=0; i<listName.size(); ++i)
        std::cout << listName[i] << std::endl;
    
    listName.clear();
}
void NameBase::createADNames(){
    int NumRand=rand()%2;
    for (int i=0;i<20; i++) {
        switch (NumRand) {
            case 1:
                Name=AdFirstNameB[genFirstName]+" "+AdFamilyName[genSecondName];
                listName.push_back(Name);
                genFirstName=rand()%20;
                genSecondName=rand()%20;
                break;
            case 2:
                Name=AdFirstNameG[genFirstName]+" "+AdFamilyName[genSecondName];
                listName.push_back(Name);
                genFirstName=rand()%20;
                genSecondName=rand()%20;
                break;
            default:
                break;
        }
    }
    generateNames();
}
