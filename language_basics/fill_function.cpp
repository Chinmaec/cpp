#include <iostream>

// fills a range of elements with a specified value
//fill(begin,end,value)

int main(){
    const int size = 20;
    std::string foods[size];

    fill(foods, foods + (size/2), "pizza");
    fill(foods + (size/2), foods + size, "hamburger");
    for(std::string food : foods){
        std::cout << food << "\n";
    }

    return 0; 

}