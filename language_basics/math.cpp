# include <iostream>
# include <cmath>

// www.cplusplus.com/reference/cmath/ for the other math functions 
int main(){
    double x = 3; 
    double y = 4; 
    double z; 

    //z = std::max(x,y);
    //z = std::min(x,y);

    //z = pow(2,4); // 2 to the power 4 
    //z = sqrt(16);

    z = sqrt(9);
    z = abs(-3);

    z = round(7.14);
    z = ceil(7.14); //ceiling function
    z = floor(7.14);

    std::cout << z;
    return 0; 
}