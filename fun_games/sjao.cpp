#include <iostream>

void tryToChange(char& c)
{
    c = 'Z';
}

int main()
{
    char letter = 'A';
    tryToChange(letter);
    std::cout << letter; // what do you think this prints?

    
        std::cout << R"(
    Line 1: This is a block of text.
    Line 2: It preserves tabs and spacing.
    Line 3: No need for manual newline characters!
    )";
    return 0;
    
}