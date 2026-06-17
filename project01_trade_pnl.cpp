// Project 01 — Trade P&L Calculator
// Concepts: functions, parameters, return values, double arithmetic, bool + ternary
// Input:  entry price, exit price, quantity, long or short (bool)
// Output: realized P&L for a single closed trade
// Long:  (exit - entry) * qty
// Short: (entry - exit) * qty

#include <iostream>

int main(){

    // input parameters
    double entry = 120;
    double exit = 140;
    double quantity = 6; 
    bool isLong = true;

    double diff = (isLong ? (exit - entry) : (entry - exit));

    std::cout << "$" << diff * quantity << '\n';

    return 0; 
}