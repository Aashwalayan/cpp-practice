// we can have the same function name with different parameters!

#include <iostream>

using namespace std;

void sayHi(){
    cout << "Hello\n";
}

void sayHi(string name){
    cout << "hello your name is " << name <<".\n";
}

void sayHi(string name, int age){
    cout << "hello your name is " << name <<", you are " << age << " years old.\n";

}


int main(){
    sayHi();
    sayHi("Aashwalayan");
    sayHi("Aashwalayan", 20);
    
}