#include "interface.h"

void Interface::IntroMessage(){
    cout << "/------------- Welcome to the Snake Game -------------/" << endl;
    cout << "/--------------------- Fingers crossed! --------------------/" << endl;
   
}

void Interface::AskForName(){
    cout << "Please enter your name: ";
}
void Interface::AskForAge(){
    cout << "Please enter your age: ";
}

int Interface::Enter_Age(){
    int _age;
    while(!(cin >> _age)){
        cin.clear();
        while(cin.get() != '\n')
            continue;
        //Ask user to try again
        cout << "Please try again with number!";
    }
    return _age;
}

string Interface::Enter_Name(){
    string _name;
    while(!(cin >> _name)){
        cin.clear();
        while(cin.get() != '\n')
            continue;
        //Ask user to try again
        cout << " Please Try Again with string!";
    }
    return _name;
}