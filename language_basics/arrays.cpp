#include <iostream>

// arrays can only be of one data type 
int main(){

    // std::string cars[] = {"corvette", "mustang", "Camry"};
    // cars[0] = "BMW";

    std::string cars[3];
    cars[0] = "Camaro";    
    cars[1] = "Camry";    
    cars[2] = "Mustang";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    return 0; 
}