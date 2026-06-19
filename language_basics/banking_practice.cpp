#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice = 0; 

    std::cout << "******************\n";
    std::cout << "Enter your choice:\n";
    std::cout << "******************\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice; 

    switch(choice){
        case 1: showBalance(balance);
                break;
        case 2: balance = balance + deposit();
                break;
        case 3: balance = balance - withdraw(balance);
                break;        
        case 4: std::cout << "You have now exited the program.";
                break; 
        default:
                std::cout << "Please choose a number from the existing options";
                break;
    }



    return 0; 
}