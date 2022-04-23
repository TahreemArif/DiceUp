# DiceUp
Dice-up is a board game based on one of the oldest board game – **`the Ludo`**. It is a two player game and not the regular four players. 
![image](https://user-images.githubusercontent.com/26774605/164948373-c16bda73-85fc-4569-8be4-f886212444d2.png)

## Game Rules:
DiceUp has the following rules:
* In the start, each player's pieces will be placed at their home position.
* Every player needs a six in order to initialize i.e. move a piece from the starting area to the starting square. 
* If a player gets a six, he will get a `Bonus` turn.
* If a player’s piece lands on a square containing an opponent’s piece, the opponent’s piece will be captured and returned to its starting position. 
* Once a piece complete a round of the board, it will move up the home column. The player must throw the exact number to advance to the home column. 
* The winner is the player who get all two of his pieces onto the home square first. 


## Development Environment:
It is developed in C++ using Visual Studio. The various libraries used in the game are:

|HEADER     | Use |
|-----------|--------|
|iostream 	| For input and output |
|winsows,h 	|For colors in console and beep function which produce sound |
|cstdlib.h 	|For random function |
|ctime 	    |For srand function |
|string     |	To make the board and to use its other built in functions i.e. replace | 

