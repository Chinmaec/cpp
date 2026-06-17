#include <iostream>
// loop inside another loop
int main()
{
    int rows;
    int columns;
    char symbol; 

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Which symbol do you want to use?: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}