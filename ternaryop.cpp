//ternary operators are used in place of normal if statements
//condtion ? expression1 : expression2

#include <iostream>
using namespace std;


int main(){

    //how we normally do this

    int marks = 75;

    if(marks >= 35){
        cout << "You Passed!\n";
    }else{
        cout << "You failed!\n";
    }

    //using ternary operator

    int age = 2;

    age >= 18 ? cout << "You are an adult" : cout << "You are not an adult";

    return 0;
}