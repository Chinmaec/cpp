#include <iostream>
#include <string>

// loop that eases the traversal over an iterable data set but it is less flexible 
int main(){
    
    // std::string students[] = {"spongebob","patrick","squidqard","sandy"};
    char grades[] = {'A','B','C','D','E'};   
    
    // for(std::string student : students){
    //     std::cout << student << "\n"; 
    // }    
    
    for(char grade : grades){
        std::cout << grade << "\n"; 
    }
    
    return 0; 

}