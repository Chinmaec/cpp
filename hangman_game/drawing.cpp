#include <iostream>
#include "drawing.h"

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
    if (attemptsLeft == 5) {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 4) {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 3) {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |    /|" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 2) {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |    /|\\" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 1) {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |    /|\\" << std::endl;
        std::cout << "  |    /" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
    else if (attemptsLeft == 0) {
        std::cout << "   _____" << std::endl;
        std::cout << "  |     |" << std::endl;
        std::cout << "  |     O" << std::endl;
        std::cout << "  |    /|\\" << std::endl;
        std::cout << "  |    / \\" << std::endl;
        std::cout << "  |" << std::endl;
        std::cout << "  |" << std::endl;
    }
};
