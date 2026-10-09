#include <iostream>
#include <ctime>

using namespace std;

// char instead of string because char is a data type used to store a single character only. 
char userChoice();
char computerChoice();
void showChoice(char choice); 
void chooseWinner(char player, char computer); 

int main(){

    char player; 
    char computer; 

    bool loop = true;
    while (loop == true)
    {
        player = userChoice();

        if (player == 'q')
        {
            break;
        }
        
        cout << "Your choice: ";
        showChoice(player);

        computer = computerChoice();
        cout << "Computer's choice: ";
        showChoice(computer);

        chooseWinner(player,computer);

        cout << "\n" << endl;
    }
    return 0; 
}

char userChoice()
{
    char player;
    cout << "Rock-Paper-Scissors Game!\n";

    // the while loop won't close unless user chooses either r,p, or s
    do{
        cout << "Choose your option('r' for rock, 'p' for paper, 's' for scissors, 'q' for quit): \n";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's' && player != 'q');

    return player; 
};

char computerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1; 

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';

        default: return 'r'; // unreachable in practice, but satisfies the compiler
        }
};

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;
    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        break;
    }

};

void chooseWinner(char player, char computer)
{
    if (player == computer){
        cout << "It's a tie! \n";
    }

    else if ((player == 'r' && computer == 's') || 
             (player == 'p' && computer == 'r') ||
             (player == 's' && computer == 'p'))
    {
        cout << "You win! \n";
    }
    else    
    {
        cout << "Computer win! \n";
    }
};