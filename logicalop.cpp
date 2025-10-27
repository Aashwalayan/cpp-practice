#include <iostream>
using namespace std;

int main(){

    // && (AND)operator checks if both the conditions are true

    int temp;
    cout << "Enter a Temprature: ";
    cin >> temp;
    
    if(temp > 0 && temp < 20){
        cout << "Its Cold\n";
    }else if(temp >= 20 && temp < 35){
        cout << "Its Warm\n";
    }else if(temp >= 35){
        cout<< "Its Hot\n";
    }else{
        cout << "Its Freezing\n";
    }


    // || (OR) operator checks if either one of the conditions is true

    if(temp <= 0 || temp > 35){
        cout<<"The Weather is Bad\n";
    }else{
        cout << "The Weather is Nice\n";
    }

    // ! (NOT) operator flips the output from true to false or vice-versa

    if(!temp == 0){
        cout << "This is not the freezing point of water";
    }else{
        cout << "This is the freezing point of water";
    }

    return 0;
}