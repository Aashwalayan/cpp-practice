//local variables are declared within a function or block
//global variables are declared outside any function

#include <iostream>

using namespace std;

void printNum(){
    cout << "\n";
    int num = 2;
    cout << num; 
}

int main(){
    int num = 10;
    cout << num;    // this will print just fine because its inside function where the variable was declared
    printNum();
}

