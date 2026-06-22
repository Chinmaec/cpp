#include <iostream>
#include <numeric>
#include <algorithm>

int getMin(double arr[], int n){
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]); 
    return res
}

int getMax(double arr[], int n){
    int res = arr[0]; 
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]); 
    return res; 
}
int main(){
    double prices[] = {101.2, 100.8, 101.5}; 
    size_t n = sizeof(prices)/sizeof(prices[0]);
    double sum  = std::accumulate(prices, prices+n, 0);
    double average = sum / n ;
    int min = getMin(double prices, int n); 
    int max = getMax(double prices, int n); 

    std::cout << "Ticks: " << n << "\n"; 
    return 0; 

}