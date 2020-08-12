#ifndef GAME_HISTORY_H
#define GAME_HISTORY_H

#include <bits/stdc++.h>
#include <fstream>

#include "Player.h"

using namespace std;

class History{
public:
    //Default Constructor
    History();
    //Methods
    void SaveHistory(Player &player);
    vector<shared_ptr<Player>> ReadHistory();
    vector<shared_ptr<Player>> SortHistory(vector<shared_ptr<Player>> &v);
    void DisplayHistory();
    Player GetHighScore();
    void DisplayHighScore();
private:
    vector<shared_ptr<Player>> _history;
};
#endif