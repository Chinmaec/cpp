#include <iostream>
#include <cstdlib>

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    std::cout << "Hello\n";
    std::cin.get();

    clearScreen();

    std::cout << "Screen cleared!\n";
}