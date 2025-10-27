#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL;

    ptr = new int;

    *ptr = 123;

    cout << "Address: " << ptr << "\n";
    cout << "Value: " << *ptr << "\n";

    delete ptr;

    //cout << *ptr;
}