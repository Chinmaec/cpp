#include <iostream>
// Local variables will be preferred over global variables while executing the code 
int myNum = 3; 

void printNum();

int main(){
    int myNum = 1; 
    printNum();
    std::cout << ::myNum << " \n"; 

    return 0; 
}

void printNum(){
    int myNum = 2; 
    //std::cout << myNum << " \n"; 
    std::cout << ::myNum << " \n"; //:: forces the function to take the global variable instead
} 