#include <iostream>
#include <ctime>

// char instead of string because char is a data type used to store a single character only. 
char userChoice();
char computerChoice();
void showChoice(char choice); 
void chooseWinner(char player, char computer); 

int main(){

    char player; 
    char computer; 

    player = userChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = computerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player,computer);

    return 0; 
}

char userChoice()
{
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    // the while loop won't close unless user chooses either r,p, or s
    do{
        std::cout << "Choose your option('r' for rock, 'p' for paper, 's' for scissors): \n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

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
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }

};

void chooseWinner(char player, char computer)
{
    if (player == computer){
        std::cout << "It's a tie! \n";
    }

    else if ((player == 'r' && computer == 's') || 
             (player == 'p' && computer == 'r') ||
             (player == 's' && computer == 'p'))
    {
        std::cout << "You win! \n";
    }
    else    
    {
        std::cout << "Computer win! \n";
    }
};