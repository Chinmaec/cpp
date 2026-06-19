#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0.00;
    int choice = 0; 

    do{
        std::cout << "******************\n";
        std::cout << "******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;

        // to prevent the program breaking when there are unknown characters
        std::cin.clear(); 
        fflush(stdin); 

        switch (choice)
        {
        case 1:
                showBalance(balance);
                break;
        case 2:
                balance = balance + deposit();
                showBalance(balance);
                break;
        case 3:
                balance = balance - withdraw(balance);
                showBalance(balance);
                break;
        case 4:
                std::cout << "You have now exited the program.\n";
                break;
        default:
                std::cout << "Please choose a number from the existing options.\n";
                break;
        }
    }while(choice !=4);


    return 0; 
}

void showBalance(double balance)
{
        std::cout << "Your balance is: $ " << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{
        double amount = 0;
        std::cout << "Enter the amount to be deposited: \n";
        std::cin >> amount;

        if(amount >0){
                return amount;
        }
        else{
                std::cout << "That's not a valid amount. \n";
                return 0; 
        }
}

double withdraw(double balance)
{
        double amount = 0;

        std::cout << "Enter amount you want to withdraw: \n";
        std::cin >> amount;

        if (amount < balance)
        {
                return amount;
        }
        else if(amount < 0){
                std::cout << "That's not a valid amount.";
                return 0; 
        }
        else
        {
                std::cout << "You do not enough balance. \n";
                return 0;
        }
}