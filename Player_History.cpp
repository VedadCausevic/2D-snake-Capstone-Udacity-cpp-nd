#include <ctime>
#include "Player_History.h"

// Definitions of setters and Getters
void PlayerHistory::SetPlayerName(string name){
    cout << "Player Name: ";
    cin >> name;
    this->player_name = name;
}

void PlayerHistory::SetPlayerScore(int score){
    cout << "Player Score: ";
    this->player_score = score;
}

void PlayerHistory::SetPlayerGameTime(){
    //current date/time on local machine
    time_t now = time(0);
    //convert to char
    char* dt = ctime(&now);
    player_game_time = dt;
    cout << "Game Time: " << player_game_time;
}

string PlayerHistory::GetPlayerName(){ return player_name; }
int PlayerHistory::GetPlayerScore(){ return player_score; }
string PlayerHistory::GetPlayerGameTime(){ return player_game_time; }