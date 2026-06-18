#include <iostream>

double square(double length);
double cube(double length);

int main()
{
    double length = 5.0;
    double volume = cube(length);
    double area = square(length);

    std::cout << "Area: " << area << " cm^2\n";
    std::cout << "Volume: " << volume << " cms^3\n";

    return 0;
}

double square(double length)
{
    double result = length * length;
    return result;
}

double cube(double length)
{
    double result = length * length * length;
    return result;
}