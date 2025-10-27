//a do while loop executes some codes first 
// then checks if a condition is true then 
// goes back and runs the same code


//its essentially a while loop with a guaranteed first run

#include<iostream>
using namespace std;


int main(){

    int num = 1;

    do{
        cout << "Hello " << num << "\n";
        num++;
    }while(num < 11);
}