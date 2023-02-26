// NameGen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
const int k_NumberOfNames = 100;


void generateNames(){
    int randNum = rand() % 2 + 1;

    if (randNum==1)
    {
   
    }
    else 
    {
        
    }

}

int main()
{
    vector<string>fFirstName = {};
    string mFistName[k_NumberOfNames];
    vector<string>fLastName= {};
    string line;

    

    fstream file; //object of fstream class 
    file.open("List\\French\\LastNames.txt", ios::in);

    if (!file)
    {
        cout << "Error in opening file!!!" << endl;
        return 0;
    }

    while (getline(file, line)) {
        fLastName.push_back(line);
    }

    file.close(); //close file

    // Loads Female Names into vector
    file.open("List\\French\\femaleNames.txt", ios::in);

    if (!file)
    {
        cout << "Error in opening file!!!" << endl;
        return 0;
    }

    while (getline(file, line)) {
        fLastName.push_back(line);
    }

    /*for (auto arr : fLastName) 
    {
        cout << arr << " " << endl;

    }*/
    return 0;
}

//struct FrenchName {
//    
//    
//
//   
//    
//    //std::string mFirstName[50] = { "Martin", "Bernard", "Thomas", "Robert", "Richard", "Simon", "Laurent", "Michel", 
//    //    "David", "Bertrand", "Vincent", "Andre","Francois", "Henry", "Nicolas", "Mathieu", "Clement", "Gauthier","Robin"};
//    string mLastName[50] = {};
//
//    void GenerateNames(int genNum) {
//        
//        if (genNum==1) 
//        {
//
//        }
//        else 
//        {
//
//        }
//
//
//    }
//
//};
//
//int main()
//{
//    int randNum;
//    
//    std::cout << "Hello World!\n";
//    
//    
//    string line;
//    ofstream myfile; 
//    myfile.open("NameList\\FrenchLastNames.txt");
//    
//    
//    while (getline(myfile, line)) {
//        //do something with the line
//    }
//
//
//
//
//
//    std::vector<FrenchName> frenchNames;
//    for (size_t i = 0; i < 100; i++)
//    {
//        randNum = rand() % 2 + 1;
//
//        frenchNames[i].GenerateNames(randNum);
//        
//    }
//
//
//
//
//
//}
