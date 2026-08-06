#include <iostream>
#include <string>
#include <limits>
#include <random>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

void makeMove(char inp, int place, char board[9]);
bool validMove(int place, char board[9], bool printError=true);
bool isWin(char board[9]);
int compMove(char comp_val, char user_val, char board[9]);
void chooseSymbol(char &user_val, char &comp_val);
void rules();
void printBoard(char board[9]);
bool isBoardFull(char board[9]);
bool isTie(char board[9]);
void playerTurn(char player, char board[9]);
bool endGame(char board[9], std::string winner);
int findWinningMove(char board[9], char symbol);

int main()
{

    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char user_val;
    char comp_val;
    int place;
    bool ok;

    std::cout << "Welcome to Tic-Tac-Toe!\n";
    chooseSymbol(user_val, comp_val);
    rules(); 

    while(true){
        printBoard(board);
        
        //user's turn
        playerTurn(user_val, board);

        if (endGame(board, "You"))
            break;

        std::cout << "\n"; 

        //comp's turn 
        int comp_place = compMove(comp_val, user_val, board);
        makeMove(comp_val, comp_place, board);
        std::cout << "Computer played: " << comp_place << "\n";
        std::cout << "\n"; 

        if (endGame(board, "Computer"))
            break;
    }
    
    return 0;
}

void rules()
{
    std::cout << R"(

Quick Rules
-----------
Choose a number (1-9) to place your mark.

 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Get three of your marks in a row, column, or diagonal to win.

)";
}

bool endGame(char board[9], std::string winner)
{
    if (isWin(board))
    {
        printBoard(board);
        std::cout << winner << " won!\n";
        return true;
    }

    if (isTie(board))
    {
        printBoard(board);
        std::cout << "It's a tie!\n";
        return true;
    }

    return false;
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

void playerTurn(char player, char board[9])
{
    int place;
    bool ok;

    do
    {
        std::cout << "\n";
        std::cout << "Choose a square (1-9): ";
        std::cin >> place;

        if (std::cin.fail())
        {
            ok = false;
            std::cout << "Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            ok = validMove(place, board);
        }

    } while (!ok);

    makeMove(player, place, board);
}

int compMove(char comp_val, char user_val, char board[9]){

    std::cout << "Computer is thinking...\n";
    std::this_thread::sleep_for(1s);

    int winMove = findWinningMove(board, comp_val);
    if (winMove != -1)
    {
        return winMove;
    }

    int blockMove = findWinningMove(board, user_val); 
    if(blockMove != -1){
        return blockMove; 
    }

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

int findWinningMove(char board[9], char symbol)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i] != ' ')
        {
            continue;
        }

        board[i] = symbol;
        bool wins = isWin(board);

        if (wins)
        {
            return i + 1;
        }
        board[i] = ' ';
    }
    return -1;
}


bool isWin(char board[9]){

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

        if(board[a] == ' '){
            continue; 
        } 
        else if (board[a] == board[b] &&
            board[a] == board[c] )
        {
            return true;
        }
    }
    return false;
}

bool isTie(char board[9]){
    return isBoardFull(board) && !isWin(board); 
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

void printBoard(char board[9])
{
    for (int i = 0; i < 9; i++)
    {
        std::cout << " " << board[i] << " ";

        if (i % 3 != 2)
        {
            std::cout << " | ";
        }
        else
        {
            std::cout << "\n";
            if (i != 8)
            {
                std::cout << "----------------\n";
            }
        }
    }
}

bool isBoardFull(char board[9])
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i] == ' ')
            return false;
    }
    return true;
}