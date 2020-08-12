#include <ctime>
#include "Player.h"

//Constructor Definition
Player::Player(string name, int score, string time){
    this->player_name = name;
    this->player._score = score;
    this->player._game_time = time;
}

// Copy Constructor 
Player::Player (const Player &source) {
    this->player_name = source.player_name;
    this->player._score = source.player._score;
    this->player._game_time = source.player._game_time;
}
// copy assignment overloading operator 
Player& Player::operator= (const Player &source) {
    if (this == &source)
        return *this;
    this->player_name = source.player_name;
    this->player._score = source.player._score;
    this->player._game_time = source.player._game_time;
    return *this;
}
// move constructor 
Player::Player (Player &&source) {
    // move data
    this->player_name = source.player_name;
    this->player._score = source.player._score;
    this->player._game_time = source.player._game_time;
    // delete original data
    source.player_name = "Dummy";
    source.player._score = 0;
    source.player._game_time = "Dummy";
}
// Move assignment operator overloading
Player& Player::operator= (Player &&source) {
    if (this == &source)
        return *this;
    // move data
    this->player_name = source.player_name;
    this->player._score = source.player._score;
    this->player._game_time = source.player._game_time;
    // delete original data
    source.player_name = "Dummy";
    source.player._score = 0;
    source.player._game_time = "Dummy";
    return *this;
}

// Definitions of setters and Getters
void Player::SetPlayerName(string name){
    this->player_name = name;
}

void Player::SetPlayerScore(int score){
    this->player._score = score;
}

void Player::SetPlayerGameTime(){
    //current date/time on local machine
    time_t now = time(0);
    //convert to char
    char* dt = ctime(&now);
    this->player._game_time = dt;
}

string Player::GetPlayerName()const{ return player_name; }
int Player::GetPlayerScore()const{ return player._score; }
string Player::GetPlayerGameTime()const{ return player._game_time; }

//Overloading the (<) operator
bool Player::operator<(const Player &data){
    return this->GetPlayerScore() > data.GetPlayerScore();
}