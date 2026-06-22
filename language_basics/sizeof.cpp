#include <iostream>
#include <string>

int main(){
    // sizeof() determines the size in bytes of a variable, data type,class, objects,etc

    std::string name = "Chinmae Chittybabu"; 
    double gpa = 3.8; 
    char grade = 'A'; 
    bool student = true; 
    char grades[] = {'A','B','C','D','F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    // std::cout << sizeof(grades) << " bytes\n"; 
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n"; 
    return 0; 
}