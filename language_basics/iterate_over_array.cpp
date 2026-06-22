#include <iostream>
#include <string>

int main(){
    
    //std::string students[] = {"spongebob","patrick","squidqard","sandy"};
    char grades[] = {'A','B','C','D','E'};
    
    //int n = sizeof(students)/sizeof(students[0]); 
    int n = sizeof(grades)/sizeof(grades[0]); 
    
    for(int i = 0; i < n; i++){
        std::cout << grades[i] << "\n"; 
    }
    
    return 0; 

}