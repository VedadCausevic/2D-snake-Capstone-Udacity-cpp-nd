#include "game_menu.h"

void Menu::MainMenu(){
    cout << "\033[2J\033[1;1H";
    cout << "/------------- Welcome to 2D Snake Game -------------/" << endl;
    cout << "/--------------------- Main Menu --------------------/" << endl;
    cout << "1. Play Game" << endl;
    cout << "2. Show Game History" << endl;
}

void Menu::GetPlayerName(){
    cout << "\033[2J\033[1;1H";
    cout << "/------------------ Game Settings -------------------/" << endl;
    cout << "Please enter your name: ";
}

void Menu::HistoryMenu(){
    cout << "\033[2J\033[1;1H";
    cout << "/------------------ History Menu -------------------/" << endl;
    cout << "1. Game History" << endl;
    cout << "2. Hall of Fame" << endl;
    cout << "3. Highest Score Player" << endl;
}

int Menu::Input_number(){
    int _key;
    while(!(cin >> _key)){
        cin.clear();
        while(cin.get() != '\n')
            continue;
        //Ask user to try again
        cout << "Warning Invalid Input, Please Try Again.";
    }
    return _key;
}

string Menu::Input_string(){
    string _key;
    while(!(cin >> _key)){
        cin.clear();
        while(cin.get() != '\n')
            continue;
        //Ask user to try again
        cout << "Warning Invalid Input, Please Try Again.";
    }
    return _key;
}