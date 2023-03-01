// NameGen.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <string>
#include <vector>
#include <iostream>
#include <fstream>


using namespace std;
const int k_NumberOfNames = 100;

void readFile(vector<string>vector,const string &fileName);
string generateNames(vector<string>fForename, vector<string>mForename, vector<string> Surname);


int main()
{
    int numberRand;
    int numberOfElements=100;
    vector<string>mFirstName = {};
    vector<string>fFirstName = {};
    vector<string>fLastName = {};
    
    vector<string>namesGenerated = {};


    readFile(fFirstName, "femaleNames");
    readFile(mFirstName,"maleNames");
    readFile(fLastName, "lastNames");

    for (size_t i = 0; i < numberOfElements; ++i)
    {
        string tempVar=generateNames(fFirstName,mFirstName,fLastName);
        namesGenerated.push_back(tempVar);
    }
    
    

    
    return 0;
}

void readFile(vector<string> vector, const string &fileName) {
    string line;
    fstream file; //object of fstream class 

    file.open("List\\French\\" + fileName + ".txt", ios::in);

    if (!file)
    {
        cout << "Error in opening file!!!" << endl;
        return;
    }
    // Pushes the Contents into the Vector
    while (getline(file, line)) {
        vector.push_back(line);
    }

    file.close(); //close file
}

string generateNames(vector<string>fForename, vector<string>mForename, vector<string> Surname){
    string name;
    int rnumber = rand() % k_NumberOfNames;
    int chooseGender = rand() % 2 + 1;

    if (chooseGender == 1)
    {
       
        name = fForename[rand()%99] + " " + Surname[rand()%99];
        std::cout << name;
        return name;
    }
    else 
    {
        name = fForename[rand() % 99] + " " + Surname[rand() % 99];
        std::cout << name;
        return name;
    }

}
