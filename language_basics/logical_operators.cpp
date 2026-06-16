#include <iostream>

int main(){
    // && checks if two conditions are true
    // || checks if at least one of the two conditions are true 
    // ! = not 

    int temp = 26;

    // if (temp > 0 && temp < 30){
    if (temp <= 0 || temp >=30){
        std::cout << "The temperature is bad\n";
    }
    else{
        std::cout << "The temperature is good\n";
    }


    bool sunny = true; 
    if (!sunny){
        std::cout << "It is cloudy outside\n";
    }
    else{
        std::cout << "It is sunny outside\n";
    }
    return 0;
}