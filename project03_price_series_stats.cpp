#include <iostream>

// print: the number of ticks, the sum, the average, the min, and the max.
double getTotal(double arr[], size_t n);
double getMin(double arr[], size_t n); 
double getMax(double arr[], size_t n); 
double getAvg(double sum, size_t n);  

int main(){

    double prices[] = {101.2, 100.8, 101.5, 104.23, 99.89, 101.12}; 
    size_t n = sizeof(prices)/sizeof(prices[0]);

    double sum  = getTotal(prices, n);
    double average = getAvg(sum, n);
    double min = getMin(prices, n); 
    double max = getMax(prices, n); 

    std::cout << "*****Price array Statistics*****" << "\n";
    std::cout << "Ticks: " << n << "\n"; 
    std::cout << "Sum: " << sum << "\n"; 
    std::cout << "Average price: " << average << "\n"; 
    std::cout << "Max price: " << max << "\n"; 
    std::cout << "Min price: " << min << "\n"; 

    return 0; 

}

double getTotal(double arr[], size_t size){
    double total = 0; 

    for(int i = 0; i < size; i++){
        total += arr[i];
    }
    return total; 
}

double getAvg(double sum, size_t n){
    return sum/n; 
}  

double getMax(double arr[], size_t n){
    double res = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] >= res){
            res = arr[i]; 
        }
    } 
    return res;
}

double getMin(double arr[], size_t n){
    double res = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] <= res){
            res = arr[i]; 
        }
    } 
    return res;
}
