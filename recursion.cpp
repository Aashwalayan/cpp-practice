#include <iostream>
using namespace std;

//there are normally two ways to solve a problem
//1. Iteratively
//2. Recursively
// when a single thing needs to be done multiple times
// we use recursion

//when a function calls upon itself to complete a task;


// simple program of walking

void iterativeWalk(int steps){
    for(int i = 1; i <= steps; i++){
        cout << "You took step " << i << "\n";
    }
}

void recursiveWalk(int steps, int stepNumber){
    if(steps > 0){
        cout << "You took step " << stepNumber << "\n";
        recursiveWalk(steps - 1, stepNumber + 1);
    }
}

int main(){

    int steps;
    cout << "How many steps do you want to walk?: ";
    cin >> steps;
    int stepNumber = 1;

    int choice;

    cout << "Choose an approach: \n" << "1. Iterative\n" << "2. Recursive\n";
    cin >> choice;

    if(choice == 1){
        iterativeWalk(steps);
    }else if(choice == 2){
        recursiveWalk(steps, stepNumber);
    }
}