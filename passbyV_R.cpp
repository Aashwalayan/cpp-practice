#include <iostream>
using namespace std;

//passing by value doesn't work
//because we pass the copies of that variable

void swap(string &s1, string &s2){
    string temp;

    temp = s1;
    s1 = s2;
    s2 = temp;
}

int main(){

    string cup1 = "Tea";
    string cup2 = "Water";
    string temp;

    //temp = cup1;
    //cup1 = cup2;
    //cup2 = temp;

    swap(cup1, cup2);

    cout << "Cup1: " << cup1 << "\n";
    cout << "Cup2: " << cup2 << "\n";

    

    return 0;

    
}