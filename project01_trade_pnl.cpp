// Project 01 — Trade P&L Calculator
// Concepts: functions, parameters, return values, double arithmetic, bool + ternary
// Input:  entry price, exit price, quantity, long or short (bool)
// Output: realized P&L for a single closed trade
// Long:  (exit - entry) * qty
// Short: (entry - exit) * qty

//define pnl() function with entry, exit, qty, and direction params
//handle long/short logic via ternary operator
//format output to 2 decimal places with iomanip

#include <iostream>
#include <iomanip>

double pnl(double entry_price, double exit_price, double quantity, bool isLong){
    double diff = (isLong ? (exit_price - entry_price) : (entry_price - exit_price));
    return (diff * quantity); 
    }

int main(){

    // input parameters

    double result1 = pnl(120,140,12,true); //long winner
    double result2 = pnl(126, 103.85, 6, true); // long loser
    double result3 = pnl(126, 103.85, 6, false); // short winner
    double result4 = pnl(120, 140, 12, false);    // short loser

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "$" << result2 << '\n';

    return 0;
}

