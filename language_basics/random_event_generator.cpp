#include <iostream>
#include <ctime>

int main(){
    srand(time(0)); //this will use the current time as a seed to generate nummbers
    int randNum =rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You won a bumber sticker!";
        break;
    case 2:
        std::cout << "You won a t-shirt!";
        break;
    case 3:
        std::cout << "You won free lunch!";
        break;
    case 4:
        std::cout << "You won an amazon gift card!";
        break;
    case 5:
        std::cout << "You won concert tickets!";
        break;
    }
    return 0; 
}