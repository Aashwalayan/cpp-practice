#include <iostream>
using namespace std;

//pointers are variable that store the memory location of another variable
//address of operator: &
// * dereference operator

int main(){

    string house = "1";
    string *address = &house;

    cout << house << "\n";                  //variable1
    cout << address << "\n";                //variable that contains the address of variable1
    cout << *address << "\n";               //data inside that address
    cout << &house << "\n";                 //address of that variable1 

    return 0;
}