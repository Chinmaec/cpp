#include <iostream>

int main(){

    // you don't need to declare the number of rows but you need to declare the number of columns
    char letters[][3] = {{'A','B','C'},
                       {'D','E','F'},
                        {'G','H','I'}};
    
    int rows = sizeof(letters)/sizeof(letters[0]);
    int columns = sizeof(letters[0])/sizeof(letters[0][0]);

    for(int i =0; i < rows; i++){
        for(int j=0; j < columns; j++){
            std::cout << letters[i][j] << " ";
        }      
        std::cout << '\n';
    }

    return 0; 

}                        


