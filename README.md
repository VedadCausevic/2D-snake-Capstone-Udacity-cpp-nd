# CPPND: Capstone 2D Snake Game 

This is a repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213).

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Running and Build Instructions

1. Clone this repo.
2. To Create a build directory and compile the project in it: `make build`.
3. Run it: `./build/SnakeGame`.

## Functionalities added to the project
The modifications added to the starter code are summarized into three parts as follows:

1. Creating a history for the snake game with the following options:
    a) `Game History` that displays the entire game history
    b) `Hall of Fame` that displays the top 5 scores
    c) `Highest Score Player` that displays the highest scorer of all time.

2. Creating a main menu to the snake game using `game_menu.cpp` & `game_menu.h` to navigate between playing the game and the game history 

3. Adding a `slow` power up in the game which is a green block that slows down the snake by the same amount it gains from the food.

## Code Structure:
THe Added code to the project covers most of the content discussed in the C++ NanoDegree and are summarized in three main classes:

### Player Class in Player.h:
    - Creates a profile for the new player which contains the following data:
        1. Name
        2. Score
        3. Game Duration
    - The class has or utilizes the following:
        * Setters/Getters
        * list intializers.
        * rule of five.
        * operator overloading.
        * Encapsulation & Abstraction.    
### History Class in game_history.h:
    - Creates a History for the game and stores it in `Game_History.txt`.
    - The data stored are the player's name, score, and the duration of the game that was played.
    - The History class can display the history in three different modes:
       * Displays the entire game history by the last player played that played the game.
       * Displays a Hall of Fame that displays the top 5 players.
       * Displays the highest scoring player of all time.
    - The History class has or utilizes the following:
        * Composition
        * shared_pointers
        * memory allocation on the heap. 
        * move semantics. 
        * lambda function
### Menu Class in game_menu.h:
    - Visualizes the main menu to the user. 
    - Displays the History menu
    - Displays the menu for the player to enter their name before playing.
    
## Rubric Points Addressed

### Loops, Functions, I/O
|Criteria| Addressed(Yes/No)|
|--------|------------|
The project demonstrates an understanding of C++ functions and control structures. == Yes, All the src files contains or consists of this rubric. |YES
The project reads data from a file and process the data, or the program writes data to a file. == Yes, The class History in game_history.h read/write txt files. |YES
The project accepts user input and processes the input. == Yes, this is demonstrated in the main.cpp using the Menu class in the game_menu.h to input the player's name before playing and using it in the History class to store it. |YES

### Object Oriented Programming
|Criteria| Addressed(Yes/No)|
|--------|------------|
The project uses Object Oriented Programming techniques. == Yes, all the functionalities/files are written using OOP techniques.|YES
Classes use appropriate access specifiers for class members. == Yes, all classes have their getters/setters when needed.|YES
Class constructors utilize member initialization lists. == Yes, it is shown in Player class and several other classes.|YES
Classes abstract implementation details from their interfaces.== Yes.|YES
Classes encapsulate behavior. == Yes, and this is represented by having all the functions belongong for a certain class to be defined in that class's `.h` file.|YES

### Memory Management
|Criteria| Addressed(Yes/No)|
|--------|------------|
Classes abstract implementation details from their interfaces. == Yes. |YES
The project uses destructors appropriately. == Yes, and it is shown in the Player class.|YES
The project follows the Rule of 5. == Yes, and this is represented in the Player Class. |YES
The project uses smart pointers instead of raw pointers. == Yes, this is described in the game_history.h file where shared pointers are used.|YES
The project uses move semantics to move data, instead of copying it, where possible. == Yes, the Player data moves from the source and pushed in the players vector.|YES
The project makes use of references in function declarations. == Yes. |YES
