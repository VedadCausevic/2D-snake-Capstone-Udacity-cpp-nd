#include <ctime>
#include "Player.h"

//Constructor 
Player::Player(string name,int age, int score, int time){
    this->player_name = name;
    this->player_age = age;
    this->_score = score;
    this->_game_time = time;
}

// Copy Constructor 
Player::Player (const Player &source) {
    this->player_name = source.player_name;
    this->player_age = source.player_age;
    this->_score = source._score;
    this->_game_time = source._game_time;
}
// copy assignment operator 
Player& Player::operator= (const Player &source) {
    if (this == &source)
        return *this;
    this->player_name = source.player_name;
    this->player_age = source.player_age;
     this->_score = source._score;
    this->_game_time = source._game_time;
    return *this;
}
// move constructor 
Player::Player (Player &&source) {
    // move data
    this->player_name = source.player_name;
    this->player_age = source.player_age;
    this->_score = source._score;
    this->_game_time = source._game_time;
    // invalidate original data
    source.player_name = "NoName";
    source._score = 0;
    source._game_time = 0;
    source.player_age =0;
}
// Move assignment operator overloading
Player& Player::operator= (Player &&source) {
    if (this == &source)
        return *this;
    // move data
    this->player_name = source.player_name;
    this->player_age = source.player_age;
    this->_score = source._score;
    this->_game_time = source._game_time;
    // invalidate original data
    source.player_name = "NoNAme";
    source._score = 0;
    source._game_time = 0;
    source.player_age =0;

    return *this;
}

// Definitions of setters and Getters
void Player::SetPlayerName(string name){
    this->player_name = name;
}
void Player::SetPlayerAge(int age){
    this->player_age = age;
}
void Player::SetPlayerScore(int score){
    this->_score = score;
}

void Player::SetPlayerGameTime(int game_time){
    //current date/time on local machine
    game_time = time(0);
    this->_game_time = game_time;
}

string Player::GetPlayerName()const{ return player_name; }
int Player::GetPlayerAge() const { return player_age; }
int Player::GetPlayerScore()const{ return _score; }
int Player::GetPlayerGameTime()const{ return _game_time; }

