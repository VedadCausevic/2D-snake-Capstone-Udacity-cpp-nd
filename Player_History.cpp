#include <ctime>
#include "Player_History.h"

//Constructor Definition
PlayerHistory::PlayerHistory(string name, int score, string time){
    this->player_name = name;
    this->player._score = score;
    this->player._game_time = time;
}

// Definitions of setters and Getters
void PlayerHistory::SetPlayerName(string name){
    cout << "Player Name: ";
    cin >> name;
    this->player_name = name;
}

void PlayerHistory::SetPlayerScore(int score){
    cout << "Player Score: ";
    this->player._score = score;
}

void PlayerHistory::SetPlayerGameTime(){
    //current date/time on local machine
    time_t now = time(0);
    //convert to char
    char* dt = ctime(&now);
    player._game_time = dt;
    cout << "Game Time: " << player._game_time;
}

string PlayerHistory::GetPlayerName(){ return player_name; }
int PlayerHistory::GetPlayerScore(){ return player._score; }
string PlayerHistory::GetPlayerGameTime(){ return player._game_time; }