#include <iostream>

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << " :)\n";
    std::cout << "Happy Birthday to you!\n\n";

    std::cout << "You are now " << age << " years old!";
}

int main(){

    std::string name = "Chinmae";
    int age = 22; 

    happyBirthday(name, age);


    return 0;
}