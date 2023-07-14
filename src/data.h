#ifndef DATA_H
#define DATA_H

#include <bits/stdc++.h>
#include <fstream>

#include "Player.h"

using namespace std;

class Data{
public:
    //Default Constructor
    Data();
    //Methods
    void SaveData(Player &player, int duration);
        
private:
};
#endif