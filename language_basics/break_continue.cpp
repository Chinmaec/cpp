#include <iostream> 

int main(){
    for(int i=1; i<=20; i++){
        if(i==13){
            //continue;
            break;
        }
        std::cout << i << "\n";

    }
    return 0;
}