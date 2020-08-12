#ifndef PLAYER_HISTORY_H
#define PLAYER_HISTORY_H

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

class PlayerHistory{
public:
    //Constructors and Destructors
    PlayerHistory(){};
    PlayerHistory(string name, int score, string time) : player_name(name), player_score(score), player_game_time(time) {};
    ~PlayerHistory(){};

    //Setters and Getters
    void SetPlayerName(string name);
    void SetPlayerScore(int score);
    void SetPlayerGameTime();

    string GetPlayerName();
    int GetPlayerScore();
    string GetPlayerGameTime();
    
private:
    string player_name{}; 
    int player_score = 0;
    string player_game_time{};
};
#endif