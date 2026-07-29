// Rules : 
// A player can put only a single letter X or O in the 3 x 3 grid in each chance.
// Both players will get chances alternatively one after another till someone wins or draws.
// To win this game, the player must create a horizontal, vertical, or diagonal line consisting of three same letters.
// The game is drawn, if all grids are filled with X or O letters but no line is made.

#include <iostream>
#include <string>

void printBoard(char board[9]){
    std::cout << board[0] << " " << board[1] << " " << board[2] << "\n";
    std::cout << board[3] << " " << board[4] << " " << board[5] << "\n";
    std::cout << board[6] << " " << board[7] << " " << board[8] << "\n";
}

void makeMove(char inp, int place, char board[9]){
    place -= 1; 
    board[place] = inp; 

}

int main()
{

    char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    makeMove('X', 4, board); 
    printBoard(board); 
    return 0;
}