#include <iostream>
# include <vector>

//typedef std::string text_t; 
//typedef int num_t;

// typedef is a reserved keyword used to create an easier alias for readability and reducing typos
// using has been replacing typedef tho  

using text_t = std::string;
using num_t = int; 

int main(){
    text_t firstName = "Chinmae";
    std::string secondName = "Chittybabu";
    num_t age = 22;


    std::cout << firstName << " " << secondName ;
    std::cout << " is " << age << " years old!"; 
    return 0; 
}