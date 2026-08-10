#include <iostream>
#include <string>
#include <random>

void drawHangman(int attemptsLeft);
std::string chooseWord();

int main()
{
    std::cout << "***********************************************\n";
    std::cout << "Welcome to the Hangman Game! (Animal Edition)\n";
    std::cout << "You get a maximum of 6 incorrect attempts\n"; 

    std::string answer = chooseWord();
    int ans_len = answer.length();
    std::string display(ans_len,'_');
    std::cout << display << "\n";
    std::cout << "Enter your first guess: " << "\n";

    int i = 6;
    std::string guessed = ""; 
    bool won = false; 
    while(i > 0){

        char u_guess; 
        std::cin >> u_guess;
        bool found = false; 

        if (guessed.find(u_guess) != std::string::npos)
        {
            std::cout << "You have already guessed this letter.";
            std::cout << "Guessed letters: " << guessed << "\n";
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
            std::cout << answer << "\n"; 
            std::cout << "You won!\n";
            won = true;
            break;
        }

        std::cout << display << "\n";
    }

    if (!won)
    {
        std::cout << "You lost :(\n";
        std::cout << "The answer was: " << answer << "\n";
    }
}

std::string chooseWord()
{
    std::string animalWords[50] = {
        "tiger", "zebra", "horse", "camel", "sheep", "mouse", "otter", "eagle", "shark", "koala",
        "panda", "moose", "goose", "donkey", "rabbit",
        "giraffe", "gorilla", "leopard", "dolphin", "penguin", "octopus", "squirrel", "hedgehog", "kangaroo", "flamingo",
        "antelope", "buffalo", "peacock", "raccoon", "walrus",
        "chimpanzee", "rhinoceros", "hippopotamus", "crocodile", "armadillo", "porcupine", "chameleon", "woodpecker", "orangutan", "platypus",
        "mongoose", "wolverine", "albatross", "barracuda", "cheetah",
        "narwhal", "wombat", "meerkat", "jackal", "tarsier"};

    int min = 0;
    int max = (sizeof(animalWords) / sizeof(animalWords[0])) - 1;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);

    int randNum = distrib(gen);

    return animalWords[randNum];
}

void drawHangman(int attemptsLeft)
{
    if (attemptsLeft == 6)
    {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 5)
    {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 4)
    {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 3)
    {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |    /|" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 2)
    {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |    /|\\" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 1)
    {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |    /|\\" << std::endl;
        std::cout << "  |    /" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 0)
    {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |    /|\\" << std::endl;
        std::cout << "  |    / \\" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
};