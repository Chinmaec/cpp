#include <iostream>

int main() {
    // integer (whole number)
    int age = 21;
    int year = 2024; 
    int days = 7.6; 

    // double (number with decimal)
    double price = 10.99;
    double gpa = 2.5; 
    double temperature = 25.1;

    // single character 
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (True or False)
    bool student = true; 
    bool power = false;

    // string (objects that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday"; 
    std::string food = "Pizza"; 
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';
    
    return 0;
    
}