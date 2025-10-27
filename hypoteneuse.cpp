#include <iostream>
#include <cmath>
int main(){
    using namespace std;
    double side_a;
    double side_b;
    double hypoteneuse;


    cout<<"Enter the first side of the triangle: \n";
    cin>>side_a;

    cout<<"Enter the second side of the triangle: \n";
    cin>>side_b;

    hypoteneuse = sqrt(pow(side_a, 2) + pow(side_b, 2));
    cout<<"The Hypoteneuse of the given triangle is: "<<hypoteneuse;

}