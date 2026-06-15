# include <iostream>
# include <string>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){

    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;
    
    std::cout << "What's your full name?: ";
    //std::cin >> name; 
    std::getline(std::cin >> std::ws, name); // better option if you need whitespaces accepted as well 
    // added std::ws so it doesn't have an isssue when it is cin followed by get line, if not it just skips it as a space bar

    std::cout << "Hello " << name << "\n"; 
    std::cout << "You are " << age << " years old!";

    return 0; 
}