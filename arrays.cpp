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

    int nums[] = {1,2,3,4,5};

    int n = sizeof(nums) / sizeof(nums[0]);

    printArray(nums, n);

    

    int nums2[] = {1,2,3,4,5};

    if(nums == nums2){
        cout << "equal";
    }else{
        cout << "Not Equal";
    }

    return 0;

}