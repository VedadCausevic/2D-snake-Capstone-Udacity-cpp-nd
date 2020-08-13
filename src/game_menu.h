#ifndef GAME_MENU_H
#define GAME_MENU_H

#include <bits/stdc++.h>

using namespace std;

class Menu{
public:
    void MainMenu();
    void GetPlayerName();
    int Input_number();
    string Input_string();
    void HistoryMenu();
    enum States{
        kMain = 0, kPlay = 1, kHistory = 2, kUnordered_History = 1, kOrdered_History = 2, kHighest_Score = 3
    };
};

#endif