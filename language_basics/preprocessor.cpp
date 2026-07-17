// #include <iostream>

// int main()
// {
// #ifndef PRINT_BOB
//     std::cout << "Bob\n";
// #endif

//     return 0;
// }

#include <iostream>

void doSomething()
{
#ifdef PRINT
    std::cout << "Printing!\n";
#endif
#ifndef PRINT
    std::cout << "Not printing!\n";
#endif
}

void doSomething(); // forward declaration for function doSomething()

#define PRINT

int main()
{
    doSomething();

    return 0;
}