#ifndef PLAYER_H
#define PLAYER_H

#include <bits/stdc++.h>

using namespace std;

class Player{
public:
    //Default Constructor
    Player(){};
  // Constructor
    Player(string name,int age, int score, int time);
  // Destructor
    ~Player(){};
    //Copy Constructor
     Player(const Player &source);
  //Copy assignment operator
     Player &operator=(const Player &source);
    //Move Constructor
     Player(Player &&source);
  //Move assignment operator
     Player &operator=(Player &&source);
    //Setters
        void SetPlayerName(string name);
        void SetPlayerScore(int score);
        void SetPlayerGameTime(int game_time);
        void SetPlayerAge(int age);
    //Getters
        string GetPlayerName() const;
        int GetPlayerAge() const;
        int GetPlayerScore() const;
        int GetPlayerGameTime() const;
    

private:
  string player_name;
  int player_age;
  int _score, _game_time;
  };
#endif