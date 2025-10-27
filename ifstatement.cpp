//if statements do something if a statement is true
// then we go to the else-if statement (if it exists), this works the same as if statements
// everything inside the else curly braces get executed if the if statement is false

#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;

    if(age >= 18){
        cout<<"You are over 18";
    }else if(age <= 0){
        cout<<"You haven't been born yet!";
    }else{
        cout<<"You are under 18";
    }

}