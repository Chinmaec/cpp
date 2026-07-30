// C++ program to generate a random number in a range

#include <iostream>
#include <random>
using namespace std;

int main()
{
    // Define range
    int min = 0;
    int max = 8;

    // Initialize a random number generator
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min, max);

    int randomValue = distrib(gen);
    cout << "Random number between " << min << " and "
         << max << " is " << randomValue << endl;

    return 0;
}