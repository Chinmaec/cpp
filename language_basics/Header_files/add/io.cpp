#include <iostream>
#include "io.h"

void writeAnswer(int ans)
{
    std::cout << ans;
}

int readNumber()
{
    int num;
    std::cout << "Type the number: ";
    std::cin >> num;
    return num;
}