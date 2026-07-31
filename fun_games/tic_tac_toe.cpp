#include <iostream>
#include <string>
#include <limits>
#include <random>

void makeMove(char inp, int place, char board[9]);
bool validMove(int place, char board[9], bool printError=true);
bool isWin(char board[9]);
int compMove(char board[9]);
void chooseSymbol(char &user_val, char &comp_val);
void rules(); 

void printBoard(char board[9]){
    for (int i =0; i < 9; i++){
        std::cout << board[i] << " ";
        // std::cout << " _ ";
        
        if (i % 3 != 2){std::cout << " | ";} 
        if (i % 3 == 2){std::cout << "\n";} 

        if ((i+1)%3 ==0){
            std::cout << '\n';
            // std::cout << "_______________\n";
            }

    }
}


int main()
{

    char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char user_val;
    char comp_val;
    int place;
    bool ok;

    // std::cout << "Welcome to Tic-Tac-Toe!\n";
    // chooseSymbol(user_val, comp_val);
    // rules(); 

    // do
    // {
    //     std::cout << "Please choose a number between 1 to 9 in the board\n";
        
    //     std::cin >> place;

    //     if (std::cin.fail())
    //     {
    //         ok = false;
    //         std::cout << "Please enter a number. \n";
    //         std::cin.clear();
    //         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //     }
    //     else
    //     {
    //         ok = validMove(place, board);
    //     }
    // } while (!ok);



    // makeMove(user_val, place, board);
    printBoard(board);
    
    return 0;
}

void rules()
{
std::cout << R"(
Quick Rules:
- Enter the number corresponding to the position where you want to play.
- Get three of your marks in a row, column, or diagonal to win.

Board positions:
1 2 3
4 5 6
7 8 9
)";
}

void makeMove(char inp, int place, char board[9])
{
    place -= 1;
    board[place] = inp;
}

bool validMove(int place, char board[9], bool printError)
{
    if (place > 9 || place < 1)
    {
        if (printError){std::cout << place << " is not a valid entry. Please choose a number between 1 to 9\n";}
        return false;
    }
    else if (board[place - 1] == 'X' || board[place - 1] == 'O')
    {
        if (printError){std::cout << place << " has already been taken. Pleasae choose another spot\n";}
        return false;
    }
    else
    {
        return true;
    }
}

int compMove(char board[9]){
    // Define range
    int min = 1;
    int max = 9;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);

    int value;

    do {
        value = distrib(gen);
    } while (! validMove(value, board, false));

    return value;
}

bool isWin(char board[9])
{

    int winCombos[8][3] = {
        {0, 1, 2}, // top row
        {3, 4, 5}, // middle row
        {6, 7, 8}, // bottom row
        {0, 3, 6}, // left column
        {1, 4, 7}, // middle column
        {2, 5, 8}, // right column
        {0, 4, 8}, // diagonal
        {2, 4, 6}  // other diagonal
    };

    for (int i = 0; i < 8; i++)
    {
        int a = winCombos[i][0];
        int b = winCombos[i][1];
        int c = winCombos[i][2];

        if (board[a] == board[b] &&
            board[a] == board[c])
        {
            return true;
        }
    }
    return false;
}

void chooseSymbol(char &user_val, char &comp_val)
{ // char& is better since it is does not make copies but is
    std::cout << "Would you like to be X or O ?\n";
    std::cin >> user_val;

    while (user_val != 'X' && user_val != 'O')
    {
        std::cout << "That is not a valid entry. Choose between X and O.\n";
        std::cin >> user_val;
    }

    if (user_val == 'X')
    {
        comp_val = 'O';
    }
    else
    {
        comp_val = 'X';
    }

    std::cout << "Player: " << user_val << "\n";
    std::cout << "Computer: " << comp_val << "\n";
}