#include <iostream>
#include <string>

void pizza();
void pizza(std::string topping1);
void pizza(std::string topping1, std::string topping2);

int main(){
    pizza("pepperoni", "pineapple");
    return 0;
}

void pizza(){
    std::cout << "Here is your pizza!" ;
}
void pizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!" ;
}
void pizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!" ;
}