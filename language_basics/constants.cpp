# include <iostream>

int main(){
    const double PI = 3.14159; // const is for a fixed variable that should not be changed, uppercase to show that it is a constant variable
                               // const makes sure that it's read only and can't be changed 
    double radius = 10; 
    const int WIDTH = 1920; 
    double circumference = 2 * PI * radius; 

    std::cout << circumference << " cm";
    return 0 ; 
    
}