# include <iostream>

int main(){
    //ternary operator ?: replacement of an if/else statement
    // condition ? expression1 : expression2; 

    //int grade = 105;
    //grade >= 60 ? std::cout << "You pass :)" : std::cout << "You fail :(";

    //int number = 9; 
    //number % 2 == 0 ? std::cout << "Odd number" : std::cout << "Even number"; 

    bool hungry = false; 
    std::cout << (hungry ? "You are hungry": "You are full");
    return 0;
}