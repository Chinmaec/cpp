#include <iostream>

int main(){
    std::string name;
    std::cout << "enter your name: ";
    std::getline(std::cin,name);   //because name might contain spaces so we are beter off with getline

    // if (name.length()>12){
    //     std::cout << "Your name cannot be over 12 letters";
    // }
    // else{
    //     std::cout << "Welcome " << name;
    // }

    // if (name.empty())
    // {
    //     std::cout << "Your didn't enter your name";
    // }
    // else
    // {
    //     std::cout << "Welcome " << name;
    // }

    // name.clear();
    // std::cout << "Hello " << name;

    // name.append("@gmail.com");
    // std::cout << "Your username is now " << name;

    //std::cout << name.at(3);

    // name.insert(0, "@");
    // std::cout << name;

    // std::cout << name.find(' ');

    name.erase(0,3);  //erase the first 3 characters
    std::cout << name;

    return 0;
}