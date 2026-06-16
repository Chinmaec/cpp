# include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result; 

    std::cout << "**********CALCULATOR***************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        std::cout << "result: " << num1 + num2 << '\n';
        break;
    case '-':
        std::cout << "result: " << num1 - num2 << '\n';
        break;
    case '*':
        std::cout << "result: " << num1 * num2 << '\n';
        break;
    case '/':
        std::cout << "result: " << num1 / num2 << '\n';
        break;
    default:
        std::cout << "The inputs you put are not valid. Please try again." << '\n';
        break;
    }

    std::cout << "***********************************";
    return 0; 
}