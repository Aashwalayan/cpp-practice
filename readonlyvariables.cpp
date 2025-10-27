#include <iostream>

int main(){

    //program to calculate circumference and area of a circle using read-only variables

    const double pi = 3.14159;
    double radius = 4;

    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;

    std :: cout << "the area of the circle is " << area << "\n";
    std :: cout << "the circumference of the circle is " << circumference << "\n";

    return 0;

}