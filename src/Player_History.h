#ifndef PLAYER_HISTORY_H
#define PLAYER_HISTORY_H

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

class PlayerHistory{
public:
    //Constructors and Destructors
    PlayerHistory(){};
    PlayerHistory(string name, int score, string time);
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
    //Struct holding the score and gametime of the player
    struct stats{
        int _score = 0;
        string _game_time{};
    }player;
};
#endif