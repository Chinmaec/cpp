#include <iostream>
#include <string>
#include <random>

using namespace std;

void drawHangman(int attemptsLeft);
string chooseWord();

int main()
{
    cout << "***********************************************\n";
    cout << "Welcome to the Hangman Game! (Animal Edition)\n";
    cout << "You get a maximum of 6 incorrect attempts\n"; 

    string answer = chooseWord();
    int ans_len = answer.length();
    string display(ans_len,'_');
    cout << "\n";
    cout << display << "\n\n";
    cout << "Enter your first guess: " << "\n";

    int i = 6;
    string guessed = ""; 
    bool won = false; 
    while(i > 0){

        char u_guess; 
        cin >> u_guess;
        bool found = false; 

        if (guessed.find(u_guess) != string::npos)
        {
            cout << "You have already guessed this letter.";
            cout << "Guessed letters: " << guessed << "\n";
            continue; 
        }
        
        guessed += u_guess; 
        for (int j = 0; j < ans_len; j++)
        {
            if (answer[j] == u_guess)
            {
                display[j] = u_guess;
                found = true; 
                }
        }
        if (! found){
            i--; 
            drawHangman(i);
        }
        if (display == answer)
        {
            cout << answer << "\n"; 
            cout << "You won!\n";
            won = true;
            break;
        }

        cout << display << "\n";
    }

    if (!won)
    {
        cout << "You lost :(\n";
        cout << "The answer was: " << answer << "\n";
    }
}

string chooseWord()
{
    string animalWords[50] = {
        "tiger", "zebra", "horse", "camel", "sheep", "mouse", "otter", "eagle", "shark", "koala",
        "panda", "moose", "goose", "donkey", "rabbit",
        "giraffe", "gorilla", "leopard", "dolphin", "penguin", "octopus", "squirrel", "hedgehog", "kangaroo", "flamingo",
        "antelope", "buffalo", "peacock", "raccoon", "walrus",
        "chimpanzee", "rhinoceros", "hippopotamus", "crocodile", "armadillo", "porcupine", "chameleon", "woodpecker", "orangutan", "platypus",
        "mongoose", "wolverine", "albatross", "barracuda", "cheetah",
        "narwhal", "wombat", "meerkat", "jackal", "tarsier"};

    int min = 0;
    int max = (sizeof(animalWords) / sizeof(animalWords[0])) - 1;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min, max);

    int randNum = distrib(gen);

    return animalWords[randNum];
}

void drawHangman(int attemptsLeft)
{
    if (attemptsLeft == 6)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (attemptsLeft == 5)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (attemptsLeft == 4)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |     |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (attemptsLeft == 3)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (attemptsLeft == 2)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|\\" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (attemptsLeft == 1)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|\\" << endl;
        cout << "  |    /" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (attemptsLeft == 0)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|\\" << endl;
        cout << "  |    / \\" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
};