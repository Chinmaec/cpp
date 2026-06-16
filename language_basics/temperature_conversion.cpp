#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "What unit would you like to convert to (F = Fahrenheit, C = Celsius): \n";
    std::cin >> unit;

    switch (unit)
    {
    case 'F':
    case 'f':
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        std::cout << "Temperature is " << (1.8 * temp) + 32.0 << "F\n";
        break;
    case 'C':
    case 'c':
        std::cout << "Enter the temperature in Farenheit: ";
        std::cin >> temp;

        std::cout << "Temperature is " << (temp-32)/1.8 << "C\n";
        break;
    default:
        std::cout << "Please choose either C or F";
    }
}