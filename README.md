# CPPND: Capstone 2D Snake Game 

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

1. Creating an interface for the snake game.
2. Storing the data about player and results of game in the output text file
3. Change in the rules of the game as following:
- Added another type of food - so called poison 
- When snake eats poison it makes her weaker so it is neither able to grow nor speed up
- When snake eats normal food her body gets bigger and her speed increases

## Code Structure:
THe Added code to the project covers most of the content discussed in the C++ NanoDegree and are summarized in three main classes:

### Player Class in Player.h:
    - Creates a profile for the new player which contains the following data:
        1. Name
        2. Age
        3. Score
        3. Game Duration
    - The class has or utilizes the following:
        * Setters/Getters
        * list intializers.
        * rule of five.
        * Encapsulation & Abstraction.    
### Data Class in data.h:
    - Creates a data about the player and game and stores it in `outputstream.txt` within build folder
    - The data stored are the player's name, players age, score, and the duration of the game that was played.
        
### Interface Class in interface.h:
    - Visualizes the main menu to the user. 
    - Guides the user to provide its throughout the game

### Modifications in classes Game and Renderer:
    - function PlacePoison() places poison on a location different from snake location and food location
    - Poison rendering added
   


