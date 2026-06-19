// Project 02 — Commission Calculator
// Input:  number of shares (int) OR notional value (double), with an optional custom rate
// Output: commission fee in dollars for either fee model
// Per-share: shares * ratePerShare
// Notional (bps): notional * bps / 10000.0

// define two functions named commission() that coexist via overloading
// overload 1 takes int shares + double rate (default 0.005)
// overload 2 takes double notional + double bps (default 0.1)
// compiler picks overload based on first arg's type
// call each overload once bare (default fires) and once with an explicit rate (default overridden)

#include <iostream>

// in a single file like this, put default only where the function is defined
double commission(int shares, double rate = 0.005)
{
    return shares * rate;
}

double commission(double notional, double bps = 0.1)
{
    return notional * bps / 10000.0;
}

int main(){

    double com1 = commission(200, 0.01);
    double com2 = commission(50000.0, 0.2);

    std::cout << com1 << '\n';
    std::cout << com2 << '\n';

    return 0;
}

