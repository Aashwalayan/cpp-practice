#include <iostream>
using namespace std;

enum Day {
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};

int main(){

    Day today = Sunday;

    if (today == Sunday || Saturday){
        cout << "Its Weekend\n";
    }else{
        cout << "Its Weekday\n";
    }
}