# include <iostream>

int main(){
    // order of if statement matters, it executes one by one 
    int age; 

    std::cout << "Enter your age: "; 
    std::cin >> age; 

    if (age>= 100){
        std::cout << "You are too old to enter this site!";
    }
    else if (age < 0){
        std::cout << "You are not even born yet!";
    }
    else if (age >= 18){
        std::cout << "Welcome to the site!"; 
    }
    else{
        std::cout << "You cannot enter this site"; 
    }
}