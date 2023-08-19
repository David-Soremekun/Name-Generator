//
//  NameBase.hpp
//  GeneratorName
//
//  Created by David S on 29/06/2022.
//

#ifndef NameBase_hpp
#define NameBase_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

class NameBase{
private:
    int count{1};
    std::string Name;
    int genFirstName=rand()%20;
    int genSecondName=rand()%20;
    std::vector<std::string> listName;
    
    std::string SbFirstNameB[20] ={"Mikkel","Arneghad","Cathan","Imair","Flann","Goban","Lorcan","Ulf","Rollo","Svennd","Ornulf","Magne","Njall","Bjarne","Erik","Davin","Floki","Gunnar","Vidar","Skeggi"};
    // Array Containing Male Stormborn Given Name
    
    std::string SbFirstNameG[20]={"Aslaug","Astrud","Gudrid","Dalla","Berra","Hilda","Ranni","Tovvie","Vigdis","Olgga","Freya","Maeve","Rionna","Myrna","Niamh","Ciarra","Iseult","Glaisne","Elbenna","Sharra"};
    // Array Containing Female Stormborn Given Name
    
    std::string SbClanName[20]={"Seadrake","Snakefang","Sylverfish","Bearwood","Blacktyde","Greydeer","Whitepike","Farcodd",
        "Frostwynd","Mistwyck","Stonevale","Longwater","Ironvein","Clifmoor","Saltsmoke","Krakenclaw","Bloodspear","Wavemark","Tiderock","Highfisher"};
    // Clan Names of the Stormborn
    
    std::string AdFirstNameB[20]={"Jurgen","Horst","Klaus","Lukas","Leonhard","Henrich","Oskar","Waltan","Rolf","Otto","Alaric","Bastian","Frank","Stefan", "Kaspar","Merlon","Petyr","Garst","Yannic","Edric"};
    // Array Containing Male Andrian Given Name
    
    std::string AdFirstNameG[20]={"Ada","Anneliese","Brita","Gisele","Ingrid","Katarina","Klara","Odetta","Lorelai","Greta","Cerelle","Mathilde","Rena",
        "Rosamund","Frida","Hildegarde","Ethel","Sylvena","Jeyne","Milana"};
    // Array Containing Female Andrian Given Name
    
    std::string AdFamilyName[20]={"Vossen","Rayne","Gefran","Sander","Ewing","Lanton","Castell","Helmuth","Bowen",
        "Adelgis","Dankmar","Klober","Ingbert","Veerle","Siegmald","Ortraud","Bermund","Altham","Dassel","Weimar"};
    
    std::string nameMonikers[6]={"the Impaler", "the Bold", "the Cursed", "the Kraken", "the Cruel","the Red"};
    
    void generateNames();
public:
    void createSBNames();
    void createADNames();
};
#endif /* NameBase_hpp */
