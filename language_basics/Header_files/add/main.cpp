#include <iostream>
#include "io.h"

int readNumber(); 
void writeAnswer(int ans); 

int main(){
    int n1 = readNumber(); 
    int n2 = readNumber(); 

    int ans = n1 + n2;
    writeAnswer(ans);

    return 0; 
}