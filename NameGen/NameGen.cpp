// NameGen.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <random>

using namespace std;
const int k_NumberOfNames = 100;

void readFile(vector<string>vector,const string &fileName);
string generateNames(vector<string>fForename, vector<string>mForename, vector<string> Surname);

std::vector<string>mFirstName;
std::vector<string>fFirstName;
std::vector<string>fLastName;
std::vector<string>newName;

int main()
{
    std::random_device rand;
    std::uniform_int_distribution<int>dist(1, 50);

    int numberRand;
    int numberOfElements=100;
    

    readFile(fFirstName, "femaleNames");
    readFile(mFirstName,"maleNames");
    readFile(fLastName, "lastNames");
    

    for (auto &p: newName) {
        std::cout << p << "\n";
    }

    for (auto &p: mFirstName) {
        p.erase();
    }
    for (auto &p : fFirstName) {
         p.erase();
    }
    for (auto &p : fLastName) {
        p.erase();
    }
    for (auto p : newName) {
        p.erase();
    }

    return 0;
}

void readFile(vector<string> vector, const string &fileName) 
{
    string line;
    ifstream file; //object of fstream class 

    file.open("List\\French\\" + fileName + ".txt");

    if (file.fail())
    {
        cout << "Error in opening file!!!" << endl;
        return;
    }
    // Pushes the Contents into the Vector
    while (!file.eof()) 
    {
        getline(file,line);
        vector.push_back(line);
    }

    for (auto l : vector) 
    {
        std::cout << l<<"\n";
    }

    file.close(); //close file
}

string generateNames(vector<string>fForename, vector<string>mForename, vector<string> Surname){
    string name="";
    int rnumber = rand() % k_NumberOfNames;
    

    
    return name;
}
