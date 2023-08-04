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

int main()
{
    std::random_device rand;
    std::uniform_int_distribution<int>dist(1, 50);

    int numberRand;
    int numberOfElements=100;
    

    readFile(fFirstName, "femaleNames");
    readFile(mFirstName,"maleNames");
    readFile(fLastName, "lastNames");
    

    /*for (string p : mFirstName) {
        std::cout << p << "\n";
    }*/
    /*for (int i = 0; i < 15; ++i) {
        
        if (rand()%2+1==2) {
            std::cout << i << ". " << mFirstName.at(dist(rand)) << " " << fLastName.at(dist(rand))<<"\n";
        }
        else {
            std::cout << i << ". " << fFirstName.at(dist(rand)) << " " << fLastName.at(dist(rand)) << "\n";
        }
        
        
    }
    for (auto p: mFirstName) {
        p.erase();
    }
    for (auto p : fFirstName) {
         p.erase();
    }
    for (auto p : fLastName) {
        p.erase();
    }*/
    return 0;
}

void readFile(vector<string> vector, const string &fileName) {
    string line;
    ifstream file; //object of fstream class 

    file.open("List\\French\\" + fileName + ".txt");

    if (file.fail())
    {
        cout << "Error in opening file!!!" << endl;
        return;
    }
    // Pushes the Contents into the Vector
    while (!file.eof()) {
        getline(file,line);
        vector.push_back(line);
    }
    for (auto l : vector) {
        std::cout << l<<"\n";
    }
    file.close(); //close file
}

string generateNames(vector<string>fForename, vector<string>mForename, vector<string> Surname){
    string name="";
    int rnumber = rand() % k_NumberOfNames;
    

    if (rand() % 2 + 1 == 1)
    {
        fForename[rand() % 99 + 1] + " " + Surname[rand() % 99 + 1];
        //name.append( );
        //std::cout << name;
        return name;
    }
    else 
    {
        name.append(mForename[rand()%49+1] + " " + Surname[rand() % 99+1]);
        //std::cout << name;
        return name;
    }

}
