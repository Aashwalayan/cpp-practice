#include <iostream>

using namespace std;



void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j + 1]){

            }else{
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\n";
}

void printArray(int arr[], int n){
    cout << "{";
    for(int i = 0; i < n; i++){
        cout << arr[i];
        if(i < n - 1){
            cout << ", ";
        }
    }

    cout << "}";
    cout << "\n";
}

int main(){
    int arr[] = {1, 5, 6, 3, 2, 9, 10, 7, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    printArray(arr, n);
    bubbleSort(arr, n);
    cout << "Sorted Array: ";
    printArray(arr, n);
}