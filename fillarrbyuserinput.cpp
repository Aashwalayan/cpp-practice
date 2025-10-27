#include <iostream>

using namespace std;

void printArray(int arr[], int n){
    cout << "{";
    for(int i = 0; i < n; i++){
        cout << arr[i];
        if(i < n - 1){
            cout << ", ";
        }
    }

    cout << "}";
}

int main(){
    int size;
    int input;

    cout << "Enter the size of the array: ";
    cin >> size;

    int nums[size];

    for(int i = 0; i < size; i++){
        cout << "Enter a Number: ";
        cin >> input;
        nums[i] = input;
        
    }


    printArray(nums, size);

    return 0;
}