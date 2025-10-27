#include <iostream>
using namespace std;

void printFibonacci(int length){
    int i = 1;
    do {
        cout << i << " ";
        i = i + i;
        length--;
    }while(length > 0);
}
    

int main(){

    int length;

    cout << "Enter The length Of Series: ";
    cin >> length;

    printFibonacci(length);

    
}