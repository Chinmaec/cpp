// #include <iostream>

// int getValue()
// {
//     std::cerr << "getValue() called\n";
//     return 4;
// }

// int main()
// {
//     std::cerr << "main() called\n";
//     std::cout << getValue << '\n';

//     return 0;
// }

#include <iostream>

int getValue()
{
    std::cerr << "getValue() called\n";
    return 4;
}

int main()
{
    std::cerr << "main() called\n";
    std::cout << getValue() << '\n'; // added parenthesis here

    return 0;
}