#include <iostream>

int main(){
    std::string name; 
    // while (name.empty())
    // {
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin,name);
    // }

    // std::cout << "Hello " << name;

    while (1==1)
    {
        std::cout << "Help! I'm stuck in an infinite loop";
        std::getline(std::cin,name);
    }

}