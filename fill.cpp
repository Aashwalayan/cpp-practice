#include <iostream>
using namespace std;

int main(){
    int nums[20];
    int size = sizeof(nums) / sizeof(nums[0]);


    for(int i = 0; i < size; i++){
        fill(nums, nums + size, i + 1);
        cout << nums[i] << " "; 
    }
}