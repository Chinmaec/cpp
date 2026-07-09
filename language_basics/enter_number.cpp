#include <iostream>

int main(){
    int c1;
    int c2;

    std::cout << "Enter an integer: " << "\n";
    std::cin >> c1; 

    std::cout << "Enter another integer: " << "\n";
    std::cin >> c2;

    std::cout << c1 << " + " << c2 << " = " << c1 + c2 << "\n";
    std::cout << c1 << " - " << c2 << " = " << c1 - c2 << "\n";

    return 0; 

}


