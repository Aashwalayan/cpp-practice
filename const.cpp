#include <iostream>
using namespace std;

void printInfo(const string name, const int age){

    //name = " ";
    //age = -90;
    // to prevent from making unwanted changes to variables
    // we use the const keyword

    cout << name << "\n";
    cout << age << "\n";
}

int main(){
    string name = "Aashwalayan";
    int age = 20;

    printInfo(name, age);
}