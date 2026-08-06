#include <iostream>
#include <vector>

std::vector<double> smas(const std::vector<double>& prices, int w){
    std::vector <double> result;

    for (int i = 0; i + w <= (int)prices.size(); i++) {
        double sum = 0;
        for (int k = 0; k < w; k++) {
            sum += prices[i+k];
        }
        result.push_back(sum/w);
    }
    return result;
}

int main(){
    std::vector<double> prices = {9,10,11,12};
    std::vector<double> result = smas(prices, 3); 

    // eliminate trigger heap reallocations
    result.reserve(prices.size() - 3 + 1); 

    for (double x : result){
        std::cout << x << "\n";
    }

}

