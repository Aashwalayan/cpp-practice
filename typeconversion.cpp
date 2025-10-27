//type conversion is converting one data type to another
//there are two types 
//1. implicit -> happens automatically
//2. explicit -> precede a value with another data type

#include <iostream>

int main(){
    double x = 3.14;

    std::cout<<x<<"\n";

    x = (int) 3.14;
    std::cout<<x<<"\n";


    x = 100;
    std::cout<<(char)x<<"\n";

    //example: when you have to give a grade

    int correct = 7;
    int totalQuestions = 10;
    double score = correct / (double) totalQuestions * 100;

    std::cout << score << "%";
}