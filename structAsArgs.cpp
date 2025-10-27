#include <iostream>
using namespace std;

struct car{

    string model;
    int year;
    string color;

};

void printCarInfo(car car){
    cout << car.model << "\n";
    cout << car.year << "\n";
    cout << car.color << "\n\n";
}

int main(){

    car car1;
    car car2;

    car1.model = "Swift";
    car1.year = 2022;
    car1.color = "White";

    car2.model = "Thar";
    car2.year = 2023;
    car2.color = "Black";

    printCarInfo(car1);
    printCarInfo(car2);

}
