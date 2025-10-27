#include <iostream>
#include <array>

using namespace std;

//a function is a resusable block of code!

void sayHi(){
    cout << "Hi!\n";
}

int add(int x, int y){

    int z = x + y;

    return z;

}

double areaOfTriangle(double base, double height){
    return 0.5 * base * height;
}

int main(){

    int arr1[] = {1,2,4,6,4,8,3};

    sayHi();

    cout << add(6,2) << "\n";

    double base;
    double height;

    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the height of the triangle: ";
    cin >> height;

    cout << areaOfTriangle(base, height) << " sqs units\n";

    return 0;
}