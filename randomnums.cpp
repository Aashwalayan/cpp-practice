#include <iostream>
#include <ctime>

using namespace std;

//these are psuedo-random numbers
//not truly random but close

int main(){
    srand(time(0));

    int num = (rand() % 6) + 1; // % 6 to get a number from 0 to 5, then we shift tp 1-6 by adding + 1
    cout << num;
}