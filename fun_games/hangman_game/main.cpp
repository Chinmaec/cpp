#include <iostream>
#include <string>
#include "drawing.h"

int main(){
    std::cout << "***********************************************";
    std::cout << "Welcome to the Hangman Game!\n";
    std::cout << "You get a maximum of 6 incorrect attempts\n"; 
    std::cout << "Enter your first guess: " << "\n";

    int guesses; 
    std::string answer = "tiger";
    
    int i = 6;
    while(i >= 0){

        std::cout << i << "\n";
        drawHangman(i); 
        i--; 
    }
    std::cout << "***********************************************";
    return 0; 
}