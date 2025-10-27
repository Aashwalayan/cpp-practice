#include <iostream>
using namespace std;

//null pointers are pointers that point to nowhere
//happens when a pointer is holding a null value

//nullptr: keyword that represents null pointers

//null pointers are helpful determining if an addresss
//was succesfull assigned to a pointer

int main(){

    int *pointer = nullptr;
    //int x = 123;

    //pointer = &x;

    cout << *pointer << "\n"; // this will make the program crash, since theres no address inside *pointer
    cout << pointer << "\n";
    //cout << &x << "\n";

    return 0;
}