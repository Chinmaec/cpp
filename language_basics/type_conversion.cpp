# include <iostream>

int main()
{
    // type conversion is to convert a value from one data type to another 
    // Implicit = automatic
    // Explicit = Precede value with a new data type 

    //double x = 3.14;
    //std::cout << (int) x;

    int correct = 8; 
    int questions = 10; 
    //double score = correct/question * 100;
    double score = correct / (double)questions * 100;
    std::cout << score << "%";
    return 0; 
}